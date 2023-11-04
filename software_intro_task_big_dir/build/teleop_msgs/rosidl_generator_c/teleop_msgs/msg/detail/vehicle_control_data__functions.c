// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from teleop_msgs:msg/VehicleControlData.idl
// generated code does not contain a copyright notice
#include "teleop_msgs/msg/detail/vehicle_control_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
teleop_msgs__msg__VehicleControlData__init(teleop_msgs__msg__VehicleControlData * msg)
{
  if (!msg) {
    return false;
  }
  // throttle
  // steering
  // brake
  // estop
  return true;
}

void
teleop_msgs__msg__VehicleControlData__fini(teleop_msgs__msg__VehicleControlData * msg)
{
  if (!msg) {
    return;
  }
  // throttle
  // steering
  // brake
  // estop
}

bool
teleop_msgs__msg__VehicleControlData__are_equal(const teleop_msgs__msg__VehicleControlData * lhs, const teleop_msgs__msg__VehicleControlData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // throttle
  if (lhs->throttle != rhs->throttle) {
    return false;
  }
  // steering
  if (lhs->steering != rhs->steering) {
    return false;
  }
  // brake
  if (lhs->brake != rhs->brake) {
    return false;
  }
  // estop
  if (lhs->estop != rhs->estop) {
    return false;
  }
  return true;
}

bool
teleop_msgs__msg__VehicleControlData__copy(
  const teleop_msgs__msg__VehicleControlData * input,
  teleop_msgs__msg__VehicleControlData * output)
{
  if (!input || !output) {
    return false;
  }
  // throttle
  output->throttle = input->throttle;
  // steering
  output->steering = input->steering;
  // brake
  output->brake = input->brake;
  // estop
  output->estop = input->estop;
  return true;
}

teleop_msgs__msg__VehicleControlData *
teleop_msgs__msg__VehicleControlData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__VehicleControlData * msg = (teleop_msgs__msg__VehicleControlData *)allocator.allocate(sizeof(teleop_msgs__msg__VehicleControlData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(teleop_msgs__msg__VehicleControlData));
  bool success = teleop_msgs__msg__VehicleControlData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
teleop_msgs__msg__VehicleControlData__destroy(teleop_msgs__msg__VehicleControlData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    teleop_msgs__msg__VehicleControlData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
teleop_msgs__msg__VehicleControlData__Sequence__init(teleop_msgs__msg__VehicleControlData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__VehicleControlData * data = NULL;

  if (size) {
    data = (teleop_msgs__msg__VehicleControlData *)allocator.zero_allocate(size, sizeof(teleop_msgs__msg__VehicleControlData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = teleop_msgs__msg__VehicleControlData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        teleop_msgs__msg__VehicleControlData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
teleop_msgs__msg__VehicleControlData__Sequence__fini(teleop_msgs__msg__VehicleControlData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      teleop_msgs__msg__VehicleControlData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

teleop_msgs__msg__VehicleControlData__Sequence *
teleop_msgs__msg__VehicleControlData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__VehicleControlData__Sequence * array = (teleop_msgs__msg__VehicleControlData__Sequence *)allocator.allocate(sizeof(teleop_msgs__msg__VehicleControlData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = teleop_msgs__msg__VehicleControlData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
teleop_msgs__msg__VehicleControlData__Sequence__destroy(teleop_msgs__msg__VehicleControlData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    teleop_msgs__msg__VehicleControlData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
teleop_msgs__msg__VehicleControlData__Sequence__are_equal(const teleop_msgs__msg__VehicleControlData__Sequence * lhs, const teleop_msgs__msg__VehicleControlData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!teleop_msgs__msg__VehicleControlData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
teleop_msgs__msg__VehicleControlData__Sequence__copy(
  const teleop_msgs__msg__VehicleControlData__Sequence * input,
  teleop_msgs__msg__VehicleControlData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(teleop_msgs__msg__VehicleControlData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    teleop_msgs__msg__VehicleControlData * data =
      (teleop_msgs__msg__VehicleControlData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!teleop_msgs__msg__VehicleControlData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          teleop_msgs__msg__VehicleControlData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!teleop_msgs__msg__VehicleControlData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
