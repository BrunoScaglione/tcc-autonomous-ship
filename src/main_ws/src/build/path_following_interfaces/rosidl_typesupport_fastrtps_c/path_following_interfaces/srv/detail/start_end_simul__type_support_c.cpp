// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from path_following_interfaces:srv\StartEndSimul.idl
// generated code does not contain a copyright notice
#include "path_following_interfaces/srv/detail/start_end_simul__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "path_following_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "path_following_interfaces/srv/detail/start_end_simul__struct.h"
#include "path_following_interfaces/srv/detail/start_end_simul__functions.h"
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

#include "path_following_interfaces/msg/detail/state__functions.h"  // initial_state

// forward declare type support functions
size_t get_serialized_size_path_following_interfaces__msg__State(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_path_following_interfaces__msg__State(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following_interfaces, msg, State)();


using _StartEndSimul_Request__ros_msg_type = path_following_interfaces__srv__StartEndSimul_Request;

static bool _StartEndSimul_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StartEndSimul_Request__ros_msg_type * ros_message = static_cast<const _StartEndSimul_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: initial_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, path_following_interfaces, msg, State
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->initial_state, cdr))
    {
      return false;
    }
  }

  // Field name: end_simul
  {
    cdr << (ros_message->end_simul ? true : false);
  }

  return true;
}

static bool _StartEndSimul_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StartEndSimul_Request__ros_msg_type * ros_message = static_cast<_StartEndSimul_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: initial_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, path_following_interfaces, msg, State
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->initial_state))
    {
      return false;
    }
  }

  // Field name: end_simul
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->end_simul = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_path_following_interfaces
size_t get_serialized_size_path_following_interfaces__srv__StartEndSimul_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StartEndSimul_Request__ros_msg_type * ros_message = static_cast<const _StartEndSimul_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name initial_state

  current_alignment += get_serialized_size_path_following_interfaces__msg__State(
    &(ros_message->initial_state), current_alignment);
  // field.name end_simul
  {
    size_t item_size = sizeof(ros_message->end_simul);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StartEndSimul_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_path_following_interfaces__srv__StartEndSimul_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_path_following_interfaces
size_t max_serialized_size_path_following_interfaces__srv__StartEndSimul_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: initial_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_path_following_interfaces__msg__State(
        full_bounded, current_alignment);
    }
  }
  // member: end_simul
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _StartEndSimul_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_path_following_interfaces__srv__StartEndSimul_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_StartEndSimul_Request = {
  "path_following_interfaces::srv",
  "StartEndSimul_Request",
  _StartEndSimul_Request__cdr_serialize,
  _StartEndSimul_Request__cdr_deserialize,
  _StartEndSimul_Request__get_serialized_size,
  _StartEndSimul_Request__max_serialized_size
};

static rosidl_message_type_support_t _StartEndSimul_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StartEndSimul_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following_interfaces, srv, StartEndSimul_Request)() {
  return &_StartEndSimul_Request__type_support;
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
// #include "path_following_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "path_following_interfaces/srv/detail/start_end_simul__struct.h"
// already included above
// #include "path_following_interfaces/srv/detail/start_end_simul__functions.h"
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

#include "rosidl_runtime_c/string.h"  // reporting
#include "rosidl_runtime_c/string_functions.h"  // reporting

// forward declare type support functions


using _StartEndSimul_Response__ros_msg_type = path_following_interfaces__srv__StartEndSimul_Response;

static bool _StartEndSimul_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StartEndSimul_Response__ros_msg_type * ros_message = static_cast<const _StartEndSimul_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: reporting
  {
    const rosidl_runtime_c__String * str = &ros_message->reporting;
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

  return true;
}

static bool _StartEndSimul_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StartEndSimul_Response__ros_msg_type * ros_message = static_cast<_StartEndSimul_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: reporting
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->reporting.data) {
      rosidl_runtime_c__String__init(&ros_message->reporting);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->reporting,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'reporting'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_path_following_interfaces
size_t get_serialized_size_path_following_interfaces__srv__StartEndSimul_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StartEndSimul_Response__ros_msg_type * ros_message = static_cast<const _StartEndSimul_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name reporting
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reporting.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _StartEndSimul_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_path_following_interfaces__srv__StartEndSimul_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_path_following_interfaces
size_t max_serialized_size_path_following_interfaces__srv__StartEndSimul_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: reporting
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _StartEndSimul_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_path_following_interfaces__srv__StartEndSimul_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_StartEndSimul_Response = {
  "path_following_interfaces::srv",
  "StartEndSimul_Response",
  _StartEndSimul_Response__cdr_serialize,
  _StartEndSimul_Response__cdr_deserialize,
  _StartEndSimul_Response__get_serialized_size,
  _StartEndSimul_Response__max_serialized_size
};

static rosidl_message_type_support_t _StartEndSimul_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StartEndSimul_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following_interfaces, srv, StartEndSimul_Response)() {
  return &_StartEndSimul_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "path_following_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "path_following_interfaces/srv/start_end_simul.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t StartEndSimul__callbacks = {
  "path_following_interfaces::srv",
  "StartEndSimul",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following_interfaces, srv, StartEndSimul_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following_interfaces, srv, StartEndSimul_Response)(),
};

static rosidl_service_type_support_t StartEndSimul__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &StartEndSimul__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following_interfaces, srv, StartEndSimul)() {
  return &StartEndSimul__handle;
}

#if defined(__cplusplus)
}
#endif
