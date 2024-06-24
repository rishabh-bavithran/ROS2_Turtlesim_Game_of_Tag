#!/usr/bin/env python3
import rclpy
from rclpy.node import Node 

class BossTurtle(Node):

    def __init__(self): 
        super().__init__("boss_node")
        self.get_logger().info("Node is running")



def main(args=None):
    rclpy.init(args=args)
    node = BossTurtle()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__": 
    main()