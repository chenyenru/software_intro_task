// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_msgs:srv/EStopService.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__SRV__DETAIL__E_STOP_SERVICE__STRUCT_HPP_
#define TELEOP_MSGS__SRV__DETAIL__E_STOP_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__teleop_msgs__srv__EStopService_Request __attribute__((deprecated))
#else
# define DEPRECATED__teleop_msgs__srv__EStopService_Request __declspec(deprecated)
#endif

namespace teleop_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EStopService_Request_
{
  using Type = EStopService_Request_<ContainerAllocator>;

  explicit EStopService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0;
      this->steering = 0.0;
      this->brakes = 0.0;
      this->set_estop = false;
    }
  }

  explicit EStopService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0;
      this->steering = 0.0;
      this->brakes = 0.0;
      this->set_estop = false;
    }
  }

  // field types and members
  using _throttle_type =
    double;
  _throttle_type throttle;
  using _steering_type =
    double;
  _steering_type steering;
  using _brakes_type =
    double;
  _brakes_type brakes;
  using _set_estop_type =
    bool;
  _set_estop_type set_estop;

  // setters for named parameter idiom
  Type & set__throttle(
    const double & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__steering(
    const double & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__brakes(
    const double & _arg)
  {
    this->brakes = _arg;
    return *this;
  }
  Type & set__set_estop(
    const bool & _arg)
  {
    this->set_estop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_msgs::srv::EStopService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_msgs::srv::EStopService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_msgs::srv::EStopService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_msgs::srv::EStopService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::srv::EStopService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::srv::EStopService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::srv::EStopService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::srv::EStopService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_msgs::srv::EStopService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_msgs::srv::EStopService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_msgs__srv__EStopService_Request
    std::shared_ptr<teleop_msgs::srv::EStopService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_msgs__srv__EStopService_Request
    std::shared_ptr<teleop_msgs::srv::EStopService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EStopService_Request_ & other) const
  {
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->brakes != other.brakes) {
      return false;
    }
    if (this->set_estop != other.set_estop) {
      return false;
    }
    return true;
  }
  bool operator!=(const EStopService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EStopService_Request_

// alias to use template instance with default allocator
using EStopService_Request =
  teleop_msgs::srv::EStopService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace teleop_msgs


#ifndef _WIN32
# define DEPRECATED__teleop_msgs__srv__EStopService_Response __attribute__((deprecated))
#else
# define DEPRECATED__teleop_msgs__srv__EStopService_Response __declspec(deprecated)
#endif

namespace teleop_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EStopService_Response_
{
  using Type = EStopService_Response_<ContainerAllocator>;

  explicit EStopService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->estop_state = false;
    }
  }

  explicit EStopService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->estop_state = false;
    }
  }

  // field types and members
  using _estop_state_type =
    bool;
  _estop_state_type estop_state;

  // setters for named parameter idiom
  Type & set__estop_state(
    const bool & _arg)
  {
    this->estop_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_msgs::srv::EStopService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_msgs::srv::EStopService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_msgs::srv::EStopService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_msgs::srv::EStopService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::srv::EStopService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::srv::EStopService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::srv::EStopService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::srv::EStopService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_msgs::srv::EStopService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_msgs::srv::EStopService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_msgs__srv__EStopService_Response
    std::shared_ptr<teleop_msgs::srv::EStopService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_msgs__srv__EStopService_Response
    std::shared_ptr<teleop_msgs::srv::EStopService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EStopService_Response_ & other) const
  {
    if (this->estop_state != other.estop_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const EStopService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EStopService_Response_

// alias to use template instance with default allocator
using EStopService_Response =
  teleop_msgs::srv::EStopService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace teleop_msgs

namespace teleop_msgs
{

namespace srv
{

struct EStopService
{
  using Request = teleop_msgs::srv::EStopService_Request;
  using Response = teleop_msgs::srv::EStopService_Response;
};

}  // namespace srv

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__SRV__DETAIL__E_STOP_SERVICE__STRUCT_HPP_
