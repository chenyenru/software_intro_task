// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_msgs:srv/EStopService.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__SRV__DETAIL__E_STOP_SERVICE__BUILDER_HPP_
#define TELEOP_MSGS__SRV__DETAIL__E_STOP_SERVICE__BUILDER_HPP_

#include "teleop_msgs/srv/detail/e_stop_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace teleop_msgs
{

namespace srv
{

namespace builder
{

class Init_EStopService_Request_set_estop
{
public:
  explicit Init_EStopService_Request_set_estop(::teleop_msgs::srv::EStopService_Request & msg)
  : msg_(msg)
  {}
  ::teleop_msgs::srv::EStopService_Request set_estop(::teleop_msgs::srv::EStopService_Request::_set_estop_type arg)
  {
    msg_.set_estop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_msgs::srv::EStopService_Request msg_;
};

class Init_EStopService_Request_brakes
{
public:
  explicit Init_EStopService_Request_brakes(::teleop_msgs::srv::EStopService_Request & msg)
  : msg_(msg)
  {}
  Init_EStopService_Request_set_estop brakes(::teleop_msgs::srv::EStopService_Request::_brakes_type arg)
  {
    msg_.brakes = std::move(arg);
    return Init_EStopService_Request_set_estop(msg_);
  }

private:
  ::teleop_msgs::srv::EStopService_Request msg_;
};

class Init_EStopService_Request_steering
{
public:
  explicit Init_EStopService_Request_steering(::teleop_msgs::srv::EStopService_Request & msg)
  : msg_(msg)
  {}
  Init_EStopService_Request_brakes steering(::teleop_msgs::srv::EStopService_Request::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_EStopService_Request_brakes(msg_);
  }

private:
  ::teleop_msgs::srv::EStopService_Request msg_;
};

class Init_EStopService_Request_throttle
{
public:
  Init_EStopService_Request_throttle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EStopService_Request_steering throttle(::teleop_msgs::srv::EStopService_Request::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_EStopService_Request_steering(msg_);
  }

private:
  ::teleop_msgs::srv::EStopService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_msgs::srv::EStopService_Request>()
{
  return teleop_msgs::srv::builder::Init_EStopService_Request_throttle();
}

}  // namespace teleop_msgs


namespace teleop_msgs
{

namespace srv
{

namespace builder
{

class Init_EStopService_Response_estop_state
{
public:
  Init_EStopService_Response_estop_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::teleop_msgs::srv::EStopService_Response estop_state(::teleop_msgs::srv::EStopService_Response::_estop_state_type arg)
  {
    msg_.estop_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_msgs::srv::EStopService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_msgs::srv::EStopService_Response>()
{
  return teleop_msgs::srv::builder::Init_EStopService_Response_estop_state();
}

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__SRV__DETAIL__E_STOP_SERVICE__BUILDER_HPP_
