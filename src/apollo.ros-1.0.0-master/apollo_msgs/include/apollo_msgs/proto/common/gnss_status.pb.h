// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: apollo_msgs/proto/common/gnss_status.proto

#ifndef PROTOBUF_apollo_5fmsgs_2fproto_2fcommon_2fgnss_5fstatus_2eproto__INCLUDED
#define PROTOBUF_apollo_5fmsgs_2fproto_2fcommon_2fgnss_5fstatus_2eproto__INCLUDED

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
namespace common {
namespace gnss_status {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_apollo_5fmsgs_2fproto_2fcommon_2fgnss_5fstatus_2eproto();
void protobuf_AssignDesc_apollo_5fmsgs_2fproto_2fcommon_2fgnss_5fstatus_2eproto();
void protobuf_ShutdownFile_apollo_5fmsgs_2fproto_2fcommon_2fgnss_5fstatus_2eproto();

class GnssStatus;
class InsStatus;
class StreamStatus;

enum StreamStatus_Type {
  StreamStatus_Type_DISCONNECTED = 0,
  StreamStatus_Type_CONNECTED = 1,
  StreamStatus_Type_StreamStatus_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  StreamStatus_Type_StreamStatus_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool StreamStatus_Type_IsValid(int value);
const StreamStatus_Type StreamStatus_Type_Type_MIN = StreamStatus_Type_DISCONNECTED;
const StreamStatus_Type StreamStatus_Type_Type_MAX = StreamStatus_Type_CONNECTED;
const int StreamStatus_Type_Type_ARRAYSIZE = StreamStatus_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* StreamStatus_Type_descriptor();
inline const ::std::string& StreamStatus_Type_Name(StreamStatus_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    StreamStatus_Type_descriptor(), value);
}
inline bool StreamStatus_Type_Parse(
    const ::std::string& name, StreamStatus_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<StreamStatus_Type>(
    StreamStatus_Type_descriptor(), name, value);
}
enum InsStatus_Type {
  InsStatus_Type_INVALID = 0,
  InsStatus_Type_CONVERGING = 1,
  InsStatus_Type_GOOD = 2,
  InsStatus_Type_InsStatus_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  InsStatus_Type_InsStatus_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool InsStatus_Type_IsValid(int value);
const InsStatus_Type InsStatus_Type_Type_MIN = InsStatus_Type_INVALID;
const InsStatus_Type InsStatus_Type_Type_MAX = InsStatus_Type_GOOD;
const int InsStatus_Type_Type_ARRAYSIZE = InsStatus_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* InsStatus_Type_descriptor();
inline const ::std::string& InsStatus_Type_Name(InsStatus_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    InsStatus_Type_descriptor(), value);
}
inline bool InsStatus_Type_Parse(
    const ::std::string& name, InsStatus_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<InsStatus_Type>(
    InsStatus_Type_descriptor(), name, value);
}
// ===================================================================

class StreamStatus : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.common.gnss_status.StreamStatus) */ {
 public:
  StreamStatus();
  virtual ~StreamStatus();

  StreamStatus(const StreamStatus& from);

  inline StreamStatus& operator=(const StreamStatus& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const StreamStatus& default_instance();

  void Swap(StreamStatus* other);

  // implements Message ----------------------------------------------

  inline StreamStatus* New() const { return New(NULL); }

  StreamStatus* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StreamStatus& from);
  void MergeFrom(const StreamStatus& from);
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
  void InternalSwap(StreamStatus* other);
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

  typedef StreamStatus_Type Type;
  static const Type DISCONNECTED =
    StreamStatus_Type_DISCONNECTED;
  static const Type CONNECTED =
    StreamStatus_Type_CONNECTED;
  static inline bool Type_IsValid(int value) {
    return StreamStatus_Type_IsValid(value);
  }
  static const Type Type_MIN =
    StreamStatus_Type_Type_MIN;
  static const Type Type_MAX =
    StreamStatus_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    StreamStatus_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return StreamStatus_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return StreamStatus_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return StreamStatus_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .apollo.common.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::apollo::common::Header& header() const;
  ::apollo::common::Header* mutable_header();
  ::apollo::common::Header* release_header();
  void set_allocated_header(::apollo::common::Header* header);

  // optional .apollo.common.gnss_status.StreamStatus.Type ins_stream_type = 2;
  void clear_ins_stream_type();
  static const int kInsStreamTypeFieldNumber = 2;
  ::apollo::common::gnss_status::StreamStatus_Type ins_stream_type() const;
  void set_ins_stream_type(::apollo::common::gnss_status::StreamStatus_Type value);

  // optional .apollo.common.gnss_status.StreamStatus.Type rtk_stream_in_type = 3;
  void clear_rtk_stream_in_type();
  static const int kRtkStreamInTypeFieldNumber = 3;
  ::apollo::common::gnss_status::StreamStatus_Type rtk_stream_in_type() const;
  void set_rtk_stream_in_type(::apollo::common::gnss_status::StreamStatus_Type value);

  // optional .apollo.common.gnss_status.StreamStatus.Type rtk_stream_out_type = 4;
  void clear_rtk_stream_out_type();
  static const int kRtkStreamOutTypeFieldNumber = 4;
  ::apollo::common::gnss_status::StreamStatus_Type rtk_stream_out_type() const;
  void set_rtk_stream_out_type(::apollo::common::gnss_status::StreamStatus_Type value);

  // @@protoc_insertion_point(class_scope:apollo.common.gnss_status.StreamStatus)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::apollo::common::Header* header_;
  int ins_stream_type_;
  int rtk_stream_in_type_;
  int rtk_stream_out_type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_apollo_5fmsgs_2fproto_2fcommon_2fgnss_5fstatus_2eproto();
  friend void protobuf_AssignDesc_apollo_5fmsgs_2fproto_2fcommon_2fgnss_5fstatus_2eproto();
  friend void protobuf_ShutdownFile_apollo_5fmsgs_2fproto_2fcommon_2fgnss_5fstatus_2eproto();

  void InitAsDefaultInstance();
  static StreamStatus* default_instance_;
};
// -------------------------------------------------------------------

class InsStatus : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.common.gnss_status.InsStatus) */ {
 public:
  InsStatus();
  virtual ~InsStatus();

  InsStatus(const InsStatus& from);

  inline InsStatus& operator=(const InsStatus& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const InsStatus& default_instance();

  void Swap(InsStatus* other);

  // implements Message ----------------------------------------------

  inline InsStatus* New() const { return New(NULL); }

  InsStatus* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const InsStatus& from);
  void MergeFrom(const InsStatus& from);
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
  void InternalSwap(InsStatus* other);
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

  typedef InsStatus_Type Type;
  static const Type INVALID =
    InsStatus_Type_INVALID;
  static const Type CONVERGING =
    InsStatus_Type_CONVERGING;
  static const Type GOOD =
    InsStatus_Type_GOOD;
  static inline bool Type_IsValid(int value) {
    return InsStatus_Type_IsValid(value);
  }
  static const Type Type_MIN =
    InsStatus_Type_Type_MIN;
  static const Type Type_MAX =
    InsStatus_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    InsStatus_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return InsStatus_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return InsStatus_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return InsStatus_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .apollo.common.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::apollo::common::Header& header() const;
  ::apollo::common::Header* mutable_header();
  ::apollo::common::Header* release_header();
  void set_allocated_header(::apollo::common::Header* header);

  // optional .apollo.common.gnss_status.InsStatus.Type type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::apollo::common::gnss_status::InsStatus_Type type() const;
  void set_type(::apollo::common::gnss_status::InsStatus_Type value);

  // @@protoc_insertion_point(class_scope:apollo.common.gnss_status.InsStatus)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::apollo::common::Header* header_;
  int type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_apollo_5fmsgs_2fproto_2fcommon_2fgnss_5fstatus_2eproto();
  friend void protobuf_AssignDesc_apollo_5fmsgs_2fproto_2fcommon_2fgnss_5fstatus_2eproto();
  friend void protobuf_ShutdownFile_apollo_5fmsgs_2fproto_2fcommon_2fgnss_5fstatus_2eproto();

  void InitAsDefaultInstance();
  static InsStatus* default_instance_;
};
// -------------------------------------------------------------------

class GnssStatus : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.common.gnss_status.GnssStatus) */ {
 public:
  GnssStatus();
  virtual ~GnssStatus();

  GnssStatus(const GnssStatus& from);

  inline GnssStatus& operator=(const GnssStatus& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GnssStatus& default_instance();

  void Swap(GnssStatus* other);

  // implements Message ----------------------------------------------

  inline GnssStatus* New() const { return New(NULL); }

  GnssStatus* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GnssStatus& from);
  void MergeFrom(const GnssStatus& from);
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
  void InternalSwap(GnssStatus* other);
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

  // optional .apollo.common.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::apollo::common::Header& header() const;
  ::apollo::common::Header* mutable_header();
  ::apollo::common::Header* release_header();
  void set_allocated_header(::apollo::common::Header* header);

  // optional bool solution_completed = 2;
  void clear_solution_completed();
  static const int kSolutionCompletedFieldNumber = 2;
  bool solution_completed() const;
  void set_solution_completed(bool value);

  // optional uint32 solution_status = 3;
  void clear_solution_status();
  static const int kSolutionStatusFieldNumber = 3;
  ::google::protobuf::uint32 solution_status() const;
  void set_solution_status(::google::protobuf::uint32 value);

  // optional uint32 position_type = 4;
  void clear_position_type();
  static const int kPositionTypeFieldNumber = 4;
  ::google::protobuf::uint32 position_type() const;
  void set_position_type(::google::protobuf::uint32 value);

  // optional int32 num_sats = 5;
  void clear_num_sats();
  static const int kNumSatsFieldNumber = 5;
  ::google::protobuf::int32 num_sats() const;
  void set_num_sats(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:apollo.common.gnss_status.GnssStatus)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::apollo::common::Header* header_;
  bool solution_completed_;
  ::google::protobuf::uint32 solution_status_;
  ::google::protobuf::uint32 position_type_;
  ::google::protobuf::int32 num_sats_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_apollo_5fmsgs_2fproto_2fcommon_2fgnss_5fstatus_2eproto();
  friend void protobuf_AssignDesc_apollo_5fmsgs_2fproto_2fcommon_2fgnss_5fstatus_2eproto();
  friend void protobuf_ShutdownFile_apollo_5fmsgs_2fproto_2fcommon_2fgnss_5fstatus_2eproto();

  void InitAsDefaultInstance();
  static GnssStatus* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// StreamStatus

// optional .apollo.common.Header header = 1;
inline bool StreamStatus::has_header() const {
  return !_is_default_instance_ && header_ != NULL;
}
inline void StreamStatus::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
}
inline const ::apollo::common::Header& StreamStatus::header() const {
  // @@protoc_insertion_point(field_get:apollo.common.gnss_status.StreamStatus.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::apollo::common::Header* StreamStatus::mutable_header() {
  
  if (header_ == NULL) {
    header_ = new ::apollo::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:apollo.common.gnss_status.StreamStatus.header)
  return header_;
}
inline ::apollo::common::Header* StreamStatus::release_header() {
  // @@protoc_insertion_point(field_release:apollo.common.gnss_status.StreamStatus.header)
  
  ::apollo::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void StreamStatus::set_allocated_header(::apollo::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.common.gnss_status.StreamStatus.header)
}

// optional .apollo.common.gnss_status.StreamStatus.Type ins_stream_type = 2;
inline void StreamStatus::clear_ins_stream_type() {
  ins_stream_type_ = 0;
}
inline ::apollo::common::gnss_status::StreamStatus_Type StreamStatus::ins_stream_type() const {
  // @@protoc_insertion_point(field_get:apollo.common.gnss_status.StreamStatus.ins_stream_type)
  return static_cast< ::apollo::common::gnss_status::StreamStatus_Type >(ins_stream_type_);
}
inline void StreamStatus::set_ins_stream_type(::apollo::common::gnss_status::StreamStatus_Type value) {
  
  ins_stream_type_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.gnss_status.StreamStatus.ins_stream_type)
}

// optional .apollo.common.gnss_status.StreamStatus.Type rtk_stream_in_type = 3;
inline void StreamStatus::clear_rtk_stream_in_type() {
  rtk_stream_in_type_ = 0;
}
inline ::apollo::common::gnss_status::StreamStatus_Type StreamStatus::rtk_stream_in_type() const {
  // @@protoc_insertion_point(field_get:apollo.common.gnss_status.StreamStatus.rtk_stream_in_type)
  return static_cast< ::apollo::common::gnss_status::StreamStatus_Type >(rtk_stream_in_type_);
}
inline void StreamStatus::set_rtk_stream_in_type(::apollo::common::gnss_status::StreamStatus_Type value) {
  
  rtk_stream_in_type_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.gnss_status.StreamStatus.rtk_stream_in_type)
}

// optional .apollo.common.gnss_status.StreamStatus.Type rtk_stream_out_type = 4;
inline void StreamStatus::clear_rtk_stream_out_type() {
  rtk_stream_out_type_ = 0;
}
inline ::apollo::common::gnss_status::StreamStatus_Type StreamStatus::rtk_stream_out_type() const {
  // @@protoc_insertion_point(field_get:apollo.common.gnss_status.StreamStatus.rtk_stream_out_type)
  return static_cast< ::apollo::common::gnss_status::StreamStatus_Type >(rtk_stream_out_type_);
}
inline void StreamStatus::set_rtk_stream_out_type(::apollo::common::gnss_status::StreamStatus_Type value) {
  
  rtk_stream_out_type_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.gnss_status.StreamStatus.rtk_stream_out_type)
}

// -------------------------------------------------------------------

// InsStatus

// optional .apollo.common.Header header = 1;
inline bool InsStatus::has_header() const {
  return !_is_default_instance_ && header_ != NULL;
}
inline void InsStatus::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
}
inline const ::apollo::common::Header& InsStatus::header() const {
  // @@protoc_insertion_point(field_get:apollo.common.gnss_status.InsStatus.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::apollo::common::Header* InsStatus::mutable_header() {
  
  if (header_ == NULL) {
    header_ = new ::apollo::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:apollo.common.gnss_status.InsStatus.header)
  return header_;
}
inline ::apollo::common::Header* InsStatus::release_header() {
  // @@protoc_insertion_point(field_release:apollo.common.gnss_status.InsStatus.header)
  
  ::apollo::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void InsStatus::set_allocated_header(::apollo::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.common.gnss_status.InsStatus.header)
}

// optional .apollo.common.gnss_status.InsStatus.Type type = 2;
inline void InsStatus::clear_type() {
  type_ = 0;
}
inline ::apollo::common::gnss_status::InsStatus_Type InsStatus::type() const {
  // @@protoc_insertion_point(field_get:apollo.common.gnss_status.InsStatus.type)
  return static_cast< ::apollo::common::gnss_status::InsStatus_Type >(type_);
}
inline void InsStatus::set_type(::apollo::common::gnss_status::InsStatus_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.gnss_status.InsStatus.type)
}

// -------------------------------------------------------------------

// GnssStatus

// optional .apollo.common.Header header = 1;
inline bool GnssStatus::has_header() const {
  return !_is_default_instance_ && header_ != NULL;
}
inline void GnssStatus::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
}
inline const ::apollo::common::Header& GnssStatus::header() const {
  // @@protoc_insertion_point(field_get:apollo.common.gnss_status.GnssStatus.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::apollo::common::Header* GnssStatus::mutable_header() {
  
  if (header_ == NULL) {
    header_ = new ::apollo::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:apollo.common.gnss_status.GnssStatus.header)
  return header_;
}
inline ::apollo::common::Header* GnssStatus::release_header() {
  // @@protoc_insertion_point(field_release:apollo.common.gnss_status.GnssStatus.header)
  
  ::apollo::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void GnssStatus::set_allocated_header(::apollo::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.common.gnss_status.GnssStatus.header)
}

// optional bool solution_completed = 2;
inline void GnssStatus::clear_solution_completed() {
  solution_completed_ = false;
}
inline bool GnssStatus::solution_completed() const {
  // @@protoc_insertion_point(field_get:apollo.common.gnss_status.GnssStatus.solution_completed)
  return solution_completed_;
}
inline void GnssStatus::set_solution_completed(bool value) {
  
  solution_completed_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.gnss_status.GnssStatus.solution_completed)
}

// optional uint32 solution_status = 3;
inline void GnssStatus::clear_solution_status() {
  solution_status_ = 0u;
}
inline ::google::protobuf::uint32 GnssStatus::solution_status() const {
  // @@protoc_insertion_point(field_get:apollo.common.gnss_status.GnssStatus.solution_status)
  return solution_status_;
}
inline void GnssStatus::set_solution_status(::google::protobuf::uint32 value) {
  
  solution_status_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.gnss_status.GnssStatus.solution_status)
}

// optional uint32 position_type = 4;
inline void GnssStatus::clear_position_type() {
  position_type_ = 0u;
}
inline ::google::protobuf::uint32 GnssStatus::position_type() const {
  // @@protoc_insertion_point(field_get:apollo.common.gnss_status.GnssStatus.position_type)
  return position_type_;
}
inline void GnssStatus::set_position_type(::google::protobuf::uint32 value) {
  
  position_type_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.gnss_status.GnssStatus.position_type)
}

// optional int32 num_sats = 5;
inline void GnssStatus::clear_num_sats() {
  num_sats_ = 0;
}
inline ::google::protobuf::int32 GnssStatus::num_sats() const {
  // @@protoc_insertion_point(field_get:apollo.common.gnss_status.GnssStatus.num_sats)
  return num_sats_;
}
inline void GnssStatus::set_num_sats(::google::protobuf::int32 value) {
  
  num_sats_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.gnss_status.GnssStatus.num_sats)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace gnss_status
}  // namespace common
}  // namespace apollo

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::apollo::common::gnss_status::StreamStatus_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::common::gnss_status::StreamStatus_Type>() {
  return ::apollo::common::gnss_status::StreamStatus_Type_descriptor();
}
template <> struct is_proto_enum< ::apollo::common::gnss_status::InsStatus_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::common::gnss_status::InsStatus_Type>() {
  return ::apollo::common::gnss_status::InsStatus_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_apollo_5fmsgs_2fproto_2fcommon_2fgnss_5fstatus_2eproto__INCLUDED
