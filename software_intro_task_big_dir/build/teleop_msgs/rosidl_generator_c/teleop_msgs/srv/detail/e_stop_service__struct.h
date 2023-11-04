// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_msgs:srv/EStopService.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__SRV__DETAIL__E_STOP_SERVICE__STRUCT_H_
#define TELEOP_MSGS__SRV__DETAIL__E_STOP_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/EStopService in the package teleop_msgs.
typedef struct teleop_msgs__srv__EStopService_Request
{
  bool set_estop;
} teleop_msgs__srv__EStopService_Request;

// Struct for a sequence of teleop_msgs__srv__EStopService_Request.
typedef struct teleop_msgs__srv__EStopService_Request__Sequence
{
  teleop_msgs__srv__EStopService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_msgs__srv__EStopService_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/EStopService in the package teleop_msgs.
typedef struct teleop_msgs__srv__EStopService_Response
{
  bool estop_state;
} teleop_msgs__srv__EStopService_Response;

// Struct for a sequence of teleop_msgs__srv__EStopService_Response.
typedef struct teleop_msgs__srv__EStopService_Response__Sequence
{
  teleop_msgs__srv__EStopService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_msgs__srv__EStopService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_MSGS__SRV__DETAIL__E_STOP_SERVICE__STRUCT_H_
