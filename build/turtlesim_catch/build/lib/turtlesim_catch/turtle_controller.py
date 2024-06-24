#!/usr/bin/env python3
import rclpy
from rclpy.node import Node 

from geometry_msgs.msg import Twist
from turtlesim.msg import Pose 

class BossTurtle(Node):

    def __init__(self): 
        super().__init__("boss_node")
        self.get_logger().info("Node is running")
        self.command = self.create_publisher(Twist, "turtle1/cmd_vel", 10) 
        self.create_timer(1, self.controller)
        self.get_coordinates = self.create_subscription(Pose, "turtle1/pose", self.callback_get_coordinates, 10)


    def controller(self): 
        msg = Twist()
        msg.linear.x = 0.3
        msg.linear.y = 0.1 

        msg.angular.z = 0.1
        self.get_logger().info("Debugging")
        self.command.publish(msg)

    def callback_get_coordinates(self, msg):
        #self.get_logger().info(str(msg))
        self.get_logger().info("X Coordinate = " + str(msg.x))
        self.get_logger().info("y Coordinate = " + str(msg.y))
        

def main(args=None):
    rclpy.init(args=args)
    node = BossTurtle()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__": 
    main()