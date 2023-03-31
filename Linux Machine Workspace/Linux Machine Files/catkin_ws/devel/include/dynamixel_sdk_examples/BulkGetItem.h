// Generated by gencpp from file dynamixel_sdk_examples/BulkGetItem.msg
// DO NOT EDIT!


#ifndef DYNAMIXEL_SDK_EXAMPLES_MESSAGE_BULKGETITEM_H
#define DYNAMIXEL_SDK_EXAMPLES_MESSAGE_BULKGETITEM_H

#include <ros/service_traits.h>


#include <dynamixel_sdk_examples/BulkGetItemRequest.h>
#include <dynamixel_sdk_examples/BulkGetItemResponse.h>


namespace dynamixel_sdk_examples
{

struct BulkGetItem
{

typedef BulkGetItemRequest Request;
typedef BulkGetItemResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct BulkGetItem
} // namespace dynamixel_sdk_examples


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dynamixel_sdk_examples::BulkGetItem > {
  static const char* value()
  {
    return "f0b74b4d53178e0d0ede26a30b687544";
  }

  static const char* value(const ::dynamixel_sdk_examples::BulkGetItem&) { return value(); }
};

template<>
struct DataType< ::dynamixel_sdk_examples::BulkGetItem > {
  static const char* value()
  {
    return "dynamixel_sdk_examples/BulkGetItem";
  }

  static const char* value(const ::dynamixel_sdk_examples::BulkGetItem&) { return value(); }
};


// service_traits::MD5Sum< ::dynamixel_sdk_examples::BulkGetItemRequest> should match 
// service_traits::MD5Sum< ::dynamixel_sdk_examples::BulkGetItem > 
template<>
struct MD5Sum< ::dynamixel_sdk_examples::BulkGetItemRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dynamixel_sdk_examples::BulkGetItem >::value();
  }
  static const char* value(const ::dynamixel_sdk_examples::BulkGetItemRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dynamixel_sdk_examples::BulkGetItemRequest> should match 
// service_traits::DataType< ::dynamixel_sdk_examples::BulkGetItem > 
template<>
struct DataType< ::dynamixel_sdk_examples::BulkGetItemRequest>
{
  static const char* value()
  {
    return DataType< ::dynamixel_sdk_examples::BulkGetItem >::value();
  }
  static const char* value(const ::dynamixel_sdk_examples::BulkGetItemRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dynamixel_sdk_examples::BulkGetItemResponse> should match 
// service_traits::MD5Sum< ::dynamixel_sdk_examples::BulkGetItem > 
template<>
struct MD5Sum< ::dynamixel_sdk_examples::BulkGetItemResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dynamixel_sdk_examples::BulkGetItem >::value();
  }
  static const char* value(const ::dynamixel_sdk_examples::BulkGetItemResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dynamixel_sdk_examples::BulkGetItemResponse> should match 
// service_traits::DataType< ::dynamixel_sdk_examples::BulkGetItem > 
template<>
struct DataType< ::dynamixel_sdk_examples::BulkGetItemResponse>
{
  static const char* value()
  {
    return DataType< ::dynamixel_sdk_examples::BulkGetItem >::value();
  }
  static const char* value(const ::dynamixel_sdk_examples::BulkGetItemResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DYNAMIXEL_SDK_EXAMPLES_MESSAGE_BULKGETITEM_H
