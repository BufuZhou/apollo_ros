// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: apollo_msgs/proto/common/header.proto

#ifndef PROTOBUF_apollo_5fmsgs_2fproto_2fcommon_2fheader_2eproto__INCLUDED
#define PROTOBUF_apollo_5fmsgs_2fproto_2fcommon_2fheader_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "apollo_msgs/proto/common/error_code.pb.h"
// @@protoc_insertion_point(includes)

namespace apollo {
namespace common {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_apollo_5fmsgs_2fproto_2fcommon_2fheader_2eproto();
void protobuf_AssignDesc_apollo_5fmsgs_2fproto_2fcommon_2fheader_2eproto();
void protobuf_ShutdownFile_apollo_5fmsgs_2fproto_2fcommon_2fheader_2eproto();

class Header;

// ===================================================================

class Header : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.common.Header) */ {
 public:
  Header();
  virtual ~Header();

  Header(const Header& from);

  inline Header& operator=(const Header& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Header& default_instance();

  void Swap(Header* other);

  // implements Message ----------------------------------------------

  inline Header* New() const { return New(NULL); }

  Header* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Header& from);
  void MergeFrom(const Header& from);
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
  void InternalSwap(Header* other);
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

  // optional double timestamp_sec = 1;
  void clear_timestamp_sec();
  static const int kTimestampSecFieldNumber = 1;
  double timestamp_sec() const;
  void set_timestamp_sec(double value);

  // optional string module_name = 2;
  void clear_module_name();
  static const int kModuleNameFieldNumber = 2;
  const ::std::string& module_name() const;
  void set_module_name(const ::std::string& value);
  void set_module_name(const char* value);
  void set_module_name(const char* value, size_t size);
  ::std::string* mutable_module_name();
  ::std::string* release_module_name();
  void set_allocated_module_name(::std::string* module_name);

  // optional uint32 sequence_num = 3;
  void clear_sequence_num();
  static const int kSequenceNumFieldNumber = 3;
  ::google::protobuf::uint32 sequence_num() const;
  void set_sequence_num(::google::protobuf::uint32 value);

  // optional uint64 lidar_timestamp = 4;
  void clear_lidar_timestamp();
  static const int kLidarTimestampFieldNumber = 4;
  ::google::protobuf::uint64 lidar_timestamp() const;
  void set_lidar_timestamp(::google::protobuf::uint64 value);

  // optional uint64 camera_timestamp = 5;
  void clear_camera_timestamp();
  static const int kCameraTimestampFieldNumber = 5;
  ::google::protobuf::uint64 camera_timestamp() const;
  void set_camera_timestamp(::google::protobuf::uint64 value);

  // optional uint64 radar_timestamp = 6;
  void clear_radar_timestamp();
  static const int kRadarTimestampFieldNumber = 6;
  ::google::protobuf::uint64 radar_timestamp() const;
  void set_radar_timestamp(::google::protobuf::uint64 value);

  // optional uint32 version = 7;
  void clear_version();
  static const int kVersionFieldNumber = 7;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional .apollo.common.StatusPb status = 8;
  bool has_status() const;
  void clear_status();
  static const int kStatusFieldNumber = 8;
  const ::apollo::common::StatusPb& status() const;
  ::apollo::common::StatusPb* mutable_status();
  ::apollo::common::StatusPb* release_status();
  void set_allocated_status(::apollo::common::StatusPb* status);

  // @@protoc_insertion_point(class_scope:apollo.common.Header)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  double timestamp_sec_;
  ::google::protobuf::internal::ArenaStringPtr module_name_;
  ::google::protobuf::uint64 lidar_timestamp_;
  ::google::protobuf::uint64 camera_timestamp_;
  ::google::protobuf::uint32 sequence_num_;
  ::google::protobuf::uint32 version_;
  ::google::protobuf::uint64 radar_timestamp_;
  ::apollo::common::StatusPb* status_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_apollo_5fmsgs_2fproto_2fcommon_2fheader_2eproto();
  friend void protobuf_AssignDesc_apollo_5fmsgs_2fproto_2fcommon_2fheader_2eproto();
  friend void protobuf_ShutdownFile_apollo_5fmsgs_2fproto_2fcommon_2fheader_2eproto();

  void InitAsDefaultInstance();
  static Header* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Header

// optional double timestamp_sec = 1;
inline void Header::clear_timestamp_sec() {
  timestamp_sec_ = 0;
}
inline double Header::timestamp_sec() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.timestamp_sec)
  return timestamp_sec_;
}
inline void Header::set_timestamp_sec(double value) {
  
  timestamp_sec_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.Header.timestamp_sec)
}

// optional string module_name = 2;
inline void Header::clear_module_name() {
  module_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Header::module_name() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.module_name)
  return module_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Header::set_module_name(const ::std::string& value) {
  
  module_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.common.Header.module_name)
}
inline void Header::set_module_name(const char* value) {
  
  module_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.common.Header.module_name)
}
inline void Header::set_module_name(const char* value, size_t size) {
  
  module_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.common.Header.module_name)
}
inline ::std::string* Header::mutable_module_name() {
  
  // @@protoc_insertion_point(field_mutable:apollo.common.Header.module_name)
  return module_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Header::release_module_name() {
  // @@protoc_insertion_point(field_release:apollo.common.Header.module_name)
  
  return module_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Header::set_allocated_module_name(::std::string* module_name) {
  if (module_name != NULL) {
    
  } else {
    
  }
  module_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), module_name);
  // @@protoc_insertion_point(field_set_allocated:apollo.common.Header.module_name)
}

// optional uint32 sequence_num = 3;
inline void Header::clear_sequence_num() {
  sequence_num_ = 0u;
}
inline ::google::protobuf::uint32 Header::sequence_num() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.sequence_num)
  return sequence_num_;
}
inline void Header::set_sequence_num(::google::protobuf::uint32 value) {
  
  sequence_num_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.Header.sequence_num)
}

// optional uint64 lidar_timestamp = 4;
inline void Header::clear_lidar_timestamp() {
  lidar_timestamp_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Header::lidar_timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.lidar_timestamp)
  return lidar_timestamp_;
}
inline void Header::set_lidar_timestamp(::google::protobuf::uint64 value) {
  
  lidar_timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.Header.lidar_timestamp)
}

// optional uint64 camera_timestamp = 5;
inline void Header::clear_camera_timestamp() {
  camera_timestamp_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Header::camera_timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.camera_timestamp)
  return camera_timestamp_;
}
inline void Header::set_camera_timestamp(::google::protobuf::uint64 value) {
  
  camera_timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.Header.camera_timestamp)
}

// optional uint64 radar_timestamp = 6;
inline void Header::clear_radar_timestamp() {
  radar_timestamp_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Header::radar_timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.radar_timestamp)
  return radar_timestamp_;
}
inline void Header::set_radar_timestamp(::google::protobuf::uint64 value) {
  
  radar_timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.Header.radar_timestamp)
}

// optional uint32 version = 7;
inline void Header::clear_version() {
  version_ = 0u;
}
inline ::google::protobuf::uint32 Header::version() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.version)
  return version_;
}
inline void Header::set_version(::google::protobuf::uint32 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.Header.version)
}

// optional .apollo.common.StatusPb status = 8;
inline bool Header::has_status() const {
  return !_is_default_instance_ && status_ != NULL;
}
inline void Header::clear_status() {
  if (GetArenaNoVirtual() == NULL && status_ != NULL) delete status_;
  status_ = NULL;
}
inline const ::apollo::common::StatusPb& Header::status() const {
  // @@protoc_insertion_point(field_get:apollo.common.Header.status)
  return status_ != NULL ? *status_ : *default_instance_->status_;
}
inline ::apollo::common::StatusPb* Header::mutable_status() {
  
  if (status_ == NULL) {
    status_ = new ::apollo::common::StatusPb;
  }
  // @@protoc_insertion_point(field_mutable:apollo.common.Header.status)
  return status_;
}
inline ::apollo::common::StatusPb* Header::release_status() {
  // @@protoc_insertion_point(field_release:apollo.common.Header.status)
  
  ::apollo::common::StatusPb* temp = status_;
  status_ = NULL;
  return temp;
}
inline void Header::set_allocated_status(::apollo::common::StatusPb* status) {
  delete status_;
  status_ = status;
  if (status) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.common.Header.status)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace common
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_apollo_5fmsgs_2fproto_2fcommon_2fheader_2eproto__INCLUDED
