#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import random 
import numpy as np

from turtlesim.srv import Spawn
from functools import partial
from turtlesim_catch_interfaces.msg import Turtleinfoarray
from turtlesim_catch_interfaces.msg import Turtleinfo

class TurtleSpawner(Node):

    def __init__(self):
        super().__init__("prey_turtles")
        self.get_logger().info("Turtle Spawner node has started")

        self.turtle_spawner = self.create_timer(1, self.call_turtle_spawner)
        self.alive_turtles_publisher = self.create_publisher(Turtleinfoarray, "turtles_info", 10)
        self.alive_turtles = []

        
    def call_turtle_spawner(self):
        spawn = self.create_client(Spawn, "spawn")
        while not spawn.wait_for_service(1.0):
            self.get_logger().warn("Waiting for server")

        request = Spawn.Request()
        request.x = random.uniform(0,11)
        request.y = random.uniform(0,11)
        request.theta = random.uniform(-np.pi ,np.pi) 

        

        future = spawn.call_async(request)
        future.add_done_callback(partial(self.callback_call_turtle_spawner, x=request.x, y= request.y, theta= request.theta))

    def callback_call_turtle_spawner(self, future, x, y, theta): 
        try: 
            response = future.result()
            self.get_logger().info("New Turtle " + response.name + " has spawned")
            self.alive_turtles_publisher_fn(response.name, x, y, theta)

        except Exception as e: 
            self.get_logger().error("Service call failed %r" % (e,))

    def alive_turtles_publisher_fn(self, name, x, y, theta ):
        self.get_logger().info("inside publishing function")
        turtle = Turtleinfo()
        turtle.name = name 
        turtle.x = x 
        turtle.y = y
        turtle.theta = theta
        
        self.alive_turtles.append(turtle)
        self.get_logger().info(str(turtle))

        turtles = Turtleinfoarray()
        turtles.turtles = self.alive_turtles

        self.alive_turtles_publisher.publish(turtles)




def main(args=None):
    rclpy.init(args=args)
    node = TurtleSpawner()
    rclpy.spin(node)
    rclpy.shutdown()