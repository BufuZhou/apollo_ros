// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: apollo_msgs/proto/common/monitor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "apollo_msgs/proto/common/monitor.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace apollo {
namespace common {
namespace monitor {

namespace {

const ::google::protobuf::Descriptor* MonitorMessageItem_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MonitorMessageItem_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* MonitorMessageItem_MessageSource_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* MonitorMessageItem_LogLevel_descriptor_ = NULL;
const ::google::protobuf::Descriptor* MonitorMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MonitorMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_apollo_5fmsgs_2fproto_2fcommon_2fmonitor_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_apollo_5fmsgs_2fproto_2fcommon_2fmonitor_2eproto() {
  protobuf_AddDesc_apollo_5fmsgs_2fproto_2fcommon_2fmonitor_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "apollo_msgs/proto/common/monitor.proto");
  GOOGLE_CHECK(file != NULL);
  MonitorMessageItem_descriptor_ = file->message_type(0);
  static const int MonitorMessageItem_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonitorMessageItem, source_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonitorMessageItem, msg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonitorMessageItem, log_level_),
  };
  MonitorMessageItem_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      MonitorMessageItem_descriptor_,
      MonitorMessageItem::default_instance_,
      MonitorMessageItem_offsets_,
      -1,
      -1,
      -1,
      sizeof(MonitorMessageItem),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonitorMessageItem, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonitorMessageItem, _is_default_instance_));
  MonitorMessageItem_MessageSource_descriptor_ = MonitorMessageItem_descriptor_->enum_type(0);
  MonitorMessageItem_LogLevel_descriptor_ = MonitorMessageItem_descriptor_->enum_type(1);
  MonitorMessage_descriptor_ = file->message_type(1);
  static const int MonitorMessage_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonitorMessage, header_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonitorMessage, item_),
  };
  MonitorMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      MonitorMessage_descriptor_,
      MonitorMessage::default_instance_,
      MonitorMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(MonitorMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonitorMessage, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonitorMessage, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_apollo_5fmsgs_2fproto_2fcommon_2fmonitor_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MonitorMessageItem_descriptor_, &MonitorMessageItem::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MonitorMessage_descriptor_, &MonitorMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_apollo_5fmsgs_2fproto_2fcommon_2fmonitor_2eproto() {
  delete MonitorMessageItem::default_instance_;
  delete MonitorMessageItem_reflection_;
  delete MonitorMessage::default_instance_;
  delete MonitorMessage_reflection_;
}

void protobuf_AddDesc_apollo_5fmsgs_2fproto_2fcommon_2fmonitor_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_apollo_5fmsgs_2fproto_2fcommon_2fmonitor_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::apollo::common::protobuf_AddDesc_apollo_5fmsgs_2fproto_2fcommon_2fheader_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n&apollo_msgs/proto/common/monitor.proto"
    "\022\025apollo.common.monitor\032%apollo_msgs/pro"
    "to/common/header.proto\"\367\002\n\022MonitorMessag"
    "eItem\022G\n\006source\030\001 \001(\01627.apollo.common.mo"
    "nitor.MonitorMessageItem.MessageSource\022\013"
    "\n\003msg\030\002 \001(\t\022E\n\tlog_level\030\003 \001(\01622.apollo."
    "common.monitor.MonitorMessageItem.LogLev"
    "el\"\215\001\n\rMessageSource\022\013\n\007UNKNOWN\020\000\022\n\n\006CAN"
    "BUS\020\001\022\013\n\007CONTROL\020\002\022\014\n\010DECISION\020\003\022\020\n\014LOCA"
    "LIZATION\020\004\022\014\n\010PLANNING\020\005\022\016\n\nPREDICTION\020\006"
    "\022\r\n\tSIMULATOR\020\007\022\t\n\005HWSYS\020\010\"4\n\010LogLevel\022\010"
    "\n\004INFO\020\000\022\010\n\004WARN\020\001\022\t\n\005ERROR\020\002\022\t\n\005FATAL\020\003"
    "\"p\n\016MonitorMessage\022%\n\006header\030\001 \001(\0132\025.apo"
    "llo.common.Header\0227\n\004item\030\002 \003(\0132).apollo"
    ".common.monitor.MonitorMessageItemb\006prot"
    "o3", 602);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "apollo_msgs/proto/common/monitor.proto", &protobuf_RegisterTypes);
  MonitorMessageItem::default_instance_ = new MonitorMessageItem();
  MonitorMessage::default_instance_ = new MonitorMessage();
  MonitorMessageItem::default_instance_->InitAsDefaultInstance();
  MonitorMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_apollo_5fmsgs_2fproto_2fcommon_2fmonitor_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_apollo_5fmsgs_2fproto_2fcommon_2fmonitor_2eproto {
  StaticDescriptorInitializer_apollo_5fmsgs_2fproto_2fcommon_2fmonitor_2eproto() {
    protobuf_AddDesc_apollo_5fmsgs_2fproto_2fcommon_2fmonitor_2eproto();
  }
} static_descriptor_initializer_apollo_5fmsgs_2fproto_2fcommon_2fmonitor_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* MonitorMessageItem_MessageSource_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MonitorMessageItem_MessageSource_descriptor_;
}
bool MonitorMessageItem_MessageSource_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const MonitorMessageItem_MessageSource MonitorMessageItem::UNKNOWN;
const MonitorMessageItem_MessageSource MonitorMessageItem::CANBUS;
const MonitorMessageItem_MessageSource MonitorMessageItem::CONTROL;
const MonitorMessageItem_MessageSource MonitorMessageItem::DECISION;
const MonitorMessageItem_MessageSource MonitorMessageItem::LOCALIZATION;
const MonitorMessageItem_MessageSource MonitorMessageItem::PLANNING;
const MonitorMessageItem_MessageSource MonitorMessageItem::PREDICTION;
const MonitorMessageItem_MessageSource MonitorMessageItem::SIMULATOR;
const MonitorMessageItem_MessageSource MonitorMessageItem::HWSYS;
const MonitorMessageItem_MessageSource MonitorMessageItem::MessageSource_MIN;
const MonitorMessageItem_MessageSource MonitorMessageItem::MessageSource_MAX;
const int MonitorMessageItem::MessageSource_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* MonitorMessageItem_LogLevel_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MonitorMessageItem_LogLevel_descriptor_;
}
bool MonitorMessageItem_LogLevel_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const MonitorMessageItem_LogLevel MonitorMessageItem::INFO;
const MonitorMessageItem_LogLevel MonitorMessageItem::WARN;
const MonitorMessageItem_LogLevel MonitorMessageItem::ERROR;
const MonitorMessageItem_LogLevel MonitorMessageItem::FATAL;
const MonitorMessageItem_LogLevel MonitorMessageItem::LogLevel_MIN;
const MonitorMessageItem_LogLevel MonitorMessageItem::LogLevel_MAX;
const int MonitorMessageItem::LogLevel_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MonitorMessageItem::kSourceFieldNumber;
const int MonitorMessageItem::kMsgFieldNumber;
const int MonitorMessageItem::kLogLevelFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MonitorMessageItem::MonitorMessageItem()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.common.monitor.MonitorMessageItem)
}

void MonitorMessageItem::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

MonitorMessageItem::MonitorMessageItem(const MonitorMessageItem& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.common.monitor.MonitorMessageItem)
}

void MonitorMessageItem::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  source_ = 0;
  msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  log_level_ = 0;
}

MonitorMessageItem::~MonitorMessageItem() {
  // @@protoc_insertion_point(destructor:apollo.common.monitor.MonitorMessageItem)
  SharedDtor();
}

void MonitorMessageItem::SharedDtor() {
  msg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void MonitorMessageItem::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MonitorMessageItem::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MonitorMessageItem_descriptor_;
}

const MonitorMessageItem& MonitorMessageItem::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_apollo_5fmsgs_2fproto_2fcommon_2fmonitor_2eproto();
  return *default_instance_;
}

MonitorMessageItem* MonitorMessageItem::default_instance_ = NULL;

MonitorMessageItem* MonitorMessageItem::New(::google::protobuf::Arena* arena) const {
  MonitorMessageItem* n = new MonitorMessageItem;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MonitorMessageItem::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.common.monitor.MonitorMessageItem)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(MonitorMessageItem, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<MonitorMessageItem*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(source_, log_level_);
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool MonitorMessageItem::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.common.monitor.MonitorMessageItem)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.common.monitor.MonitorMessageItem.MessageSource source = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_source(static_cast< ::apollo::common::monitor::MonitorMessageItem_MessageSource >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_msg;
        break;
      }

      // optional string msg = 2;
      case 2: {
        if (tag == 18) {
         parse_msg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->msg().data(), this->msg().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "apollo.common.monitor.MonitorMessageItem.msg"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_log_level;
        break;
      }

      // optional .apollo.common.monitor.MonitorMessageItem.LogLevel log_level = 3;
      case 3: {
        if (tag == 24) {
         parse_log_level:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_log_level(static_cast< ::apollo::common::monitor::MonitorMessageItem_LogLevel >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.common.monitor.MonitorMessageItem)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.common.monitor.MonitorMessageItem)
  return false;
#undef DO_
}

void MonitorMessageItem::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.common.monitor.MonitorMessageItem)
  // optional .apollo.common.monitor.MonitorMessageItem.MessageSource source = 1;
  if (this->source() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->source(), output);
  }

  // optional string msg = 2;
  if (this->msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "apollo.common.monitor.MonitorMessageItem.msg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->msg(), output);
  }

  // optional .apollo.common.monitor.MonitorMessageItem.LogLevel log_level = 3;
  if (this->log_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->log_level(), output);
  }

  // @@protoc_insertion_point(serialize_end:apollo.common.monitor.MonitorMessageItem)
}

::google::protobuf::uint8* MonitorMessageItem::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.common.monitor.MonitorMessageItem)
  // optional .apollo.common.monitor.MonitorMessageItem.MessageSource source = 1;
  if (this->source() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->source(), target);
  }

  // optional string msg = 2;
  if (this->msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "apollo.common.monitor.MonitorMessageItem.msg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->msg(), target);
  }

  // optional .apollo.common.monitor.MonitorMessageItem.LogLevel log_level = 3;
  if (this->log_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->log_level(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:apollo.common.monitor.MonitorMessageItem)
  return target;
}

int MonitorMessageItem::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.common.monitor.MonitorMessageItem)
  int total_size = 0;

  // optional .apollo.common.monitor.MonitorMessageItem.MessageSource source = 1;
  if (this->source() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->source());
  }

  // optional string msg = 2;
  if (this->msg().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msg());
  }

  // optional .apollo.common.monitor.MonitorMessageItem.LogLevel log_level = 3;
  if (this->log_level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->log_level());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MonitorMessageItem::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.common.monitor.MonitorMessageItem)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const MonitorMessageItem* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const MonitorMessageItem>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.common.monitor.MonitorMessageItem)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.common.monitor.MonitorMessageItem)
    MergeFrom(*source);
  }
}

void MonitorMessageItem::MergeFrom(const MonitorMessageItem& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.common.monitor.MonitorMessageItem)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.source() != 0) {
    set_source(from.source());
  }
  if (from.msg().size() > 0) {

    msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  if (from.log_level() != 0) {
    set_log_level(from.log_level());
  }
}

void MonitorMessageItem::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.common.monitor.MonitorMessageItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MonitorMessageItem::CopyFrom(const MonitorMessageItem& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.common.monitor.MonitorMessageItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MonitorMessageItem::IsInitialized() const {

  return true;
}

void MonitorMessageItem::Swap(MonitorMessageItem* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MonitorMessageItem::InternalSwap(MonitorMessageItem* other) {
  std::swap(source_, other->source_);
  msg_.Swap(&other->msg_);
  std::swap(log_level_, other->log_level_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MonitorMessageItem::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MonitorMessageItem_descriptor_;
  metadata.reflection = MonitorMessageItem_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MonitorMessageItem

// optional .apollo.common.monitor.MonitorMessageItem.MessageSource source = 1;
void MonitorMessageItem::clear_source() {
  source_ = 0;
}
 ::apollo::common::monitor::MonitorMessageItem_MessageSource MonitorMessageItem::source() const {
  // @@protoc_insertion_point(field_get:apollo.common.monitor.MonitorMessageItem.source)
  return static_cast< ::apollo::common::monitor::MonitorMessageItem_MessageSource >(source_);
}
 void MonitorMessageItem::set_source(::apollo::common::monitor::MonitorMessageItem_MessageSource value) {
  
  source_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.monitor.MonitorMessageItem.source)
}

// optional string msg = 2;
void MonitorMessageItem::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& MonitorMessageItem::msg() const {
  // @@protoc_insertion_point(field_get:apollo.common.monitor.MonitorMessageItem.msg)
  return msg_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MonitorMessageItem::set_msg(const ::std::string& value) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.common.monitor.MonitorMessageItem.msg)
}
 void MonitorMessageItem::set_msg(const char* value) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.common.monitor.MonitorMessageItem.msg)
}
 void MonitorMessageItem::set_msg(const char* value, size_t size) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.common.monitor.MonitorMessageItem.msg)
}
 ::std::string* MonitorMessageItem::mutable_msg() {
  
  // @@protoc_insertion_point(field_mutable:apollo.common.monitor.MonitorMessageItem.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* MonitorMessageItem::release_msg() {
  // @@protoc_insertion_point(field_release:apollo.common.monitor.MonitorMessageItem.msg)
  
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MonitorMessageItem::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:apollo.common.monitor.MonitorMessageItem.msg)
}

// optional .apollo.common.monitor.MonitorMessageItem.LogLevel log_level = 3;
void MonitorMessageItem::clear_log_level() {
  log_level_ = 0;
}
 ::apollo::common::monitor::MonitorMessageItem_LogLevel MonitorMessageItem::log_level() const {
  // @@protoc_insertion_point(field_get:apollo.common.monitor.MonitorMessageItem.log_level)
  return static_cast< ::apollo::common::monitor::MonitorMessageItem_LogLevel >(log_level_);
}
 void MonitorMessageItem::set_log_level(::apollo::common::monitor::MonitorMessageItem_LogLevel value) {
  
  log_level_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.monitor.MonitorMessageItem.log_level)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MonitorMessage::kHeaderFieldNumber;
const int MonitorMessage::kItemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MonitorMessage::MonitorMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.common.monitor.MonitorMessage)
}

void MonitorMessage::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  header_ = const_cast< ::apollo::common::Header*>(&::apollo::common::Header::default_instance());
}

MonitorMessage::MonitorMessage(const MonitorMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.common.monitor.MonitorMessage)
}

void MonitorMessage::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  header_ = NULL;
}

MonitorMessage::~MonitorMessage() {
  // @@protoc_insertion_point(destructor:apollo.common.monitor.MonitorMessage)
  SharedDtor();
}

void MonitorMessage::SharedDtor() {
  if (this != default_instance_) {
    delete header_;
  }
}

void MonitorMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MonitorMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MonitorMessage_descriptor_;
}

const MonitorMessage& MonitorMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_apollo_5fmsgs_2fproto_2fcommon_2fmonitor_2eproto();
  return *default_instance_;
}

MonitorMessage* MonitorMessage::default_instance_ = NULL;

MonitorMessage* MonitorMessage::New(::google::protobuf::Arena* arena) const {
  MonitorMessage* n = new MonitorMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MonitorMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.common.monitor.MonitorMessage)
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
  item_.Clear();
}

bool MonitorMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.common.monitor.MonitorMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.common.Header header = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_item;
        break;
      }

      // repeated .apollo.common.monitor.MonitorMessageItem item = 2;
      case 2: {
        if (tag == 18) {
         parse_item:
          DO_(input->IncrementRecursionDepth());
         parse_loop_item:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_item()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_item;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.common.monitor.MonitorMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.common.monitor.MonitorMessage)
  return false;
#undef DO_
}

void MonitorMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.common.monitor.MonitorMessage)
  // optional .apollo.common.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->header_, output);
  }

  // repeated .apollo.common.monitor.MonitorMessageItem item = 2;
  for (unsigned int i = 0, n = this->item_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->item(i), output);
  }

  // @@protoc_insertion_point(serialize_end:apollo.common.monitor.MonitorMessage)
}

::google::protobuf::uint8* MonitorMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.common.monitor.MonitorMessage)
  // optional .apollo.common.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->header_, false, target);
  }

  // repeated .apollo.common.monitor.MonitorMessageItem item = 2;
  for (unsigned int i = 0, n = this->item_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->item(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:apollo.common.monitor.MonitorMessage)
  return target;
}

int MonitorMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.common.monitor.MonitorMessage)
  int total_size = 0;

  // optional .apollo.common.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->header_);
  }

  // repeated .apollo.common.monitor.MonitorMessageItem item = 2;
  total_size += 1 * this->item_size();
  for (int i = 0; i < this->item_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->item(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MonitorMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.common.monitor.MonitorMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const MonitorMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const MonitorMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.common.monitor.MonitorMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.common.monitor.MonitorMessage)
    MergeFrom(*source);
  }
}

void MonitorMessage::MergeFrom(const MonitorMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.common.monitor.MonitorMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  item_.MergeFrom(from.item_);
  if (from.has_header()) {
    mutable_header()->::apollo::common::Header::MergeFrom(from.header());
  }
}

void MonitorMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.common.monitor.MonitorMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MonitorMessage::CopyFrom(const MonitorMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.common.monitor.MonitorMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MonitorMessage::IsInitialized() const {

  return true;
}

void MonitorMessage::Swap(MonitorMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MonitorMessage::InternalSwap(MonitorMessage* other) {
  std::swap(header_, other->header_);
  item_.UnsafeArenaSwap(&other->item_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MonitorMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MonitorMessage_descriptor_;
  metadata.reflection = MonitorMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MonitorMessage

// optional .apollo.common.Header header = 1;
bool MonitorMessage::has_header() const {
  return !_is_default_instance_ && header_ != NULL;
}
void MonitorMessage::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
}
const ::apollo::common::Header& MonitorMessage::header() const {
  // @@protoc_insertion_point(field_get:apollo.common.monitor.MonitorMessage.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
::apollo::common::Header* MonitorMessage::mutable_header() {
  
  if (header_ == NULL) {
    header_ = new ::apollo::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:apollo.common.monitor.MonitorMessage.header)
  return header_;
}
::apollo::common::Header* MonitorMessage::release_header() {
  // @@protoc_insertion_point(field_release:apollo.common.monitor.MonitorMessage.header)
  
  ::apollo::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
void MonitorMessage::set_allocated_header(::apollo::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.common.monitor.MonitorMessage.header)
}

// repeated .apollo.common.monitor.MonitorMessageItem item = 2;
int MonitorMessage::item_size() const {
  return item_.size();
}
void MonitorMessage::clear_item() {
  item_.Clear();
}
const ::apollo::common::monitor::MonitorMessageItem& MonitorMessage::item(int index) const {
  // @@protoc_insertion_point(field_get:apollo.common.monitor.MonitorMessage.item)
  return item_.Get(index);
}
::apollo::common::monitor::MonitorMessageItem* MonitorMessage::mutable_item(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.common.monitor.MonitorMessage.item)
  return item_.Mutable(index);
}
::apollo::common::monitor::MonitorMessageItem* MonitorMessage::add_item() {
  // @@protoc_insertion_point(field_add:apollo.common.monitor.MonitorMessage.item)
  return item_.Add();
}
::google::protobuf::RepeatedPtrField< ::apollo::common::monitor::MonitorMessageItem >*
MonitorMessage::mutable_item() {
  // @@protoc_insertion_point(field_mutable_list:apollo.common.monitor.MonitorMessage.item)
  return &item_;
}
const ::google::protobuf::RepeatedPtrField< ::apollo::common::monitor::MonitorMessageItem >&
MonitorMessage::item() const {
  // @@protoc_insertion_point(field_list:apollo.common.monitor.MonitorMessage.item)
  return item_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace monitor
}  // namespace common
}  // namespace apollo

// @@protoc_insertion_point(global_scope)
