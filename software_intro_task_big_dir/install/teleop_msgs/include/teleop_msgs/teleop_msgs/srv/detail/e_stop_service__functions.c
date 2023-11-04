// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from teleop_msgs:srv/EStopService.idl
// generated code does not contain a copyright notice
#include "teleop_msgs/srv/detail/e_stop_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
teleop_msgs__srv__EStopService_Request__init(teleop_msgs__srv__EStopService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // set_estop
  return true;
}

void
teleop_msgs__srv__EStopService_Request__fini(teleop_msgs__srv__EStopService_Request * msg)
{
  if (!msg) {
    return;
  }
  // set_estop
}

bool
teleop_msgs__srv__EStopService_Request__are_equal(const teleop_msgs__srv__EStopService_Request * lhs, const teleop_msgs__srv__EStopService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // set_estop
  if (lhs->set_estop != rhs->set_estop) {
    return false;
  }
  return true;
}

bool
teleop_msgs__srv__EStopService_Request__copy(
  const teleop_msgs__srv__EStopService_Request * input,
  teleop_msgs__srv__EStopService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // set_estop
  output->set_estop = input->set_estop;
  return true;
}

teleop_msgs__srv__EStopService_Request *
teleop_msgs__srv__EStopService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__srv__EStopService_Request * msg = (teleop_msgs__srv__EStopService_Request *)allocator.allocate(sizeof(teleop_msgs__srv__EStopService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(teleop_msgs__srv__EStopService_Request));
  bool success = teleop_msgs__srv__EStopService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
teleop_msgs__srv__EStopService_Request__destroy(teleop_msgs__srv__EStopService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    teleop_msgs__srv__EStopService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
teleop_msgs__srv__EStopService_Request__Sequence__init(teleop_msgs__srv__EStopService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__srv__EStopService_Request * data = NULL;

  if (size) {
    data = (teleop_msgs__srv__EStopService_Request *)allocator.zero_allocate(size, sizeof(teleop_msgs__srv__EStopService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = teleop_msgs__srv__EStopService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        teleop_msgs__srv__EStopService_Request__fini(&data[i - 1]);
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
teleop_msgs__srv__EStopService_Request__Sequence__fini(teleop_msgs__srv__EStopService_Request__Sequence * array)
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
      teleop_msgs__srv__EStopService_Request__fini(&array->data[i]);
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

teleop_msgs__srv__EStopService_Request__Sequence *
teleop_msgs__srv__EStopService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__srv__EStopService_Request__Sequence * array = (teleop_msgs__srv__EStopService_Request__Sequence *)allocator.allocate(sizeof(teleop_msgs__srv__EStopService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = teleop_msgs__srv__EStopService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
teleop_msgs__srv__EStopService_Request__Sequence__destroy(teleop_msgs__srv__EStopService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    teleop_msgs__srv__EStopService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
teleop_msgs__srv__EStopService_Request__Sequence__are_equal(const teleop_msgs__srv__EStopService_Request__Sequence * lhs, const teleop_msgs__srv__EStopService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!teleop_msgs__srv__EStopService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
teleop_msgs__srv__EStopService_Request__Sequence__copy(
  const teleop_msgs__srv__EStopService_Request__Sequence * input,
  teleop_msgs__srv__EStopService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(teleop_msgs__srv__EStopService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    teleop_msgs__srv__EStopService_Request * data =
      (teleop_msgs__srv__EStopService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!teleop_msgs__srv__EStopService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          teleop_msgs__srv__EStopService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!teleop_msgs__srv__EStopService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
teleop_msgs__srv__EStopService_Response__init(teleop_msgs__srv__EStopService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // estop_state
  return true;
}

void
teleop_msgs__srv__EStopService_Response__fini(teleop_msgs__srv__EStopService_Response * msg)
{
  if (!msg) {
    return;
  }
  // estop_state
}

bool
teleop_msgs__srv__EStopService_Response__are_equal(const teleop_msgs__srv__EStopService_Response * lhs, const teleop_msgs__srv__EStopService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // estop_state
  if (lhs->estop_state != rhs->estop_state) {
    return false;
  }
  return true;
}

bool
teleop_msgs__srv__EStopService_Response__copy(
  const teleop_msgs__srv__EStopService_Response * input,
  teleop_msgs__srv__EStopService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // estop_state
  output->estop_state = input->estop_state;
  return true;
}

teleop_msgs__srv__EStopService_Response *
teleop_msgs__srv__EStopService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__srv__EStopService_Response * msg = (teleop_msgs__srv__EStopService_Response *)allocator.allocate(sizeof(teleop_msgs__srv__EStopService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(teleop_msgs__srv__EStopService_Response));
  bool success = teleop_msgs__srv__EStopService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
teleop_msgs__srv__EStopService_Response__destroy(teleop_msgs__srv__EStopService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    teleop_msgs__srv__EStopService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
teleop_msgs__srv__EStopService_Response__Sequence__init(teleop_msgs__srv__EStopService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__srv__EStopService_Response * data = NULL;

  if (size) {
    data = (teleop_msgs__srv__EStopService_Response *)allocator.zero_allocate(size, sizeof(teleop_msgs__srv__EStopService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = teleop_msgs__srv__EStopService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        teleop_msgs__srv__EStopService_Response__fini(&data[i - 1]);
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
teleop_msgs__srv__EStopService_Response__Sequence__fini(teleop_msgs__srv__EStopService_Response__Sequence * array)
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
      teleop_msgs__srv__EStopService_Response__fini(&array->data[i]);
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

teleop_msgs__srv__EStopService_Response__Sequence *
teleop_msgs__srv__EStopService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__srv__EStopService_Response__Sequence * array = (teleop_msgs__srv__EStopService_Response__Sequence *)allocator.allocate(sizeof(teleop_msgs__srv__EStopService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = teleop_msgs__srv__EStopService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
teleop_msgs__srv__EStopService_Response__Sequence__destroy(teleop_msgs__srv__EStopService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    teleop_msgs__srv__EStopService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
teleop_msgs__srv__EStopService_Response__Sequence__are_equal(const teleop_msgs__srv__EStopService_Response__Sequence * lhs, const teleop_msgs__srv__EStopService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!teleop_msgs__srv__EStopService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
teleop_msgs__srv__EStopService_Response__Sequence__copy(
  const teleop_msgs__srv__EStopService_Response__Sequence * input,
  teleop_msgs__srv__EStopService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(teleop_msgs__srv__EStopService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    teleop_msgs__srv__EStopService_Response * data =
      (teleop_msgs__srv__EStopService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!teleop_msgs__srv__EStopService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          teleop_msgs__srv__EStopService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!teleop_msgs__srv__EStopService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
