// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from teleop_msgs:srv/EStopService.idl
// generated code does not contain a copyright notice
#include "teleop_msgs/srv/detail/e_stop_service__rosidl_typesupport_fastrtps_cpp.hpp"
#include "teleop_msgs/srv/detail/e_stop_service__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace teleop_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
cdr_serialize(
  const teleop_msgs::srv::EStopService_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: set_estop
  cdr << (ros_message.set_estop ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  teleop_msgs::srv::EStopService_Request & ros_message)
{
  // Member: set_estop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.set_estop = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
get_serialized_size(
  const teleop_msgs::srv::EStopService_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: set_estop
  {
    size_t item_size = sizeof(ros_message.set_estop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
max_serialized_size_EStopService_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: set_estop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _EStopService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const teleop_msgs::srv::EStopService_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EStopService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<teleop_msgs::srv::EStopService_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EStopService_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const teleop_msgs::srv::EStopService_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EStopService_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EStopService_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _EStopService_Request__callbacks = {
  "teleop_msgs::srv",
  "EStopService_Request",
  _EStopService_Request__cdr_serialize,
  _EStopService_Request__cdr_deserialize,
  _EStopService_Request__get_serialized_size,
  _EStopService_Request__max_serialized_size
};

static rosidl_message_type_support_t _EStopService_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EStopService_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace teleop_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_teleop_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<teleop_msgs::srv::EStopService_Request>()
{
  return &teleop_msgs::srv::typesupport_fastrtps_cpp::_EStopService_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, teleop_msgs, srv, EStopService_Request)() {
  return &teleop_msgs::srv::typesupport_fastrtps_cpp::_EStopService_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace teleop_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
cdr_serialize(
  const teleop_msgs::srv::EStopService_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: estop_state
  cdr << (ros_message.estop_state ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  teleop_msgs::srv::EStopService_Response & ros_message)
{
  // Member: estop_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.estop_state = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
get_serialized_size(
  const teleop_msgs::srv::EStopService_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: estop_state
  {
    size_t item_size = sizeof(ros_message.estop_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
max_serialized_size_EStopService_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: estop_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _EStopService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const teleop_msgs::srv::EStopService_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EStopService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<teleop_msgs::srv::EStopService_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EStopService_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const teleop_msgs::srv::EStopService_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EStopService_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EStopService_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _EStopService_Response__callbacks = {
  "teleop_msgs::srv",
  "EStopService_Response",
  _EStopService_Response__cdr_serialize,
  _EStopService_Response__cdr_deserialize,
  _EStopService_Response__get_serialized_size,
  _EStopService_Response__max_serialized_size
};

static rosidl_message_type_support_t _EStopService_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EStopService_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace teleop_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_teleop_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<teleop_msgs::srv::EStopService_Response>()
{
  return &teleop_msgs::srv::typesupport_fastrtps_cpp::_EStopService_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, teleop_msgs, srv, EStopService_Response)() {
  return &teleop_msgs::srv::typesupport_fastrtps_cpp::_EStopService_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace teleop_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _EStopService__callbacks = {
  "teleop_msgs::srv",
  "EStopService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, teleop_msgs, srv, EStopService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, teleop_msgs, srv, EStopService_Response)(),
};

static rosidl_service_type_support_t _EStopService__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EStopService__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace teleop_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_teleop_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<teleop_msgs::srv::EStopService>()
{
  return &teleop_msgs::srv::typesupport_fastrtps_cpp::_EStopService__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, teleop_msgs, srv, EStopService)() {
  return &teleop_msgs::srv::typesupport_fastrtps_cpp::_EStopService__handle;
}

#ifdef __cplusplus
}
#endif
