// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from proy_eq1_custom_interface:srv/MyMoveMsg.idl
// generated code does not contain a copyright notice
#include "proy_eq1_custom_interface/srv/detail/my_move_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "proy_eq1_custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "proy_eq1_custom_interface/srv/detail/my_move_msg__struct.h"
#include "proy_eq1_custom_interface/srv/detail/my_move_msg__functions.h"
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

#include "rosidl_runtime_c/string.h"  // move
#include "rosidl_runtime_c/string_functions.h"  // move

// forward declare type support functions


using _MyMoveMsg_Request__ros_msg_type = proy_eq1_custom_interface__srv__MyMoveMsg_Request;

static bool _MyMoveMsg_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MyMoveMsg_Request__ros_msg_type * ros_message = static_cast<const _MyMoveMsg_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: move
  {
    const rosidl_runtime_c__String * str = &ros_message->move;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: velocidad
  {
    cdr << ros_message->velocidad;
  }

  return true;
}

static bool _MyMoveMsg_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MyMoveMsg_Request__ros_msg_type * ros_message = static_cast<_MyMoveMsg_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: move
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->move.data) {
      rosidl_runtime_c__String__init(&ros_message->move);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->move,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'move'\n");
      return false;
    }
  }

  // Field name: velocidad
  {
    cdr >> ros_message->velocidad;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_proy_eq1_custom_interface
size_t get_serialized_size_proy_eq1_custom_interface__srv__MyMoveMsg_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MyMoveMsg_Request__ros_msg_type * ros_message = static_cast<const _MyMoveMsg_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name move
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->move.size + 1);
  // field.name velocidad
  {
    size_t item_size = sizeof(ros_message->velocidad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MyMoveMsg_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_proy_eq1_custom_interface__srv__MyMoveMsg_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_proy_eq1_custom_interface
size_t max_serialized_size_proy_eq1_custom_interface__srv__MyMoveMsg_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: move
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: velocidad
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MyMoveMsg_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_proy_eq1_custom_interface__srv__MyMoveMsg_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MyMoveMsg_Request = {
  "proy_eq1_custom_interface::srv",
  "MyMoveMsg_Request",
  _MyMoveMsg_Request__cdr_serialize,
  _MyMoveMsg_Request__cdr_deserialize,
  _MyMoveMsg_Request__get_serialized_size,
  _MyMoveMsg_Request__max_serialized_size
};

static rosidl_message_type_support_t _MyMoveMsg_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MyMoveMsg_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, proy_eq1_custom_interface, srv, MyMoveMsg_Request)() {
  return &_MyMoveMsg_Request__type_support;
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
// #include "proy_eq1_custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "proy_eq1_custom_interface/srv/detail/my_move_msg__struct.h"
// already included above
// #include "proy_eq1_custom_interface/srv/detail/my_move_msg__functions.h"
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


using _MyMoveMsg_Response__ros_msg_type = proy_eq1_custom_interface__srv__MyMoveMsg_Response;

static bool _MyMoveMsg_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MyMoveMsg_Response__ros_msg_type * ros_message = static_cast<const _MyMoveMsg_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _MyMoveMsg_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MyMoveMsg_Response__ros_msg_type * ros_message = static_cast<_MyMoveMsg_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_proy_eq1_custom_interface
size_t get_serialized_size_proy_eq1_custom_interface__srv__MyMoveMsg_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MyMoveMsg_Response__ros_msg_type * ros_message = static_cast<const _MyMoveMsg_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MyMoveMsg_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_proy_eq1_custom_interface__srv__MyMoveMsg_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_proy_eq1_custom_interface
size_t max_serialized_size_proy_eq1_custom_interface__srv__MyMoveMsg_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _MyMoveMsg_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_proy_eq1_custom_interface__srv__MyMoveMsg_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MyMoveMsg_Response = {
  "proy_eq1_custom_interface::srv",
  "MyMoveMsg_Response",
  _MyMoveMsg_Response__cdr_serialize,
  _MyMoveMsg_Response__cdr_deserialize,
  _MyMoveMsg_Response__get_serialized_size,
  _MyMoveMsg_Response__max_serialized_size
};

static rosidl_message_type_support_t _MyMoveMsg_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MyMoveMsg_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, proy_eq1_custom_interface, srv, MyMoveMsg_Response)() {
  return &_MyMoveMsg_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "proy_eq1_custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "proy_eq1_custom_interface/srv/my_move_msg.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MyMoveMsg__callbacks = {
  "proy_eq1_custom_interface::srv",
  "MyMoveMsg",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, proy_eq1_custom_interface, srv, MyMoveMsg_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, proy_eq1_custom_interface, srv, MyMoveMsg_Response)(),
};

static rosidl_service_type_support_t MyMoveMsg__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MyMoveMsg__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, proy_eq1_custom_interface, srv, MyMoveMsg)() {
  return &MyMoveMsg__handle;
}

#if defined(__cplusplus)
}
#endif
