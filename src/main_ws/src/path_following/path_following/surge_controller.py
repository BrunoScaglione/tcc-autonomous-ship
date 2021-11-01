import sys

import rclpy
from rclpy.node import Node

from std_msgs.msg import Float32
from std_msgs.msg import Bool
# custom interface
from path_following_interfaces.msg import State

class SurgeController(Node):
    def __init__(self):
        super().__init__('surge_controller_node')

        # controller parameters
        self.X_added_mass = -3375
        self.m = 40415
        self.kf = 13

        # TODO: it is hardcoded now, this would need to be set according 
        # to waypoints actually 
        # (desired surge velocity of the first waypoint), use a fucntion to set
        # this value
        self.desired_surge_velocity = 1

        self.thrust_msg = Float32()

        self.subscription_shutdown = self.create_subscription(
            Bool,
            '/shutdown',
            self.callback_shutdown,
            1)

        self.subscription_filtered_state = self.create_subscription(
            State,
            '/filtered_state',
            self.callback_filtered_state,
            1)

        self.subscription_desired_surge_velocity = self.create_subscription(
            Float32,
            '/desired_surge_velocity',
            self.callback_desired_surge_velocity,
            1)

        self.publisher_propeller_thrust = self.create_publisher(
            Float32,
            '/propeller_thrust',
            1)

    def callback_shutdown():
        sys.exit()
         
    def callback_filtered_state(self, msg):
        self.get_logger().info('listened filtered surge velocity: %f' % msg.velocity.u)
        thrust_msg = self.surge_control(msg.velocity.u)
        self.publisher_propeller_thrust.publish(thrust_msg)
        self.get_logger().info('published thrust force: %f' % thrust_msg.data)
    
    def callback_desired_surge_velocity(self, msg):
        self.get_logger().info('listened desired surge velocity: %f' % msg.data)
        self.desired_surge_velocity = msg.data
    
    def surge_control(self, xf): # x is surge velocity
        xf_d = self.desired_surge_velocity
        # sliping variable
        s = xf - xf_d
        # phi (6.4% of desired velocity, based on phi = 0.32 for desired veloicty of 5m/s)
        phi = 0.064*xf_d
        # sat function
        sats = max(-1,min(s/phi,1))
        # input as function of x (control action)
        u = xf*abs(xf)*(1.9091*(10**-4) - self.kf*5.18*(10**-5)*sats) - 0.01*sats 
        # thrust
        tau = u*(self.m - self.X_added_mass)
        self.thrust_msg.data = tau 
        return self.thrust_msg 

def main(args=None):
    try:
        rclpy.init(args=args)
        surge_controller_node = SurgeController()
        rclpy.spin(surge_controller_node)
    except KeyboardInterrupt:
        print('Stopped with user interrupt')
    except SystemExit:
        print('Stopped with user shutdown request')
    finally:
        surge_controller_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()