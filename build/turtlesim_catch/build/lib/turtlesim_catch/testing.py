#!/usr/bin/env python3
import rclpy
from rclpy.node import Node 
import math
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose 
from turtlesim_catch_interfaces.msg import Turtleinfo
from turtlesim_catch_interfaces.msg import Turtleinfoarray

class TestingNodeings(Node):

    def __init__(self): 
        super().__init__("test_node")

        self.get_logger().info("Testing Node is running")
        self.alive_turtles = []
        self.targets_subscription = self.create_subscription(Turtleinfoarray ,"turtles_info", self.chup, 10)
        self.current_target = Turtleinfo()
        self.last_target = Turtleinfo()
        self.current_target.name = "bb"

    def chup(self,msg):
        self.get_logger().info("ab kaise")
        self.get_logger().info("Got Alive Turtles")

    #     self.alive_turtles = msg.turtles 
        
    #     if len(self.alive_turtles) > 0 and self.last_target.name == self.current_target.name : 
    #         self.current_target = self.alive_turtles[0]
    #         self.get_logger().info("Current Target = " + str(self.current_target))
    # #self.get_logger().info(str(self.alive_turtles))

def main(args=None):
    rclpy.init(args=args)
    node = TestingNodeings()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__": 
    main()