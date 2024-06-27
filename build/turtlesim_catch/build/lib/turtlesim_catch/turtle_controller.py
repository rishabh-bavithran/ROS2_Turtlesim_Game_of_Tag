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
        # self.current_target = Turtleinfo()
        # self.last_target = Turtleinfo()
        self.current_target = None 
        self.last_target = 1
        # self.current_target.x = 8.0
        # self.current_target.y = 4.0
        # self.current_target.theta = 1.4
        # self.current_target.name = "Testing"
        self.control_loop_timer = self.create_timer(0.01, self.controller)

        self.get_alive_turtles = self.create_subscription(Turtleinfoarray , "turtles_info", 
                                                          self.callback_get_alive_turtles, 10)
        self.alive_turtles = [] 

        self.get_logger().info("current target = " + str(self.current_target))
        self.get_logger().info("last target = " + str(self.last_target))


    def callback_kill_turtle(self, future, name):
        try: 
            response = future.result()
            
            self.get_logger().info("Turtle  has been killed" + str(response.success))

        except Exception as e: 
            self.get_logger().error("Service call failed %r" % (e,))


    def controller(self): 
        #self.get_logger().info("this is inside controller outside if")
        # if self.current_target.name!=self.last_target.name and self.boss_x!=None: 
    
        if self.boss == None or self.current_target == None:
            return 
        
        else: 
            # self.get_logger().info("Inside Controller")
            error_x  = self.current_target.x - self.boss.x
            error_y  = self.current_target.y - self.boss.y 
            # self.get_logger().info("Error x = " + str(error_x))
            # self.get_logger().info("Error Y = " + str(error_y))
            
            dist = math.sqrt((error_x*error_x + error_y*error_y))
            # self.get_logger().info("Error Distance = " + str(dist))
                
            if dist < 0.5: 
                # self.last_target = self.current_target
                # self.alive_turtles.pop(0)
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
                #self.alive_turtles.pop(0)
                self.get_logger().info("ALIVE TURTLES = " + str(self.alive_turtles))
                self.last_target = 1
                
                # pass

        
            else: 
                msg = Twist()

                msg.linear.x = 2 * dist
                msg.linear.y = 0.0 

                angular_error = (math.atan2(error_y, error_x) - self.boss.theta)
                
                if angular_error > math.pi: 
                    angular_error -= 2*math.pi
                elif angular_error < -math.pi: 
                    angular_error += 2*math.pi


                msg.angular.z = 6 * angular_error
                #self.get_logger().info("Debugging")
                self.command.publish(msg)

    def callback_get_coordinates(self, msg):
        #self.get_logger().info(str(msg))
        # self.get_logger().info("X Coordinate = " + str(msg.x))
        # self.get_logger().info("y Coordinate = " + str(msg.y))
        #self.get_logger().info("Orientation = " + str(msg.theta))
        # self.get_logger().info("Got coordinates of BOSS NODE")
        self.boss = msg
        # self.get_logger().info("x boss = "  + str(self.boss.x))
        # self.get_logger().info("y_boss = " + str(self.boss.y))


    def callback_get_alive_turtles(self, msg): 
        self.get_logger().info("WHAT")
        self.get_logger().info("Got Alive Turtles")

        self.alive_turtles = msg.turtles 
        
        if self.last_target == 1 : 
            self.last_target = 0 
            self.current_target = self.alive_turtles[0]
            self.get_logger().info("Current Target = " + str(self.current_target))
        self.get_logger().info(str(self.alive_turtles))
        

def main(args=None):
    rclpy.init(args=args)
    node = BossTurtle()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__": 
    main()