// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from path_following_interfaces:msg\State.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "path_following_interfaces/msg/detail/state__rosidl_typesupport_introspection_c.h"
#include "path_following_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "path_following_interfaces/msg/detail/state__functions.h"
#include "path_following_interfaces/msg/detail/state__struct.h"


// Include directives for member types
// Member `position`
#include "path_following_interfaces/msg/position.h"
// Member `position`
#include "path_following_interfaces/msg/detail/position__rosidl_typesupport_introspection_c.h"
// Member `velocity`
#include "path_following_interfaces/msg/velocity.h"
// Member `velocity`
#include "path_following_interfaces/msg/detail/velocity__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void State__rosidl_typesupport_introspection_c__State_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  path_following_interfaces__msg__State__init(message_memory);
}

void State__rosidl_typesupport_introspection_c__State_fini_function(void * message_memory)
{
  path_following_interfaces__msg__State__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember State__rosidl_typesupport_introspection_c__State_message_member_array[3] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(path_following_interfaces__msg__State, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(path_following_interfaces__msg__State, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(path_following_interfaces__msg__State, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers State__rosidl_typesupport_introspection_c__State_message_members = {
  "path_following_interfaces__msg",  // message namespace
  "State",  // message name
  3,  // number of fields
  sizeof(path_following_interfaces__msg__State),
  State__rosidl_typesupport_introspection_c__State_message_member_array,  // message members
  State__rosidl_typesupport_introspection_c__State_init_function,  // function to initialize message memory (memory has to be allocated)
  State__rosidl_typesupport_introspection_c__State_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t State__rosidl_typesupport_introspection_c__State_message_type_support_handle = {
  0,
  &State__rosidl_typesupport_introspection_c__State_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_path_following_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following_interfaces, msg, State)() {
  State__rosidl_typesupport_introspection_c__State_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following_interfaces, msg, Position)();
  State__rosidl_typesupport_introspection_c__State_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following_interfaces, msg, Velocity)();
  if (!State__rosidl_typesupport_introspection_c__State_message_type_support_handle.typesupport_identifier) {
    State__rosidl_typesupport_introspection_c__State_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &State__rosidl_typesupport_introspection_c__State_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
