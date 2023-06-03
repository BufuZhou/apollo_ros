// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: apollo_msgs/proto/perception/traffic_light_detection.proto

#ifndef PROTOBUF_apollo_5fmsgs_2fproto_2fperception_2ftraffic_5flight_5fdetection_2eproto__INCLUDED
#define PROTOBUF_apollo_5fmsgs_2fproto_2fperception_2ftraffic_5flight_5fdetection_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "apollo_msgs/proto/common/header.pb.h"
// @@protoc_insertion_point(includes)

namespace apollo {
namespace perception {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_apollo_5fmsgs_2fproto_2fperception_2ftraffic_5flight_5fdetection_2eproto();
void protobuf_AssignDesc_apollo_5fmsgs_2fproto_2fperception_2ftraffic_5flight_5fdetection_2eproto();
void protobuf_ShutdownFile_apollo_5fmsgs_2fproto_2fperception_2ftraffic_5flight_5fdetection_2eproto();

class TrafficLight;
class TrafficLightDetection;

enum TrafficLight_Color {
  TrafficLight_Color_UNKNOWN = 0,
  TrafficLight_Color_RED = 1,
  TrafficLight_Color_YELLOW = 2,
  TrafficLight_Color_GREEN = 3,
  TrafficLight_Color_TrafficLight_Color_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  TrafficLight_Color_TrafficLight_Color_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool TrafficLight_Color_IsValid(int value);
const TrafficLight_Color TrafficLight_Color_Color_MIN = TrafficLight_Color_UNKNOWN;
const TrafficLight_Color TrafficLight_Color_Color_MAX = TrafficLight_Color_GREEN;
const int TrafficLight_Color_Color_ARRAYSIZE = TrafficLight_Color_Color_MAX + 1;

const ::google::protobuf::EnumDescriptor* TrafficLight_Color_descriptor();
inline const ::std::string& TrafficLight_Color_Name(TrafficLight_Color value) {
  return ::google::protobuf::internal::NameOfEnum(
    TrafficLight_Color_descriptor(), value);
}
inline bool TrafficLight_Color_Parse(
    const ::std::string& name, TrafficLight_Color* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TrafficLight_Color>(
    TrafficLight_Color_descriptor(), name, value);
}
// ===================================================================

class TrafficLight : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.perception.TrafficLight) */ {
 public:
  TrafficLight();
  virtual ~TrafficLight();

  TrafficLight(const TrafficLight& from);

  inline TrafficLight& operator=(const TrafficLight& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TrafficLight& default_instance();

  void Swap(TrafficLight* other);

  // implements Message ----------------------------------------------

  inline TrafficLight* New() const { return New(NULL); }

  TrafficLight* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TrafficLight& from);
  void MergeFrom(const TrafficLight& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TrafficLight* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef TrafficLight_Color Color;
  static const Color UNKNOWN =
    TrafficLight_Color_UNKNOWN;
  static const Color RED =
    TrafficLight_Color_RED;
  static const Color YELLOW =
    TrafficLight_Color_YELLOW;
  static const Color GREEN =
    TrafficLight_Color_GREEN;
  static inline bool Color_IsValid(int value) {
    return TrafficLight_Color_IsValid(value);
  }
  static const Color Color_MIN =
    TrafficLight_Color_Color_MIN;
  static const Color Color_MAX =
    TrafficLight_Color_Color_MAX;
  static const int Color_ARRAYSIZE =
    TrafficLight_Color_Color_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Color_descriptor() {
    return TrafficLight_Color_descriptor();
  }
  static inline const ::std::string& Color_Name(Color value) {
    return TrafficLight_Color_Name(value);
  }
  static inline bool Color_Parse(const ::std::string& name,
      Color* value) {
    return TrafficLight_Color_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .apollo.perception.TrafficLight.Color color = 1;
  void clear_color();
  static const int kColorFieldNumber = 1;
  ::apollo::perception::TrafficLight_Color color() const;
  void set_color(::apollo::perception::TrafficLight_Color value);

  // optional string id = 2;
  void clear_id();
  static const int kIdFieldNumber = 2;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // optional double confidence = 3;
  void clear_confidence();
  static const int kConfidenceFieldNumber = 3;
  double confidence() const;
  void set_confidence(double value);

  // optional double tracking_time = 4;
  void clear_tracking_time();
  static const int kTrackingTimeFieldNumber = 4;
  double tracking_time() const;
  void set_tracking_time(double value);

  // @@protoc_insertion_point(class_scope:apollo.perception.TrafficLight)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  double confidence_;
  double tracking_time_;
  int color_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_apollo_5fmsgs_2fproto_2fperception_2ftraffic_5flight_5fdetection_2eproto();
  friend void protobuf_AssignDesc_apollo_5fmsgs_2fproto_2fperception_2ftraffic_5flight_5fdetection_2eproto();
  friend void protobuf_ShutdownFile_apollo_5fmsgs_2fproto_2fperception_2ftraffic_5flight_5fdetection_2eproto();

  void InitAsDefaultInstance();
  static TrafficLight* default_instance_;
};
// -------------------------------------------------------------------

class TrafficLightDetection : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.perception.TrafficLightDetection) */ {
 public:
  TrafficLightDetection();
  virtual ~TrafficLightDetection();

  TrafficLightDetection(const TrafficLightDetection& from);

  inline TrafficLightDetection& operator=(const TrafficLightDetection& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TrafficLightDetection& default_instance();

  void Swap(TrafficLightDetection* other);

  // implements Message ----------------------------------------------

  inline TrafficLightDetection* New() const { return New(NULL); }

  TrafficLightDetection* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TrafficLightDetection& from);
  void MergeFrom(const TrafficLightDetection& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TrafficLightDetection* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .apollo.common.Header header = 2;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 2;
  const ::apollo::common::Header& header() const;
  ::apollo::common::Header* mutable_header();
  ::apollo::common::Header* release_header();
  void set_allocated_header(::apollo::common::Header* header);

  // repeated .apollo.perception.TrafficLight traffic_light = 1;
  int traffic_light_size() const;
  void clear_traffic_light();
  static const int kTrafficLightFieldNumber = 1;
  const ::apollo::perception::TrafficLight& traffic_light(int index) const;
  ::apollo::perception::TrafficLight* mutable_traffic_light(int index);
  ::apollo::perception::TrafficLight* add_traffic_light();
  ::google::protobuf::RepeatedPtrField< ::apollo::perception::TrafficLight >*
      mutable_traffic_light();
  const ::google::protobuf::RepeatedPtrField< ::apollo::perception::TrafficLight >&
      traffic_light() const;

  // @@protoc_insertion_point(class_scope:apollo.perception.TrafficLightDetection)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::apollo::common::Header* header_;
  ::google::protobuf::RepeatedPtrField< ::apollo::perception::TrafficLight > traffic_light_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_apollo_5fmsgs_2fproto_2fperception_2ftraffic_5flight_5fdetection_2eproto();
  friend void protobuf_AssignDesc_apollo_5fmsgs_2fproto_2fperception_2ftraffic_5flight_5fdetection_2eproto();
  friend void protobuf_ShutdownFile_apollo_5fmsgs_2fproto_2fperception_2ftraffic_5flight_5fdetection_2eproto();

  void InitAsDefaultInstance();
  static TrafficLightDetection* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TrafficLight

// optional .apollo.perception.TrafficLight.Color color = 1;
inline void TrafficLight::clear_color() {
  color_ = 0;
}
inline ::apollo::perception::TrafficLight_Color TrafficLight::color() const {
  // @@protoc_insertion_point(field_get:apollo.perception.TrafficLight.color)
  return static_cast< ::apollo::perception::TrafficLight_Color >(color_);
}
inline void TrafficLight::set_color(::apollo::perception::TrafficLight_Color value) {
  
  color_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.TrafficLight.color)
}

// optional string id = 2;
inline void TrafficLight::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TrafficLight::id() const {
  // @@protoc_insertion_point(field_get:apollo.perception.TrafficLight.id)
  return id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TrafficLight::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.perception.TrafficLight.id)
}
inline void TrafficLight::set_id(const char* value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.TrafficLight.id)
}
inline void TrafficLight::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.TrafficLight.id)
}
inline ::std::string* TrafficLight::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:apollo.perception.TrafficLight.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TrafficLight::release_id() {
  // @@protoc_insertion_point(field_release:apollo.perception.TrafficLight.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TrafficLight::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.TrafficLight.id)
}

// optional double confidence = 3;
inline void TrafficLight::clear_confidence() {
  confidence_ = 0;
}
inline double TrafficLight::confidence() const {
  // @@protoc_insertion_point(field_get:apollo.perception.TrafficLight.confidence)
  return confidence_;
}
inline void TrafficLight::set_confidence(double value) {
  
  confidence_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.TrafficLight.confidence)
}

// optional double tracking_time = 4;
inline void TrafficLight::clear_tracking_time() {
  tracking_time_ = 0;
}
inline double TrafficLight::tracking_time() const {
  // @@protoc_insertion_point(field_get:apollo.perception.TrafficLight.tracking_time)
  return tracking_time_;
}
inline void TrafficLight::set_tracking_time(double value) {
  
  tracking_time_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.TrafficLight.tracking_time)
}

// -------------------------------------------------------------------

// TrafficLightDetection

// optional .apollo.common.Header header = 2;
inline bool TrafficLightDetection::has_header() const {
  return !_is_default_instance_ && header_ != NULL;
}
inline void TrafficLightDetection::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
}
inline const ::apollo::common::Header& TrafficLightDetection::header() const {
  // @@protoc_insertion_point(field_get:apollo.perception.TrafficLightDetection.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::apollo::common::Header* TrafficLightDetection::mutable_header() {
  
  if (header_ == NULL) {
    header_ = new ::apollo::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:apollo.perception.TrafficLightDetection.header)
  return header_;
}
inline ::apollo::common::Header* TrafficLightDetection::release_header() {
  // @@protoc_insertion_point(field_release:apollo.perception.TrafficLightDetection.header)
  
  ::apollo::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void TrafficLightDetection::set_allocated_header(::apollo::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.TrafficLightDetection.header)
}

// repeated .apollo.perception.TrafficLight traffic_light = 1;
inline int TrafficLightDetection::traffic_light_size() const {
  return traffic_light_.size();
}
inline void TrafficLightDetection::clear_traffic_light() {
  traffic_light_.Clear();
}
inline const ::apollo::perception::TrafficLight& TrafficLightDetection::traffic_light(int index) const {
  // @@protoc_insertion_point(field_get:apollo.perception.TrafficLightDetection.traffic_light)
  return traffic_light_.Get(index);
}
inline ::apollo::perception::TrafficLight* TrafficLightDetection::mutable_traffic_light(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.perception.TrafficLightDetection.traffic_light)
  return traffic_light_.Mutable(index);
}
inline ::apollo::perception::TrafficLight* TrafficLightDetection::add_traffic_light() {
  // @@protoc_insertion_point(field_add:apollo.perception.TrafficLightDetection.traffic_light)
  return traffic_light_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::apollo::perception::TrafficLight >*
TrafficLightDetection::mutable_traffic_light() {
  // @@protoc_insertion_point(field_mutable_list:apollo.perception.TrafficLightDetection.traffic_light)
  return &traffic_light_;
}
inline const ::google::protobuf::RepeatedPtrField< ::apollo::perception::TrafficLight >&
TrafficLightDetection::traffic_light() const {
  // @@protoc_insertion_point(field_list:apollo.perception.TrafficLightDetection.traffic_light)
  return traffic_light_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace perception
}  // namespace apollo

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::apollo::perception::TrafficLight_Color> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::perception::TrafficLight_Color>() {
  return ::apollo::perception::TrafficLight_Color_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_apollo_5fmsgs_2fproto_2fperception_2ftraffic_5flight_5fdetection_2eproto__INCLUDED
