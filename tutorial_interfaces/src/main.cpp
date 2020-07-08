#include <iostream>
#include <unistd.h>
#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/srv/temp.hpp"
#include "tutorial_interfaces/msg/temp.hpp"
#include "tutorial_interfaces/msg/lemp.hpp"

int main (int argc, char** argv) {
    rclcpp::init (argc, argv);
    auto node = rclcpp::Node::make_shared("my_publisher");
    auto pub = node->create_publisher<tutorial_interfaces::msg::Temp>("chatter", 10);
    tutorial_interfaces::msg::Temp msg;
    int count = 0;
    while (rclcpp::ok()) {
        if (count%2) msg.data = true;
        else msg.data = false;
        std::cout << "Publishing: " << msg.data << std::endl;
        pub->publish (msg);
        usleep(500000);
    }
    return 0;
}
