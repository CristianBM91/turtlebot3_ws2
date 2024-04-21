from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='movimiento_manual_service',
            executable='movement_server',
            output='screen'
        ),
    ])