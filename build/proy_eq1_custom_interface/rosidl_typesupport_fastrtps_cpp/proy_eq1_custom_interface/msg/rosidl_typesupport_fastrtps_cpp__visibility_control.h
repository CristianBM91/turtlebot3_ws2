// generated from
// rosidl_typesupport_fastrtps_cpp/resource/rosidl_typesupport_fastrtps_cpp__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef PROY_EQ1_CUSTOM_INTERFACE__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
#define PROY_EQ1_CUSTOM_INTERFACE__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_proy_eq1_custom_interface __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_proy_eq1_custom_interface __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_proy_eq1_custom_interface __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_proy_eq1_custom_interface __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_CPP_BUILDING_DLL_proy_eq1_custom_interface
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_proy_eq1_custom_interface ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_proy_eq1_custom_interface
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_proy_eq1_custom_interface ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_proy_eq1_custom_interface
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_proy_eq1_custom_interface __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_proy_eq1_custom_interface
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_proy_eq1_custom_interface __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_proy_eq1_custom_interface
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // PROY_EQ1_CUSTOM_INTERFACE__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
