from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    turtlesim_node = Node(
        package="turtlesim", 
        executable="turtlesim_node"
    )

    prey_turtles = Node(
        package="turtlesim_catch",
        executable="prey_turtles"
    )

    boss_turtle = Node(
        package="turtlesim_catch", 
        executable="turtle_controller"
    )

    
    
    
    ld.add_action(turtlesim_node)

    ld.add_action(prey_turtles)

    ld.add_action(boss_turtle)




    return ld

