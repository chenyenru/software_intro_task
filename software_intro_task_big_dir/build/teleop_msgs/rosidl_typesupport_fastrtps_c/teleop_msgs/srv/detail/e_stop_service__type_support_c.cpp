// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from teleop_msgs:srv/EStopService.idl
// generated code does not contain a copyright notice
#include "teleop_msgs/srv/detail/e_stop_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "teleop_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "teleop_msgs/srv/detail/e_stop_service__struct.h"
#include "teleop_msgs/srv/detail/e_stop_service__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _EStopService_Request__ros_msg_type = teleop_msgs__srv__EStopService_Request;

static bool _EStopService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EStopService_Request__ros_msg_type * ros_message = static_cast<const _EStopService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: set_estop
  {
    cdr << (ros_message->set_estop ? true : false);
  }

  return true;
}

static bool _EStopService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EStopService_Request__ros_msg_type * ros_message = static_cast<_EStopService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: set_estop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->set_estop = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_msgs
size_t get_serialized_size_teleop_msgs__srv__EStopService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EStopService_Request__ros_msg_type * ros_message = static_cast<const _EStopService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name set_estop
  {
    size_t item_size = sizeof(ros_message->set_estop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EStopService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_teleop_msgs__srv__EStopService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_msgs
size_t max_serialized_size_teleop_msgs__srv__EStopService_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: set_estop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EStopService_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_teleop_msgs__srv__EStopService_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EStopService_Request = {
  "teleop_msgs::srv",
  "EStopService_Request",
  _EStopService_Request__cdr_serialize,
  _EStopService_Request__cdr_deserialize,
  _EStopService_Request__get_serialized_size,
  _EStopService_Request__max_serialized_size
};

static rosidl_message_type_support_t _EStopService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EStopService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, teleop_msgs, srv, EStopService_Request)() {
  return &_EStopService_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "teleop_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "teleop_msgs/srv/detail/e_stop_service__struct.h"
// already included above
// #include "teleop_msgs/srv/detail/e_stop_service__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _EStopService_Response__ros_msg_type = teleop_msgs__srv__EStopService_Response;

static bool _EStopService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EStopService_Response__ros_msg_type * ros_message = static_cast<const _EStopService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: estop_state
  {
    cdr << (ros_message->estop_state ? true : false);
  }

  return true;
}

static bool _EStopService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EStopService_Response__ros_msg_type * ros_message = static_cast<_EStopService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: estop_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->estop_state = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_msgs
size_t get_serialized_size_teleop_msgs__srv__EStopService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EStopService_Response__ros_msg_type * ros_message = static_cast<const _EStopService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name estop_state
  {
    size_t item_size = sizeof(ros_message->estop_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EStopService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_teleop_msgs__srv__EStopService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_msgs
size_t max_serialized_size_teleop_msgs__srv__EStopService_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: estop_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EStopService_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_teleop_msgs__srv__EStopService_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EStopService_Response = {
  "teleop_msgs::srv",
  "EStopService_Response",
  _EStopService_Response__cdr_serialize,
  _EStopService_Response__cdr_deserialize,
  _EStopService_Response__get_serialized_size,
  _EStopService_Response__max_serialized_size
};

static rosidl_message_type_support_t _EStopService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EStopService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, teleop_msgs, srv, EStopService_Response)() {
  return &_EStopService_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "teleop_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "teleop_msgs/srv/e_stop_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t EStopService__callbacks = {
  "teleop_msgs::srv",
  "EStopService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, teleop_msgs, srv, EStopService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, teleop_msgs, srv, EStopService_Response)(),
};

static rosidl_service_type_support_t EStopService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &EStopService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, teleop_msgs, srv, EStopService)() {
  return &EStopService__handle;
}

#if defined(__cplusplus)
}
#endif
