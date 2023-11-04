# Copyright 2022 Siddharth Saha
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#     http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License

import teleop_py

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from teleop_msgs.msg import VehicleControlData

from teleop_msgs.srv import EStopService

class TeleopPy(Node):
    def __init__(self):
        super().__init__("teleop_py_node")
        self.subsription = self.create_subscription(
            Joy,
            'joy',
            self.listener_callback,
            10
        )
        self.publisher_ = self.create_publisher(
            VehicleControlData, 
            'output_teleop',
            10)

        self.cli = self.create_client(EStopService, "estop_service")
        self.req = EStopService.Request()
        

        
    
    def listener_callback(self, msg):
        self.get_logger().info('I heard "%s"' % msg.axes)
        self.get_logger().info('I heard "%s"' % msg.buttons)
        
        vcd = VehicleControlData()
        
        # LEFTX
        vcd.throttle = msg.axes[0]

        # LEFTY
        vcd.steering = msg.axes[1]
        
        # A button
        vcd.brake = msg.axes[2]

        # B button
        if (msg.buttons[1]==1):
            vcd.estop = True
        else:
            vcd.estop = False

        self.get_logger().info('I heard "%d"' % msg.axes[0])
        self.get_logger().info('I heard "%d"' % msg.axes[1])
        self.get_logger().info('I heard "%f"' % msg.buttons[0])
        self.get_logger().info('I heard "%f"' % msg.buttons[1])
        
        self.get_logger().info('I heard "%f"' % vcd.steering)
        self.get_logger().info('I heard "%f"' % vcd.brake)
        self.publisher_.publish(vcd)

        if (vcd.estop):
            self.get_logger().info('request sent')
            self.send_request(vcd.estop)
    
    def send_request(self, estop):
        self.req.set_estop = estop
        self.future = self.cli.call_async(self.req)
        #self.get_logger().info('Spin Until Future Complete function')
        #rclpy.spin_until_future_complete(self, self.future)
        #self.get_logger().info('returning future result')
        #return self.future.result()
        
def main(args=None):
    rclpy.init(args=args)
    teleop_py = TeleopPy()
    teleop_py.send_request(False)
    # rclpy.spin(teleop_py)

    while rclpy.ok():
        rclpy.spin_once(teleop_py)
        if teleop_py.future.done():
            try:
                response = teleop_py.future.result()
            except Exception as e:
                teleop_py.get_logger().info('Service call failed %r' % (e,))
            else:
                teleop_py.get_logger().info(
                        'Result of EStopService %r' % (response.estop_state))
            break




    teleop_py.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
