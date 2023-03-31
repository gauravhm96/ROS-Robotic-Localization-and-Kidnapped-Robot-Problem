// Generated by gencpp from file dynamixel_sdk_examples/GetPosition.msg
// DO NOT EDIT!


#ifndef DYNAMIXEL_SDK_EXAMPLES_MESSAGE_GETPOSITION_H
#define DYNAMIXEL_SDK_EXAMPLES_MESSAGE_GETPOSITION_H

#include <ros/service_traits.h>


#include <dynamixel_sdk_examples/GetPositionRequest.h>
#include <dynamixel_sdk_examples/GetPositionResponse.h>


namespace dynamixel_sdk_examples
{

struct GetPosition
{

typedef GetPositionRequest Request;
typedef GetPositionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetPosition
} // namespace dynamixel_sdk_examples


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dynamixel_sdk_examples::GetPosition > {
  static const char* value()
  {
    return "b532ace3b383dc4c9e64687156423ac0";
  }

  static const char* value(const ::dynamixel_sdk_examples::GetPosition&) { return value(); }
};

template<>
struct DataType< ::dynamixel_sdk_examples::GetPosition > {
  static const char* value()
  {
    return "dynamixel_sdk_examples/GetPosition";
  }

  static const char* value(const ::dynamixel_sdk_examples::GetPosition&) { return value(); }
};


// service_traits::MD5Sum< ::dynamixel_sdk_examples::GetPositionRequest> should match 
// service_traits::MD5Sum< ::dynamixel_sdk_examples::GetPosition > 
template<>
struct MD5Sum< ::dynamixel_sdk_examples::GetPositionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dynamixel_sdk_examples::GetPosition >::value();
  }
  static const char* value(const ::dynamixel_sdk_examples::GetPositionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dynamixel_sdk_examples::GetPositionRequest> should match 
// service_traits::DataType< ::dynamixel_sdk_examples::GetPosition > 
template<>
struct DataType< ::dynamixel_sdk_examples::GetPositionRequest>
{
  static const char* value()
  {
    return DataType< ::dynamixel_sdk_examples::GetPosition >::value();
  }
  static const char* value(const ::dynamixel_sdk_examples::GetPositionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dynamixel_sdk_examples::GetPositionResponse> should match 
// service_traits::MD5Sum< ::dynamixel_sdk_examples::GetPosition > 
template<>
struct MD5Sum< ::dynamixel_sdk_examples::GetPositionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dynamixel_sdk_examples::GetPosition >::value();
  }
  static const char* value(const ::dynamixel_sdk_examples::GetPositionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dynamixel_sdk_examples::GetPositionResponse> should match 
// service_traits::DataType< ::dynamixel_sdk_examples::GetPosition > 
template<>
struct DataType< ::dynamixel_sdk_examples::GetPositionResponse>
{
  static const char* value()
  {
    return DataType< ::dynamixel_sdk_examples::GetPosition >::value();
  }
  static const char* value(const ::dynamixel_sdk_examples::GetPositionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DYNAMIXEL_SDK_EXAMPLES_MESSAGE_GETPOSITION_H