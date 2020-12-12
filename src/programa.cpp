#include <ros/ros.h>
#include <entrada_custom_msgs/mi_mensaje.h>

int main (int argc, char **argv) {

    ros::init(argc, argv, "nodo_mensaje");

    //creamos objeto
    entrada_custom_msgs::mi_mensaje mensaje;
    mensaje.numero = 6;
    std::cout << mensaje.numero << std::endl; 
    return 0;
}