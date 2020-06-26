#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/srv/set_bool.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

int main (int argc, char** argv) {
    rclcpp::init (argc, argv);

    if (argc != 2) {
        RCLCPP_INFO (rclcpp::get_logger("rclcpp"), "need 3 args");
        return 1;
    }

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("set_bool_client");
    rclcpp::Client<tutorial_interfaces::srv::SetBool>::SharedPtr client =
        node->create_client<tutorial_interfaces::srv::SetBool>("set_bool");

    auto request = std::make_shared<tutorial_interfaces::srv::SetBool::Request>();
    request->data = (atoi(argv[1]) == 1)? true : false;

    while (!client->wait_for_service(1s)) {
        if (!rclcpp::ok()) {
            RCLCPP_ERROR (rclcpp::get_logger("rclcpp"),
                         "Interrupted while waiting for the service. Exiting.");
            return 0;
        }
        RCLCPP_INFO (rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
    }

    auto result = client->async_send_request(request);

    if (rclcpp::spin_until_future_complete(node, result) ==
                                                    rclcpp::executor::FutureReturnCode::SUCCESS) {
        RCLCPP_INFO (rclcpp::get_logger("rclcpp"), "Response: %d %s", result.get()->success,
                                                                (result.get()->message).c_str());
    }
    else {
        RCLCPP_ERROR (rclcpp::get_logger("rclcpp"), "Failed to call service set_bool");
    }

    rclcpp::shutdown();
    return 0;
}
