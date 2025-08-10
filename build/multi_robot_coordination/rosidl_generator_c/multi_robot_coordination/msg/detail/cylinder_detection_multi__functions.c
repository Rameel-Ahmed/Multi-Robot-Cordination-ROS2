// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multi_robot_coordination:msg/CylinderDetectionMulti.idl
// generated code does not contain a copyright notice
#include "multi_robot_coordination/msg/detail/cylinder_detection_multi__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_namespace`
// Member `target_namespace`
#include "rosidl_runtime_c/string_functions.h"
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
multi_robot_coordination__msg__CylinderDetectionMulti__init(multi_robot_coordination__msg__CylinderDetectionMulti * msg)
{
  if (!msg) {
    return false;
  }
  // detected
  // robot_namespace
  if (!rosidl_runtime_c__String__init(&msg->robot_namespace)) {
    multi_robot_coordination__msg__CylinderDetectionMulti__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // u
  // v
  // confidence
  // xyxy
  // x_min
  // y_min
  // x_max
  // y_max
  // image_width
  // target_namespace
  if (!rosidl_runtime_c__String__init(&msg->target_namespace)) {
    multi_robot_coordination__msg__CylinderDetectionMulti__fini(msg);
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    multi_robot_coordination__msg__CylinderDetectionMulti__fini(msg);
    return false;
  }
  return true;
}

void
multi_robot_coordination__msg__CylinderDetectionMulti__fini(multi_robot_coordination__msg__CylinderDetectionMulti * msg)
{
  if (!msg) {
    return;
  }
  // detected
  // robot_namespace
  rosidl_runtime_c__String__fini(&msg->robot_namespace);
  // x
  // y
  // z
  // u
  // v
  // confidence
  // xyxy
  // x_min
  // y_min
  // x_max
  // y_max
  // image_width
  // target_namespace
  rosidl_runtime_c__String__fini(&msg->target_namespace);
  // header
  std_msgs__msg__Header__fini(&msg->header);
}

bool
multi_robot_coordination__msg__CylinderDetectionMulti__are_equal(const multi_robot_coordination__msg__CylinderDetectionMulti * lhs, const multi_robot_coordination__msg__CylinderDetectionMulti * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detected
  if (lhs->detected != rhs->detected) {
    return false;
  }
  // robot_namespace
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_namespace), &(rhs->robot_namespace)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // u
  if (lhs->u != rhs->u) {
    return false;
  }
  // v
  if (lhs->v != rhs->v) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // xyxy
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->xyxy[i] != rhs->xyxy[i]) {
      return false;
    }
  }
  // x_min
  if (lhs->x_min != rhs->x_min) {
    return false;
  }
  // y_min
  if (lhs->y_min != rhs->y_min) {
    return false;
  }
  // x_max
  if (lhs->x_max != rhs->x_max) {
    return false;
  }
  // y_max
  if (lhs->y_max != rhs->y_max) {
    return false;
  }
  // image_width
  if (lhs->image_width != rhs->image_width) {
    return false;
  }
  // target_namespace
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_namespace), &(rhs->target_namespace)))
  {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  return true;
}

bool
multi_robot_coordination__msg__CylinderDetectionMulti__copy(
  const multi_robot_coordination__msg__CylinderDetectionMulti * input,
  multi_robot_coordination__msg__CylinderDetectionMulti * output)
{
  if (!input || !output) {
    return false;
  }
  // detected
  output->detected = input->detected;
  // robot_namespace
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_namespace), &(output->robot_namespace)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // u
  output->u = input->u;
  // v
  output->v = input->v;
  // confidence
  output->confidence = input->confidence;
  // xyxy
  for (size_t i = 0; i < 4; ++i) {
    output->xyxy[i] = input->xyxy[i];
  }
  // x_min
  output->x_min = input->x_min;
  // y_min
  output->y_min = input->y_min;
  // x_max
  output->x_max = input->x_max;
  // y_max
  output->y_max = input->y_max;
  // image_width
  output->image_width = input->image_width;
  // target_namespace
  if (!rosidl_runtime_c__String__copy(
      &(input->target_namespace), &(output->target_namespace)))
  {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  return true;
}

multi_robot_coordination__msg__CylinderDetectionMulti *
multi_robot_coordination__msg__CylinderDetectionMulti__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_robot_coordination__msg__CylinderDetectionMulti * msg = (multi_robot_coordination__msg__CylinderDetectionMulti *)allocator.allocate(sizeof(multi_robot_coordination__msg__CylinderDetectionMulti), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_robot_coordination__msg__CylinderDetectionMulti));
  bool success = multi_robot_coordination__msg__CylinderDetectionMulti__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multi_robot_coordination__msg__CylinderDetectionMulti__destroy(multi_robot_coordination__msg__CylinderDetectionMulti * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multi_robot_coordination__msg__CylinderDetectionMulti__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multi_robot_coordination__msg__CylinderDetectionMulti__Sequence__init(multi_robot_coordination__msg__CylinderDetectionMulti__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_robot_coordination__msg__CylinderDetectionMulti * data = NULL;

  if (size) {
    data = (multi_robot_coordination__msg__CylinderDetectionMulti *)allocator.zero_allocate(size, sizeof(multi_robot_coordination__msg__CylinderDetectionMulti), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_robot_coordination__msg__CylinderDetectionMulti__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_robot_coordination__msg__CylinderDetectionMulti__fini(&data[i - 1]);
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
multi_robot_coordination__msg__CylinderDetectionMulti__Sequence__fini(multi_robot_coordination__msg__CylinderDetectionMulti__Sequence * array)
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
      multi_robot_coordination__msg__CylinderDetectionMulti__fini(&array->data[i]);
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

multi_robot_coordination__msg__CylinderDetectionMulti__Sequence *
multi_robot_coordination__msg__CylinderDetectionMulti__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_robot_coordination__msg__CylinderDetectionMulti__Sequence * array = (multi_robot_coordination__msg__CylinderDetectionMulti__Sequence *)allocator.allocate(sizeof(multi_robot_coordination__msg__CylinderDetectionMulti__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multi_robot_coordination__msg__CylinderDetectionMulti__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multi_robot_coordination__msg__CylinderDetectionMulti__Sequence__destroy(multi_robot_coordination__msg__CylinderDetectionMulti__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multi_robot_coordination__msg__CylinderDetectionMulti__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multi_robot_coordination__msg__CylinderDetectionMulti__Sequence__are_equal(const multi_robot_coordination__msg__CylinderDetectionMulti__Sequence * lhs, const multi_robot_coordination__msg__CylinderDetectionMulti__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_robot_coordination__msg__CylinderDetectionMulti__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_robot_coordination__msg__CylinderDetectionMulti__Sequence__copy(
  const multi_robot_coordination__msg__CylinderDetectionMulti__Sequence * input,
  multi_robot_coordination__msg__CylinderDetectionMulti__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_robot_coordination__msg__CylinderDetectionMulti);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multi_robot_coordination__msg__CylinderDetectionMulti * data =
      (multi_robot_coordination__msg__CylinderDetectionMulti *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_robot_coordination__msg__CylinderDetectionMulti__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multi_robot_coordination__msg__CylinderDetectionMulti__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multi_robot_coordination__msg__CylinderDetectionMulti__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
