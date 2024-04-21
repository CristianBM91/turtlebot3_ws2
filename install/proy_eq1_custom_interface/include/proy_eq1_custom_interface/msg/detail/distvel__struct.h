// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from proy_eq1_custom_interface:msg/Distvel.idl
// generated code does not contain a copyright notice

#ifndef PROY_EQ1_CUSTOM_INTERFACE__MSG__DETAIL__DISTVEL__STRUCT_H_
#define PROY_EQ1_CUSTOM_INTERFACE__MSG__DETAIL__DISTVEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Distvel in the package proy_eq1_custom_interface.
typedef struct proy_eq1_custom_interface__msg__Distvel
{
  int64_t distancia;
  double velocidad;
} proy_eq1_custom_interface__msg__Distvel;

// Struct for a sequence of proy_eq1_custom_interface__msg__Distvel.
typedef struct proy_eq1_custom_interface__msg__Distvel__Sequence
{
  proy_eq1_custom_interface__msg__Distvel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} proy_eq1_custom_interface__msg__Distvel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROY_EQ1_CUSTOM_INTERFACE__MSG__DETAIL__DISTVEL__STRUCT_H_
