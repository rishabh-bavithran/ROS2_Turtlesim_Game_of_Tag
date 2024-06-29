Turtlesim Catch Them All
Overview

This project involves using the turtlesim package in ROS (Robot Operating System) to create a fun and interactive application. The application uses three nodes:

    turtlesim_node from the turtlesim package.
    turtle_controller: A custom node to control the turtle named "turtle1" which is part of the turtlesim_node.
    turtle_spawner: A custom node to spawn and manage turtles on the window, determining which turtles are still "alive" (on the screen).

The project can be organized into a new package named turtlesim_catch_them_all.
Nodes
turtle_spawner Node

The turtle_spawner node performs the following functions:

    Spawn Turtles: Calls the /spawn service to create new turtles at random coordinates between 0.0 and 11.0 for both x and y axes.
    Kill Turtles: Calls the /kill service to remove turtles from the screen.
    Publish Alive Turtles: Publishes the list of currently alive turtles with their coordinates on the /alive_turtles topic.
    Handle Catch Service: Provides a service to "catch" a turtle, which involves calling the /kill service and removing the turtle from the list of alive turtles.

turtle_controller Node

The turtle_controller node performs the following functions:

    Control Loop: Runs a control loop using a high-rate timer to reach a target point. Controls the "master" turtle, turtle1, by subscribing to /turtle1/pose and publishing to /turtle1/cmd_vel.
    P Controller: Implements a simplified Proportional (P) controller for the control loop.
    Subscribe to Alive Turtles: Subscribes to the /alive_turtles topic to get the list of current turtles with coordinates and selects a target turtle to catch.
    Catch Turtle: Calls the /catch_turtle service provided by the turtle_spawner node when a turtle has been caught by the master turtle.

Custom Interfaces

The project includes custom message and service interfaces:

    Turtle.msg: Defines the message structure for a turtle (name and coordinates).
    TurtleArray.msg: Defines the message structure for an array of turtles, used for the /alive_turtles topic.
    CatchTurtle.srv: Defines the service structure to send the name of the turtle that was caught. The client is the turtle_controller node, and the server is the turtle_spawner node.

