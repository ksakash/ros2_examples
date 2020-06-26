#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/srv/set_bool.hpp"

#include <memory>

void set_bool (const std::shared_ptr<tutorial_interfaces::srv::SetBool::Request> request,
          std::shared_ptr<tutorial_interfaces::srv::SetBool::Response> response) {
    response->success = request->data;
    response->message = "success";
    RCLCPP_INFO (rclcpp::get_logger ("rclcpp"), "Incoming request, data: %d", request->data);
    RCLCPP_INFO (rclcpp::get_logger ("rclcpp"), "sending back requests: %d %s", response->success,
                                                                    (response->message).c_str());
}

int main (int argc, char** argv) {
    rclcpp::init (argc, argv);

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("set_bool_server");
    rclcpp::Service<tutorial_interfaces::srv::SetBool>::SharedPtr service =
                    node->create_service<tutorial_interfaces::srv::SetBool>("set_bool", &set_bool);

    RCLCPP_INFO(rclcpp::get_logger ("rclcpp"), "ready to take requests");

    rclcpp::spin(node);
    rclcpp::shutdown();
}
