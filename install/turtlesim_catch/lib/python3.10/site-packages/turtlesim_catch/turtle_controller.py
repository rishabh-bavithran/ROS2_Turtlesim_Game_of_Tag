#!/usr/bin/env python3
import rclpy
from rclpy.node import Node 
import math
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose 

from turtlesim_catch_interfaces.msg import Turtleinfo
from turtlesim_catch_interfaces.msg import Turtleinfoarray
from turtlesim.srv import Kill
from functools import partial
from turtlesim_catch_interfaces.srv import TargetTurtle


class BossTurtle(Node):

    def __init__(self): 
        super().__init__("boss_node")
        self.get_logger().info("Node is running")

        self.boss = None
        self.get_coordinates = self.create_subscription(Pose, "turtle1/pose", self.callback_get_coordinates, 10)
        self.command = self.create_publisher(Twist, "turtle1/cmd_vel", 10) 
        self.current_target = None 
        self.last_target = 1

        #ADJUST FREQUENCY OF CONTROLLER
        self.frequency_controller = 0.01
        self.control_loop_timer = self.create_timer(self.frequency_controller, self.controller)
        self.get_alive_turtles = self.create_subscription(Turtleinfoarray , "turtles_info", 
                                                          self.callback_get_alive_turtles, 10)
        self.alive_turtles = [] 

        #PROPORTIONAL CONSTANTS FOR BOSS TURTLE
        self.kp_x = 2
        self.kp_theta = 6

    def callback_kill_turtle(self, future, name):
        try: 
            response = future.result()            
            self.get_logger().info("Turtle  has been killed" + str(response.success))

        except Exception as e: 
            self.get_logger().error("Service call failed %r" % (e,))


    def controller(self): 
 
        if self.boss == None or self.current_target == None:
            return 
        
        else: 
            error_x  = self.current_target.x - self.boss.x
            error_y  = self.current_target.y - self.boss.y 
   
            
            dist = math.sqrt((error_x*error_x + error_y*error_y))
                
            if dist < 0.5: 
  
                killing_prey = self.create_client(TargetTurtle, "kill_turtle") 
                while not killing_prey.wait_for_service(1.0):
                    self.get_logger().warn("Waiting for server to connect to Kill turtle")
                
                request = TargetTurtle.Request()
                request.name = self.current_target.name
                self.get_logger().info("Killing" + str(request.name))

                future = killing_prey.call_async(request)
                self.get_logger().info("KILLED " + str(request.name))
                future.add_done_callback(partial(self.callback_kill_turtle,name = request.name))
                self.current_target = None
                self.last_target = 1
                
                # pass

        
            else: 
                msg = Twist()


                msg.linear.x = self.kp_x * dist
                msg.linear.y = 0.0 

                angular_error = (math.atan2(error_y, error_x) - self.boss.theta)
                
                if angular_error > math.pi: 
                    angular_error -= 2*math.pi
                elif angular_error < -math.pi: 
                    angular_error += 2*math.pi


                msg.angular.z = self.kp_theta * angular_error
                self.command.publish(msg)

    def callback_get_coordinates(self, msg):
        self.boss = msg
 

    def callback_get_alive_turtles(self, msg): 

        self.alive_turtles = msg.turtles 
        
        if self.last_target == 1 : 
            self.last_target = 0 
            closest_distance = 1000
            for (i, turtle) in enumerate(self.alive_turtles):
                distance_x = self.boss.x - turtle.x
                distance_y = self.boss.y - turtle.y

                distance = math.sqrt(distance_x**2 + distance_y**2)

                if distance < closest_distance: 
                    closest_distance = distance
                    target_number = i

            self.current_target = self.alive_turtles[target_number]
            self.get_logger().info("Current Target = " + str(self.current_target))


def main(args=None):
    rclpy.init(args=args)
    node = BossTurtle()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__": 
    main()