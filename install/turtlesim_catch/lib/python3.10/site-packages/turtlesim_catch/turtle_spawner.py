#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import random 
import numpy as np

from turtlesim.srv import Spawn
from functools import partial
from turtlesim_catch_interfaces.msg import Turtleinfoarray
from turtlesim_catch_interfaces.msg import Turtleinfo
from turtlesim_catch_interfaces.srv import TargetTurtle
from turtlesim.srv import Kill


class TurtleSpawner(Node):

    def __init__(self):
        super().__init__("prey_turtles")
        self.get_logger().info("Turtle Spawner node has started")

        self.turtle_spawner = self.create_timer(5, self.call_turtle_spawner)
        self.alive_turtles_publisher = self.create_publisher(Turtleinfoarray, "turtles_info", 10)
        self.kill_turtle = self.create_service(TargetTurtle, "kill_turtle", self.callback_kill_turtle_server )
        self.alive_turtles = []

    def callback_kill_turtle_server(self, request , response):
        self.killing_turtle_main(request.name)
        response.success = True
        return response

    def callback_kill_turtle(self, future, target_name):
        try:
            self.get_logger().info("Reached HERE") 
            future.result()
            for (i, turtle) in enumerate(self.alive_turtles):
                self.get_logger().info("Getting ready to delete the turtle")
                if self.alive_turtles[i].name == target_name:
                    self.get_logger().info("Should be deleted by now")

                    del self.alive_turtles[i]
                    self.get_logger().info("ALIVE TURTLES NOW = " + str(self.alive_turtles))
                    break
            # self.get_logger().info("Turtle" + response.name + " has been killed")

        except Exception as e: 
            self.get_logger().error("Service call failed %r" % (e,))

    def killing_turtle_main(self, name): 
        

        killing_prey = self.create_client(Kill, "kill")
        while not killing_prey.wait_for_service(1.0):
            self.get_logger().warn("Waiting for server to connect to Kill turtle")
        
        request = Kill.Request()
        request.name = name
        self.get_logger().info("Killed " + str(request.name))

        future = killing_prey.call_async(request)

        future.add_done_callback(partial(self.callback_kill_turtle,target_name = request.name))


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