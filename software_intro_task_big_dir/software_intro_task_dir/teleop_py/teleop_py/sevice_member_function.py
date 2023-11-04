from teleop_msgs.srv import EStopService

import rclpy
from rclpy.node import Node

class TeleopPy_Service(Node):

    def __init__(self):
        super().__init__("teleop_py_service")
        self.srv = self.create_service(EStopService, 'estop', self.estop_service)

    def estop_service(self, request, response):
        if (request.set_estop):
            response.estop_state = True
        else:
            response.estop_state = False
        
        self.get_logger('Incoming Request set_stop: %r', request.set_estop)
        self.get_logger('estop_state: %r', response.estop_state)

        return response

def main(args=None):
    rclpy.init(args=args)

    teleop_py_service = TeleopPy_Service()

    rclpy.spin(teleop_py_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()
