#importamos el mensaje
from custom_interface.srv import MyMoveMsg
#importamos la bib ROS2 para python
import rclpy
from rclpy.node import Node
# importar Odometry desde la interface nav_msgs
from nav_msgs.msg import Odometry
# importar la librería de calidad del servicio para fijar las políticas de calidad
from rclpy.qos import ReliabilityPolicy, QoSProfile
import sys

#definimos la clase cliente
class ClientAsync(Node):

    def __init__(self):
        #inicializa el nodo cliente
        super().__init__('circle_movement')
        #crea el objeto cliente
        self.client = self.create_client(MyMoveMsg, 'movement')
        #cada segundo revisa si el servicio esta activo
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('el servicio no esta activo, prueba de nuevo...')

        #crea el mensaje
        self.req = MyMoveMsg.Request()

    def send_request(self):
        # usa sys.argv para tener acceso a los argumentos introducidos en la
        # llamada al programa por consola
        #self.req.move = sys.argv[1]
        self.req.move = "derecha"
        #envia la peticion del servicio
        self.future = self.client.call_async(self.req)

    def send_request_parar(self):
        self.req.move = "parar"
        self.future = self.client.call_async(self.req)

class SimpleSubscriber(Node):

    def __init__(self):
        # constructor
        #  super() ininicializa el Nodo
        super().__init__('simple_subscriber')
        # crear el objeto subscriptor
        # al topic /odom topic con una cola de 10 messages.
        # create_subscription(msg_type, topic, callback, qos_profile, callback_group, event_callbacks, raw)
        self.subscriber= self.create_subscription(
            Odometry,
            '/odom',
            self.listener_callback,
            QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT)) 
        # prevent unused variable warning
        self.subscriber       

    def listener_callback(self, msg):
        # imprime los datos leídos  
        x = msg.pose.pose.position.x
        y = msg.pose.pose.position.y     
        self.get_logger().info('Posición recibida: x={}, y={}'.format(x, y))
        if(x < 0 and x > -0.01 and y > -0.01):
            self.get_logger().info('PARAR')
            #declara el constructor del objeto cliente
            client = ClientAsync()
            #ejecuta el metodo de peticion de servicio
            client.send_request_parar()
            # Destruimos el nodo
            client.destroy_node()
            self.destroy_node()
            rclpy.shutdown()




def main(args=None):
    #inicializa la comunicacion ROS2
    rclpy.init(args=args)
    #declara el constructor del objeto cliente
    client = ClientAsync()
    #ejecuta el metodo de peticion de servicio
    client.send_request()
    # declara el nodo del subscriber
    simple_subscriber = SimpleSubscriber()
    

    while rclpy.ok():
        #deja el nodo abierto hasta recibir ctrl+c
        rclpy.spin_once(client)
        # dejamos abierto el nodo hasta ctr+c
        rclpy.spin(simple_subscriber)
        #si se ha enviado el mensaje future
        if client.future.done():
            try:
                # chequea el mensaje future
                # si se ha enviado una respuesta
                # la recoge
                response = client.future.result()
            except Exception as e:
                client.get_logger().info('La llamada al servicio ha fallado %r' % (e,))
        else:
            client.get_logger().info('Respuesta del servicio %r' % (response.success))
        break
    # Destruimos el nodo
    simple_subscriber.destroy_node()
    client.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()