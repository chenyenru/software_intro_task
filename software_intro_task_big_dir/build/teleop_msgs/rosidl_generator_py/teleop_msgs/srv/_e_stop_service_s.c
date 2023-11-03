// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from teleop_msgs:srv/EStopService.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "teleop_msgs/srv/detail/e_stop_service__struct.h"
#include "teleop_msgs/srv/detail/e_stop_service__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool teleop_msgs__srv__e_stop_service__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("teleop_msgs.srv._e_stop_service.EStopService_Request", full_classname_dest, 52) == 0);
  }
  teleop_msgs__srv__EStopService_Request * ros_message = _ros_message;
  {  // throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brakes
    PyObject * field = PyObject_GetAttrString(_pymsg, "brakes");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brakes = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // set_estop
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_estop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->set_estop = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * teleop_msgs__srv__e_stop_service__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EStopService_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("teleop_msgs.srv._e_stop_service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EStopService_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  teleop_msgs__srv__EStopService_Request * ros_message = (teleop_msgs__srv__EStopService_Request *)raw_ros_message;
  {  // throttle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brakes
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brakes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brakes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_estop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->set_estop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_estop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "teleop_msgs/srv/detail/e_stop_service__struct.h"
// already included above
// #include "teleop_msgs/srv/detail/e_stop_service__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool teleop_msgs__srv__e_stop_service__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("teleop_msgs.srv._e_stop_service.EStopService_Response", full_classname_dest, 53) == 0);
  }
  teleop_msgs__srv__EStopService_Response * ros_message = _ros_message;
  {  // estop_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "estop_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->estop_state = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * teleop_msgs__srv__e_stop_service__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EStopService_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("teleop_msgs.srv._e_stop_service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EStopService_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  teleop_msgs__srv__EStopService_Response * ros_message = (teleop_msgs__srv__EStopService_Response *)raw_ros_message;
  {  // estop_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->estop_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estop_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
