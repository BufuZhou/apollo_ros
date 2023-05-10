// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: apollo_msgs/proto/control/pad_msg.proto

#include "apollo_msgs/proto/control/pad_msg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_apollo_5fmsgs_2fproto_2fcommon_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_apollo_5fmsgs_2fproto_2fcommon_2fheader_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Header;
}  // namespace protobuf_apollo_5fmsgs_2fproto_2fcommon_2fheader_2eproto
namespace apollo {
namespace control {
class PadMessageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PadMessage>
      _instance;
} _PadMessage_default_instance_;
}  // namespace control
}  // namespace apollo
namespace protobuf_apollo_5fmsgs_2fproto_2fcontrol_2fpad_5fmsg_2eproto {
static void InitDefaultsPadMessage() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::control::_PadMessage_default_instance_;
    new (ptr) ::apollo::control::PadMessage();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::control::PadMessage::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_PadMessage =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsPadMessage}, {
      &protobuf_apollo_5fmsgs_2fproto_2fcommon_2fheader_2eproto::scc_info_Header.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_PadMessage.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::control::PadMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::control::PadMessage, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::control::PadMessage, driving_mode_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::control::PadMessage, action_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::apollo::control::PadMessage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::apollo::control::_PadMessage_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "apollo_msgs/proto/control/pad_msg.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\'apollo_msgs/proto/control/pad_msg.prot"
      "o\022\016apollo.control\032%apollo_msgs/proto/com"
      "mon/header.proto\032&apollo_msgs/proto/canb"
      "us/chassis.proto\"\234\001\n\nPadMessage\022%\n\006heade"
      "r\030\001 \001(\0132\025.apollo.common.Header\0228\n\014drivin"
      "g_mode\030\002 \001(\0162\".apollo.canbus.Chassis.Dri"
      "vingMode\022-\n\006action\030\003 \001(\0162\035.apollo.contro"
      "l.DrivingAction*/\n\rDrivingAction\022\010\n\004STOP"
      "\020\000\022\t\n\005START\020\001\022\t\n\005RESET\020\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 352);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "apollo_msgs/proto/control/pad_msg.proto", &protobuf_RegisterTypes);
  ::protobuf_apollo_5fmsgs_2fproto_2fcommon_2fheader_2eproto::AddDescriptors();
  ::protobuf_apollo_5fmsgs_2fproto_2fcanbus_2fchassis_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_apollo_5fmsgs_2fproto_2fcontrol_2fpad_5fmsg_2eproto
namespace apollo {
namespace control {
const ::google::protobuf::EnumDescriptor* DrivingAction_descriptor() {
  protobuf_apollo_5fmsgs_2fproto_2fcontrol_2fpad_5fmsg_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_apollo_5fmsgs_2fproto_2fcontrol_2fpad_5fmsg_2eproto::file_level_enum_descriptors[0];
}
bool DrivingAction_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void PadMessage::InitAsDefaultInstance() {
  ::apollo::control::_PadMessage_default_instance_._instance.get_mutable()->header_ = const_cast< ::apollo::common::Header*>(
      ::apollo::common::Header::internal_default_instance());
}
void PadMessage::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PadMessage::kHeaderFieldNumber;
const int PadMessage::kDrivingModeFieldNumber;
const int PadMessage::kActionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PadMessage::PadMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_apollo_5fmsgs_2fproto_2fcontrol_2fpad_5fmsg_2eproto::scc_info_PadMessage.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.control.PadMessage)
}
PadMessage::PadMessage(const PadMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::apollo::common::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  ::memcpy(&driving_mode_, &from.driving_mode_,
    static_cast<size_t>(reinterpret_cast<char*>(&action_) -
    reinterpret_cast<char*>(&driving_mode_)) + sizeof(action_));
  // @@protoc_insertion_point(copy_constructor:apollo.control.PadMessage)
}

void PadMessage::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&action_) -
      reinterpret_cast<char*>(&header_)) + sizeof(action_));
}

PadMessage::~PadMessage() {
  // @@protoc_insertion_point(destructor:apollo.control.PadMessage)
  SharedDtor();
}

void PadMessage::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
}

void PadMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* PadMessage::descriptor() {
  ::protobuf_apollo_5fmsgs_2fproto_2fcontrol_2fpad_5fmsg_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_apollo_5fmsgs_2fproto_2fcontrol_2fpad_5fmsg_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PadMessage& PadMessage::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_apollo_5fmsgs_2fproto_2fcontrol_2fpad_5fmsg_2eproto::scc_info_PadMessage.base);
  return *internal_default_instance();
}


void PadMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.control.PadMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  ::memset(&driving_mode_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&action_) -
      reinterpret_cast<char*>(&driving_mode_)) + sizeof(action_));
  _internal_metadata_.Clear();
}

bool PadMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.control.PadMessage)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .apollo.common.Header header = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .apollo.canbus.Chassis.DrivingMode driving_mode = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_driving_mode(static_cast< ::apollo::canbus::Chassis_DrivingMode >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .apollo.control.DrivingAction action = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_action(static_cast< ::apollo::control::DrivingAction >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.control.PadMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.control.PadMessage)
  return false;
#undef DO_
}

void PadMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.control.PadMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .apollo.common.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .apollo.canbus.Chassis.DrivingMode driving_mode = 2;
  if (this->driving_mode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->driving_mode(), output);
  }

  // .apollo.control.DrivingAction action = 3;
  if (this->action() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->action(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.control.PadMessage)
}

::google::protobuf::uint8* PadMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:apollo.control.PadMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .apollo.common.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .apollo.canbus.Chassis.DrivingMode driving_mode = 2;
  if (this->driving_mode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->driving_mode(), target);
  }

  // .apollo.control.DrivingAction action = 3;
  if (this->action() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->action(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.control.PadMessage)
  return target;
}

size_t PadMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.control.PadMessage)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .apollo.common.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .apollo.canbus.Chassis.DrivingMode driving_mode = 2;
  if (this->driving_mode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->driving_mode());
  }

  // .apollo.control.DrivingAction action = 3;
  if (this->action() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->action());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PadMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.control.PadMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const PadMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PadMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.control.PadMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.control.PadMessage)
    MergeFrom(*source);
  }
}

void PadMessage::MergeFrom(const PadMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.control.PadMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::apollo::common::Header::MergeFrom(from.header());
  }
  if (from.driving_mode() != 0) {
    set_driving_mode(from.driving_mode());
  }
  if (from.action() != 0) {
    set_action(from.action());
  }
}

void PadMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.control.PadMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PadMessage::CopyFrom(const PadMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.control.PadMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PadMessage::IsInitialized() const {
  return true;
}

void PadMessage::Swap(PadMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PadMessage::InternalSwap(PadMessage* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(driving_mode_, other->driving_mode_);
  swap(action_, other->action_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata PadMessage::GetMetadata() const {
  protobuf_apollo_5fmsgs_2fproto_2fcontrol_2fpad_5fmsg_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_apollo_5fmsgs_2fproto_2fcontrol_2fpad_5fmsg_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace control
}  // namespace apollo
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::apollo::control::PadMessage* Arena::CreateMaybeMessage< ::apollo::control::PadMessage >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::control::PadMessage >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
