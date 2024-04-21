// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interface:action/Move.idl
// generated code does not contain a copyright notice
#include "custom_interface/action/detail/move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
custom_interface__action__Move_Goal__init(custom_interface__action__Move_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // secs
  return true;
}

void
custom_interface__action__Move_Goal__fini(custom_interface__action__Move_Goal * msg)
{
  if (!msg) {
    return;
  }
  // secs
}

bool
custom_interface__action__Move_Goal__are_equal(const custom_interface__action__Move_Goal * lhs, const custom_interface__action__Move_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // secs
  if (lhs->secs != rhs->secs) {
    return false;
  }
  return true;
}

bool
custom_interface__action__Move_Goal__copy(
  const custom_interface__action__Move_Goal * input,
  custom_interface__action__Move_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // secs
  output->secs = input->secs;
  return true;
}

custom_interface__action__Move_Goal *
custom_interface__action__Move_Goal__create()
{
  custom_interface__action__Move_Goal * msg = (custom_interface__action__Move_Goal *)malloc(sizeof(custom_interface__action__Move_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_Goal));
  bool success = custom_interface__action__Move_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_Goal__destroy(custom_interface__action__Move_Goal * msg)
{
  if (msg) {
    custom_interface__action__Move_Goal__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_Goal__Sequence__init(custom_interface__action__Move_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_Goal * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_Goal *)calloc(size, sizeof(custom_interface__action__Move_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interface__action__Move_Goal__Sequence__fini(custom_interface__action__Move_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interface__action__Move_Goal__Sequence *
custom_interface__action__Move_Goal__Sequence__create(size_t size)
{
  custom_interface__action__Move_Goal__Sequence * array = (custom_interface__action__Move_Goal__Sequence *)malloc(sizeof(custom_interface__action__Move_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_Goal__Sequence__destroy(custom_interface__action__Move_Goal__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interface__action__Move_Goal__Sequence__are_equal(const custom_interface__action__Move_Goal__Sequence * lhs, const custom_interface__action__Move_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interface__action__Move_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interface__action__Move_Goal__Sequence__copy(
  const custom_interface__action__Move_Goal__Sequence * input,
  custom_interface__action__Move_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interface__action__Move_Goal);
    custom_interface__action__Move_Goal * data =
      (custom_interface__action__Move_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interface__action__Move_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interface__action__Move_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interface__action__Move_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_interface__action__Move_Result__init(custom_interface__action__Move_Result * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    custom_interface__action__Move_Result__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__action__Move_Result__fini(custom_interface__action__Move_Result * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
custom_interface__action__Move_Result__are_equal(const custom_interface__action__Move_Result * lhs, const custom_interface__action__Move_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
custom_interface__action__Move_Result__copy(
  const custom_interface__action__Move_Result * input,
  custom_interface__action__Move_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

custom_interface__action__Move_Result *
custom_interface__action__Move_Result__create()
{
  custom_interface__action__Move_Result * msg = (custom_interface__action__Move_Result *)malloc(sizeof(custom_interface__action__Move_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_Result));
  bool success = custom_interface__action__Move_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_Result__destroy(custom_interface__action__Move_Result * msg)
{
  if (msg) {
    custom_interface__action__Move_Result__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_Result__Sequence__init(custom_interface__action__Move_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_Result * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_Result *)calloc(size, sizeof(custom_interface__action__Move_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interface__action__Move_Result__Sequence__fini(custom_interface__action__Move_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interface__action__Move_Result__Sequence *
custom_interface__action__Move_Result__Sequence__create(size_t size)
{
  custom_interface__action__Move_Result__Sequence * array = (custom_interface__action__Move_Result__Sequence *)malloc(sizeof(custom_interface__action__Move_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_Result__Sequence__destroy(custom_interface__action__Move_Result__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_Result__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interface__action__Move_Result__Sequence__are_equal(const custom_interface__action__Move_Result__Sequence * lhs, const custom_interface__action__Move_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interface__action__Move_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interface__action__Move_Result__Sequence__copy(
  const custom_interface__action__Move_Result__Sequence * input,
  custom_interface__action__Move_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interface__action__Move_Result);
    custom_interface__action__Move_Result * data =
      (custom_interface__action__Move_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interface__action__Move_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interface__action__Move_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interface__action__Move_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
custom_interface__action__Move_Feedback__init(custom_interface__action__Move_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__init(&msg->feedback)) {
    custom_interface__action__Move_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__action__Move_Feedback__fini(custom_interface__action__Move_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  rosidl_runtime_c__String__fini(&msg->feedback);
}

bool
custom_interface__action__Move_Feedback__are_equal(const custom_interface__action__Move_Feedback * lhs, const custom_interface__action__Move_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
custom_interface__action__Move_Feedback__copy(
  const custom_interface__action__Move_Feedback * input,
  custom_interface__action__Move_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

custom_interface__action__Move_Feedback *
custom_interface__action__Move_Feedback__create()
{
  custom_interface__action__Move_Feedback * msg = (custom_interface__action__Move_Feedback *)malloc(sizeof(custom_interface__action__Move_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_Feedback));
  bool success = custom_interface__action__Move_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_Feedback__destroy(custom_interface__action__Move_Feedback * msg)
{
  if (msg) {
    custom_interface__action__Move_Feedback__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_Feedback__Sequence__init(custom_interface__action__Move_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_Feedback * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_Feedback *)calloc(size, sizeof(custom_interface__action__Move_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interface__action__Move_Feedback__Sequence__fini(custom_interface__action__Move_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interface__action__Move_Feedback__Sequence *
custom_interface__action__Move_Feedback__Sequence__create(size_t size)
{
  custom_interface__action__Move_Feedback__Sequence * array = (custom_interface__action__Move_Feedback__Sequence *)malloc(sizeof(custom_interface__action__Move_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_Feedback__Sequence__destroy(custom_interface__action__Move_Feedback__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interface__action__Move_Feedback__Sequence__are_equal(const custom_interface__action__Move_Feedback__Sequence * lhs, const custom_interface__action__Move_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interface__action__Move_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interface__action__Move_Feedback__Sequence__copy(
  const custom_interface__action__Move_Feedback__Sequence * input,
  custom_interface__action__Move_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interface__action__Move_Feedback);
    custom_interface__action__Move_Feedback * data =
      (custom_interface__action__Move_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interface__action__Move_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interface__action__Move_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interface__action__Move_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "custom_interface/action/detail/move__functions.h"

bool
custom_interface__action__Move_SendGoal_Request__init(custom_interface__action__Move_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    custom_interface__action__Move_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!custom_interface__action__Move_Goal__init(&msg->goal)) {
    custom_interface__action__Move_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__action__Move_SendGoal_Request__fini(custom_interface__action__Move_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  custom_interface__action__Move_Goal__fini(&msg->goal);
}

bool
custom_interface__action__Move_SendGoal_Request__are_equal(const custom_interface__action__Move_SendGoal_Request * lhs, const custom_interface__action__Move_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!custom_interface__action__Move_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
custom_interface__action__Move_SendGoal_Request__copy(
  const custom_interface__action__Move_SendGoal_Request * input,
  custom_interface__action__Move_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!custom_interface__action__Move_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

custom_interface__action__Move_SendGoal_Request *
custom_interface__action__Move_SendGoal_Request__create()
{
  custom_interface__action__Move_SendGoal_Request * msg = (custom_interface__action__Move_SendGoal_Request *)malloc(sizeof(custom_interface__action__Move_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_SendGoal_Request));
  bool success = custom_interface__action__Move_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_SendGoal_Request__destroy(custom_interface__action__Move_SendGoal_Request * msg)
{
  if (msg) {
    custom_interface__action__Move_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_SendGoal_Request__Sequence__init(custom_interface__action__Move_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_SendGoal_Request * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_SendGoal_Request *)calloc(size, sizeof(custom_interface__action__Move_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interface__action__Move_SendGoal_Request__Sequence__fini(custom_interface__action__Move_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interface__action__Move_SendGoal_Request__Sequence *
custom_interface__action__Move_SendGoal_Request__Sequence__create(size_t size)
{
  custom_interface__action__Move_SendGoal_Request__Sequence * array = (custom_interface__action__Move_SendGoal_Request__Sequence *)malloc(sizeof(custom_interface__action__Move_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_SendGoal_Request__Sequence__destroy(custom_interface__action__Move_SendGoal_Request__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interface__action__Move_SendGoal_Request__Sequence__are_equal(const custom_interface__action__Move_SendGoal_Request__Sequence * lhs, const custom_interface__action__Move_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interface__action__Move_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interface__action__Move_SendGoal_Request__Sequence__copy(
  const custom_interface__action__Move_SendGoal_Request__Sequence * input,
  custom_interface__action__Move_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interface__action__Move_SendGoal_Request);
    custom_interface__action__Move_SendGoal_Request * data =
      (custom_interface__action__Move_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interface__action__Move_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interface__action__Move_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interface__action__Move_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
custom_interface__action__Move_SendGoal_Response__init(custom_interface__action__Move_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    custom_interface__action__Move_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__action__Move_SendGoal_Response__fini(custom_interface__action__Move_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
custom_interface__action__Move_SendGoal_Response__are_equal(const custom_interface__action__Move_SendGoal_Response * lhs, const custom_interface__action__Move_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
custom_interface__action__Move_SendGoal_Response__copy(
  const custom_interface__action__Move_SendGoal_Response * input,
  custom_interface__action__Move_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

custom_interface__action__Move_SendGoal_Response *
custom_interface__action__Move_SendGoal_Response__create()
{
  custom_interface__action__Move_SendGoal_Response * msg = (custom_interface__action__Move_SendGoal_Response *)malloc(sizeof(custom_interface__action__Move_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_SendGoal_Response));
  bool success = custom_interface__action__Move_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_SendGoal_Response__destroy(custom_interface__action__Move_SendGoal_Response * msg)
{
  if (msg) {
    custom_interface__action__Move_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_SendGoal_Response__Sequence__init(custom_interface__action__Move_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_SendGoal_Response * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_SendGoal_Response *)calloc(size, sizeof(custom_interface__action__Move_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interface__action__Move_SendGoal_Response__Sequence__fini(custom_interface__action__Move_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interface__action__Move_SendGoal_Response__Sequence *
custom_interface__action__Move_SendGoal_Response__Sequence__create(size_t size)
{
  custom_interface__action__Move_SendGoal_Response__Sequence * array = (custom_interface__action__Move_SendGoal_Response__Sequence *)malloc(sizeof(custom_interface__action__Move_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_SendGoal_Response__Sequence__destroy(custom_interface__action__Move_SendGoal_Response__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interface__action__Move_SendGoal_Response__Sequence__are_equal(const custom_interface__action__Move_SendGoal_Response__Sequence * lhs, const custom_interface__action__Move_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interface__action__Move_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interface__action__Move_SendGoal_Response__Sequence__copy(
  const custom_interface__action__Move_SendGoal_Response__Sequence * input,
  custom_interface__action__Move_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interface__action__Move_SendGoal_Response);
    custom_interface__action__Move_SendGoal_Response * data =
      (custom_interface__action__Move_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interface__action__Move_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interface__action__Move_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interface__action__Move_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
custom_interface__action__Move_GetResult_Request__init(custom_interface__action__Move_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    custom_interface__action__Move_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__action__Move_GetResult_Request__fini(custom_interface__action__Move_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
custom_interface__action__Move_GetResult_Request__are_equal(const custom_interface__action__Move_GetResult_Request * lhs, const custom_interface__action__Move_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
custom_interface__action__Move_GetResult_Request__copy(
  const custom_interface__action__Move_GetResult_Request * input,
  custom_interface__action__Move_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

custom_interface__action__Move_GetResult_Request *
custom_interface__action__Move_GetResult_Request__create()
{
  custom_interface__action__Move_GetResult_Request * msg = (custom_interface__action__Move_GetResult_Request *)malloc(sizeof(custom_interface__action__Move_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_GetResult_Request));
  bool success = custom_interface__action__Move_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_GetResult_Request__destroy(custom_interface__action__Move_GetResult_Request * msg)
{
  if (msg) {
    custom_interface__action__Move_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_GetResult_Request__Sequence__init(custom_interface__action__Move_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_GetResult_Request * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_GetResult_Request *)calloc(size, sizeof(custom_interface__action__Move_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interface__action__Move_GetResult_Request__Sequence__fini(custom_interface__action__Move_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interface__action__Move_GetResult_Request__Sequence *
custom_interface__action__Move_GetResult_Request__Sequence__create(size_t size)
{
  custom_interface__action__Move_GetResult_Request__Sequence * array = (custom_interface__action__Move_GetResult_Request__Sequence *)malloc(sizeof(custom_interface__action__Move_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_GetResult_Request__Sequence__destroy(custom_interface__action__Move_GetResult_Request__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interface__action__Move_GetResult_Request__Sequence__are_equal(const custom_interface__action__Move_GetResult_Request__Sequence * lhs, const custom_interface__action__Move_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interface__action__Move_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interface__action__Move_GetResult_Request__Sequence__copy(
  const custom_interface__action__Move_GetResult_Request__Sequence * input,
  custom_interface__action__Move_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interface__action__Move_GetResult_Request);
    custom_interface__action__Move_GetResult_Request * data =
      (custom_interface__action__Move_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interface__action__Move_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interface__action__Move_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interface__action__Move_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "custom_interface/action/detail/move__functions.h"

bool
custom_interface__action__Move_GetResult_Response__init(custom_interface__action__Move_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!custom_interface__action__Move_Result__init(&msg->result)) {
    custom_interface__action__Move_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__action__Move_GetResult_Response__fini(custom_interface__action__Move_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  custom_interface__action__Move_Result__fini(&msg->result);
}

bool
custom_interface__action__Move_GetResult_Response__are_equal(const custom_interface__action__Move_GetResult_Response * lhs, const custom_interface__action__Move_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!custom_interface__action__Move_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
custom_interface__action__Move_GetResult_Response__copy(
  const custom_interface__action__Move_GetResult_Response * input,
  custom_interface__action__Move_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!custom_interface__action__Move_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

custom_interface__action__Move_GetResult_Response *
custom_interface__action__Move_GetResult_Response__create()
{
  custom_interface__action__Move_GetResult_Response * msg = (custom_interface__action__Move_GetResult_Response *)malloc(sizeof(custom_interface__action__Move_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_GetResult_Response));
  bool success = custom_interface__action__Move_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_GetResult_Response__destroy(custom_interface__action__Move_GetResult_Response * msg)
{
  if (msg) {
    custom_interface__action__Move_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_GetResult_Response__Sequence__init(custom_interface__action__Move_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_GetResult_Response * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_GetResult_Response *)calloc(size, sizeof(custom_interface__action__Move_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interface__action__Move_GetResult_Response__Sequence__fini(custom_interface__action__Move_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interface__action__Move_GetResult_Response__Sequence *
custom_interface__action__Move_GetResult_Response__Sequence__create(size_t size)
{
  custom_interface__action__Move_GetResult_Response__Sequence * array = (custom_interface__action__Move_GetResult_Response__Sequence *)malloc(sizeof(custom_interface__action__Move_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_GetResult_Response__Sequence__destroy(custom_interface__action__Move_GetResult_Response__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interface__action__Move_GetResult_Response__Sequence__are_equal(const custom_interface__action__Move_GetResult_Response__Sequence * lhs, const custom_interface__action__Move_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interface__action__Move_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interface__action__Move_GetResult_Response__Sequence__copy(
  const custom_interface__action__Move_GetResult_Response__Sequence * input,
  custom_interface__action__Move_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interface__action__Move_GetResult_Response);
    custom_interface__action__Move_GetResult_Response * data =
      (custom_interface__action__Move_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interface__action__Move_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interface__action__Move_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interface__action__Move_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "custom_interface/action/detail/move__functions.h"

bool
custom_interface__action__Move_FeedbackMessage__init(custom_interface__action__Move_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    custom_interface__action__Move_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!custom_interface__action__Move_Feedback__init(&msg->feedback)) {
    custom_interface__action__Move_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__action__Move_FeedbackMessage__fini(custom_interface__action__Move_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  custom_interface__action__Move_Feedback__fini(&msg->feedback);
}

bool
custom_interface__action__Move_FeedbackMessage__are_equal(const custom_interface__action__Move_FeedbackMessage * lhs, const custom_interface__action__Move_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!custom_interface__action__Move_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
custom_interface__action__Move_FeedbackMessage__copy(
  const custom_interface__action__Move_FeedbackMessage * input,
  custom_interface__action__Move_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!custom_interface__action__Move_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

custom_interface__action__Move_FeedbackMessage *
custom_interface__action__Move_FeedbackMessage__create()
{
  custom_interface__action__Move_FeedbackMessage * msg = (custom_interface__action__Move_FeedbackMessage *)malloc(sizeof(custom_interface__action__Move_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_FeedbackMessage));
  bool success = custom_interface__action__Move_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_FeedbackMessage__destroy(custom_interface__action__Move_FeedbackMessage * msg)
{
  if (msg) {
    custom_interface__action__Move_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_FeedbackMessage__Sequence__init(custom_interface__action__Move_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_FeedbackMessage * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_FeedbackMessage *)calloc(size, sizeof(custom_interface__action__Move_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interface__action__Move_FeedbackMessage__Sequence__fini(custom_interface__action__Move_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interface__action__Move_FeedbackMessage__Sequence *
custom_interface__action__Move_FeedbackMessage__Sequence__create(size_t size)
{
  custom_interface__action__Move_FeedbackMessage__Sequence * array = (custom_interface__action__Move_FeedbackMessage__Sequence *)malloc(sizeof(custom_interface__action__Move_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_FeedbackMessage__Sequence__destroy(custom_interface__action__Move_FeedbackMessage__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interface__action__Move_FeedbackMessage__Sequence__are_equal(const custom_interface__action__Move_FeedbackMessage__Sequence * lhs, const custom_interface__action__Move_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interface__action__Move_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interface__action__Move_FeedbackMessage__Sequence__copy(
  const custom_interface__action__Move_FeedbackMessage__Sequence * input,
  custom_interface__action__Move_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interface__action__Move_FeedbackMessage);
    custom_interface__action__Move_FeedbackMessage * data =
      (custom_interface__action__Move_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interface__action__Move_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interface__action__Move_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interface__action__Move_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
