// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:srv/EStopService.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__SRV__DETAIL__E_STOP_SERVICE__TRAITS_HPP_
#define TELEOP_MSGS__SRV__DETAIL__E_STOP_SERVICE__TRAITS_HPP_

#include "teleop_msgs/srv/detail/e_stop_service__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const teleop_msgs::srv::EStopService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    value_to_yaml(msg.throttle, out);
    out << "\n";
  }

  // member: steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering: ";
    value_to_yaml(msg.steering, out);
    out << "\n";
  }

  // member: brakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brakes: ";
    value_to_yaml(msg.brakes, out);
    out << "\n";
  }

  // member: set_estop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_estop: ";
    value_to_yaml(msg.set_estop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const teleop_msgs::srv::EStopService_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<teleop_msgs::srv::EStopService_Request>()
{
  return "teleop_msgs::srv::EStopService_Request";
}

template<>
inline const char * name<teleop_msgs::srv::EStopService_Request>()
{
  return "teleop_msgs/srv/EStopService_Request";
}

template<>
struct has_fixed_size<teleop_msgs::srv::EStopService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<teleop_msgs::srv::EStopService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<teleop_msgs::srv::EStopService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const teleop_msgs::srv::EStopService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: estop_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop_state: ";
    value_to_yaml(msg.estop_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const teleop_msgs::srv::EStopService_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<teleop_msgs::srv::EStopService_Response>()
{
  return "teleop_msgs::srv::EStopService_Response";
}

template<>
inline const char * name<teleop_msgs::srv::EStopService_Response>()
{
  return "teleop_msgs/srv/EStopService_Response";
}

template<>
struct has_fixed_size<teleop_msgs::srv::EStopService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<teleop_msgs::srv::EStopService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<teleop_msgs::srv::EStopService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<teleop_msgs::srv::EStopService>()
{
  return "teleop_msgs::srv::EStopService";
}

template<>
inline const char * name<teleop_msgs::srv::EStopService>()
{
  return "teleop_msgs/srv/EStopService";
}

template<>
struct has_fixed_size<teleop_msgs::srv::EStopService>
  : std::integral_constant<
    bool,
    has_fixed_size<teleop_msgs::srv::EStopService_Request>::value &&
    has_fixed_size<teleop_msgs::srv::EStopService_Response>::value
  >
{
};

template<>
struct has_bounded_size<teleop_msgs::srv::EStopService>
  : std::integral_constant<
    bool,
    has_bounded_size<teleop_msgs::srv::EStopService_Request>::value &&
    has_bounded_size<teleop_msgs::srv::EStopService_Response>::value
  >
{
};

template<>
struct is_service<teleop_msgs::srv::EStopService>
  : std::true_type
{
};

template<>
struct is_service_request<teleop_msgs::srv::EStopService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<teleop_msgs::srv::EStopService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__SRV__DETAIL__E_STOP_SERVICE__TRAITS_HPP_
