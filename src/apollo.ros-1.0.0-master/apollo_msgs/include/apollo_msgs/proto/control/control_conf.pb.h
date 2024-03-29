// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: apollo_msgs/proto/control/control_conf.proto

#ifndef PROTOBUF_apollo_5fmsgs_2fproto_2fcontrol_2fcontrol_5fconf_2eproto__INCLUDED
#define PROTOBUF_apollo_5fmsgs_2fproto_2fcontrol_2fcontrol_5fconf_2eproto__INCLUDED

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
#include "apollo_msgs/proto/canbus/chassis.pb.h"
#include "apollo_msgs/proto/control/pad_msg.pb.h"
#include "apollo_msgs/proto/control/lat_controller_conf.pb.h"
#include "apollo_msgs/proto/control/lon_controller_conf.pb.h"
// @@protoc_insertion_point(includes)

namespace apollo {
namespace control {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_apollo_5fmsgs_2fproto_2fcontrol_2fcontrol_5fconf_2eproto();
void protobuf_AssignDesc_apollo_5fmsgs_2fproto_2fcontrol_2fcontrol_5fconf_2eproto();
void protobuf_ShutdownFile_apollo_5fmsgs_2fproto_2fcontrol_2fcontrol_5fconf_2eproto();

class ControlConf;

enum ControlConf_ControllerType {
  ControlConf_ControllerType_LAT_CONTROLLER = 0,
  ControlConf_ControllerType_LON_CONTROLLER = 1,
  ControlConf_ControllerType_ControlConf_ControllerType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ControlConf_ControllerType_ControlConf_ControllerType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ControlConf_ControllerType_IsValid(int value);
const ControlConf_ControllerType ControlConf_ControllerType_ControllerType_MIN = ControlConf_ControllerType_LAT_CONTROLLER;
const ControlConf_ControllerType ControlConf_ControllerType_ControllerType_MAX = ControlConf_ControllerType_LON_CONTROLLER;
const int ControlConf_ControllerType_ControllerType_ARRAYSIZE = ControlConf_ControllerType_ControllerType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ControlConf_ControllerType_descriptor();
inline const ::std::string& ControlConf_ControllerType_Name(ControlConf_ControllerType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ControlConf_ControllerType_descriptor(), value);
}
inline bool ControlConf_ControllerType_Parse(
    const ::std::string& name, ControlConf_ControllerType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ControlConf_ControllerType>(
    ControlConf_ControllerType_descriptor(), name, value);
}
// ===================================================================

class ControlConf : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.control.ControlConf) */ {
 public:
  ControlConf();
  virtual ~ControlConf();

  ControlConf(const ControlConf& from);

  inline ControlConf& operator=(const ControlConf& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ControlConf& default_instance();

  void Swap(ControlConf* other);

  // implements Message ----------------------------------------------

  inline ControlConf* New() const { return New(NULL); }

  ControlConf* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ControlConf& from);
  void MergeFrom(const ControlConf& from);
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
  void InternalSwap(ControlConf* other);
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

  typedef ControlConf_ControllerType ControllerType;
  static const ControllerType LAT_CONTROLLER =
    ControlConf_ControllerType_LAT_CONTROLLER;
  static const ControllerType LON_CONTROLLER =
    ControlConf_ControllerType_LON_CONTROLLER;
  static inline bool ControllerType_IsValid(int value) {
    return ControlConf_ControllerType_IsValid(value);
  }
  static const ControllerType ControllerType_MIN =
    ControlConf_ControllerType_ControllerType_MIN;
  static const ControllerType ControllerType_MAX =
    ControlConf_ControllerType_ControllerType_MAX;
  static const int ControllerType_ARRAYSIZE =
    ControlConf_ControllerType_ControllerType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ControllerType_descriptor() {
    return ControlConf_ControllerType_descriptor();
  }
  static inline const ::std::string& ControllerType_Name(ControllerType value) {
    return ControlConf_ControllerType_Name(value);
  }
  static inline bool ControllerType_Parse(const ::std::string& name,
      ControllerType* value) {
    return ControlConf_ControllerType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional double control_period = 1;
  void clear_control_period();
  static const int kControlPeriodFieldNumber = 1;
  double control_period() const;
  void set_control_period(double value);

  // optional double max_planning_interval_sec = 2;
  void clear_max_planning_interval_sec();
  static const int kMaxPlanningIntervalSecFieldNumber = 2;
  double max_planning_interval_sec() const;
  void set_max_planning_interval_sec(double value);

  // optional double max_planning_delay_threshold = 3;
  void clear_max_planning_delay_threshold();
  static const int kMaxPlanningDelayThresholdFieldNumber = 3;
  double max_planning_delay_threshold() const;
  void set_max_planning_delay_threshold(double value);

  // optional .apollo.canbus.Chassis.DrivingMode driving_mode = 4;
  void clear_driving_mode();
  static const int kDrivingModeFieldNumber = 4;
  ::apollo::canbus::Chassis_DrivingMode driving_mode() const;
  void set_driving_mode(::apollo::canbus::Chassis_DrivingMode value);

  // optional .apollo.control.DrivingAction action = 5;
  void clear_action();
  static const int kActionFieldNumber = 5;
  ::apollo::control::DrivingAction action() const;
  void set_action(::apollo::control::DrivingAction value);

  // optional double soft_estop_brake = 6;
  void clear_soft_estop_brake();
  static const int kSoftEstopBrakeFieldNumber = 6;
  double soft_estop_brake() const;
  void set_soft_estop_brake(double value);

  // repeated .apollo.control.ControlConf.ControllerType active_controllers = 7;
  int active_controllers_size() const;
  void clear_active_controllers();
  static const int kActiveControllersFieldNumber = 7;
  ::apollo::control::ControlConf_ControllerType active_controllers(int index) const;
  void set_active_controllers(int index, ::apollo::control::ControlConf_ControllerType value);
  void add_active_controllers(::apollo::control::ControlConf_ControllerType value);
  const ::google::protobuf::RepeatedField<int>& active_controllers() const;
  ::google::protobuf::RepeatedField<int>* mutable_active_controllers();

  // optional int32 max_steering_percentage_allowed = 8;
  void clear_max_steering_percentage_allowed();
  static const int kMaxSteeringPercentageAllowedFieldNumber = 8;
  ::google::protobuf::int32 max_steering_percentage_allowed() const;
  void set_max_steering_percentage_allowed(::google::protobuf::int32 value);

  // optional double max_status_interval_sec = 9;
  void clear_max_status_interval_sec();
  static const int kMaxStatusIntervalSecFieldNumber = 9;
  double max_status_interval_sec() const;
  void set_max_status_interval_sec(double value);

  // optional .apollo.control.LatControllerConf lat_controller_conf = 10;
  bool has_lat_controller_conf() const;
  void clear_lat_controller_conf();
  static const int kLatControllerConfFieldNumber = 10;
  const ::apollo::control::LatControllerConf& lat_controller_conf() const;
  ::apollo::control::LatControllerConf* mutable_lat_controller_conf();
  ::apollo::control::LatControllerConf* release_lat_controller_conf();
  void set_allocated_lat_controller_conf(::apollo::control::LatControllerConf* lat_controller_conf);

  // optional .apollo.control.LonControllerConf lon_controller_conf = 11;
  bool has_lon_controller_conf() const;
  void clear_lon_controller_conf();
  static const int kLonControllerConfFieldNumber = 11;
  const ::apollo::control::LonControllerConf& lon_controller_conf() const;
  ::apollo::control::LonControllerConf* mutable_lon_controller_conf();
  ::apollo::control::LonControllerConf* release_lon_controller_conf();
  void set_allocated_lon_controller_conf(::apollo::control::LonControllerConf* lon_controller_conf);

  // optional double trajectory_period = 12;
  void clear_trajectory_period();
  static const int kTrajectoryPeriodFieldNumber = 12;
  double trajectory_period() const;
  void set_trajectory_period(double value);

  // optional double chassis_period = 13;
  void clear_chassis_period();
  static const int kChassisPeriodFieldNumber = 13;
  double chassis_period() const;
  void set_chassis_period(double value);

  // optional double localization_period = 14;
  void clear_localization_period();
  static const int kLocalizationPeriodFieldNumber = 14;
  double localization_period() const;
  void set_localization_period(double value);

  // @@protoc_insertion_point(class_scope:apollo.control.ControlConf)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  double control_period_;
  double max_planning_interval_sec_;
  double max_planning_delay_threshold_;
  int driving_mode_;
  int action_;
  double soft_estop_brake_;
  ::google::protobuf::RepeatedField<int> active_controllers_;
  mutable int _active_controllers_cached_byte_size_;
  double max_status_interval_sec_;
  ::apollo::control::LatControllerConf* lat_controller_conf_;
  ::apollo::control::LonControllerConf* lon_controller_conf_;
  double trajectory_period_;
  double chassis_period_;
  double localization_period_;
  ::google::protobuf::int32 max_steering_percentage_allowed_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_apollo_5fmsgs_2fproto_2fcontrol_2fcontrol_5fconf_2eproto();
  friend void protobuf_AssignDesc_apollo_5fmsgs_2fproto_2fcontrol_2fcontrol_5fconf_2eproto();
  friend void protobuf_ShutdownFile_apollo_5fmsgs_2fproto_2fcontrol_2fcontrol_5fconf_2eproto();

  void InitAsDefaultInstance();
  static ControlConf* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ControlConf

// optional double control_period = 1;
inline void ControlConf::clear_control_period() {
  control_period_ = 0;
}
inline double ControlConf::control_period() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.control_period)
  return control_period_;
}
inline void ControlConf::set_control_period(double value) {
  
  control_period_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.control_period)
}

// optional double max_planning_interval_sec = 2;
inline void ControlConf::clear_max_planning_interval_sec() {
  max_planning_interval_sec_ = 0;
}
inline double ControlConf::max_planning_interval_sec() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.max_planning_interval_sec)
  return max_planning_interval_sec_;
}
inline void ControlConf::set_max_planning_interval_sec(double value) {
  
  max_planning_interval_sec_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.max_planning_interval_sec)
}

// optional double max_planning_delay_threshold = 3;
inline void ControlConf::clear_max_planning_delay_threshold() {
  max_planning_delay_threshold_ = 0;
}
inline double ControlConf::max_planning_delay_threshold() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.max_planning_delay_threshold)
  return max_planning_delay_threshold_;
}
inline void ControlConf::set_max_planning_delay_threshold(double value) {
  
  max_planning_delay_threshold_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.max_planning_delay_threshold)
}

// optional .apollo.canbus.Chassis.DrivingMode driving_mode = 4;
inline void ControlConf::clear_driving_mode() {
  driving_mode_ = 0;
}
inline ::apollo::canbus::Chassis_DrivingMode ControlConf::driving_mode() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.driving_mode)
  return static_cast< ::apollo::canbus::Chassis_DrivingMode >(driving_mode_);
}
inline void ControlConf::set_driving_mode(::apollo::canbus::Chassis_DrivingMode value) {
  
  driving_mode_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.driving_mode)
}

// optional .apollo.control.DrivingAction action = 5;
inline void ControlConf::clear_action() {
  action_ = 0;
}
inline ::apollo::control::DrivingAction ControlConf::action() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.action)
  return static_cast< ::apollo::control::DrivingAction >(action_);
}
inline void ControlConf::set_action(::apollo::control::DrivingAction value) {
  
  action_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.action)
}

// optional double soft_estop_brake = 6;
inline void ControlConf::clear_soft_estop_brake() {
  soft_estop_brake_ = 0;
}
inline double ControlConf::soft_estop_brake() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.soft_estop_brake)
  return soft_estop_brake_;
}
inline void ControlConf::set_soft_estop_brake(double value) {
  
  soft_estop_brake_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.soft_estop_brake)
}

// repeated .apollo.control.ControlConf.ControllerType active_controllers = 7;
inline int ControlConf::active_controllers_size() const {
  return active_controllers_.size();
}
inline void ControlConf::clear_active_controllers() {
  active_controllers_.Clear();
}
inline ::apollo::control::ControlConf_ControllerType ControlConf::active_controllers(int index) const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.active_controllers)
  return static_cast< ::apollo::control::ControlConf_ControllerType >(active_controllers_.Get(index));
}
inline void ControlConf::set_active_controllers(int index, ::apollo::control::ControlConf_ControllerType value) {
  active_controllers_.Set(index, value);
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.active_controllers)
}
inline void ControlConf::add_active_controllers(::apollo::control::ControlConf_ControllerType value) {
  active_controllers_.Add(value);
  // @@protoc_insertion_point(field_add:apollo.control.ControlConf.active_controllers)
}
inline const ::google::protobuf::RepeatedField<int>&
ControlConf::active_controllers() const {
  // @@protoc_insertion_point(field_list:apollo.control.ControlConf.active_controllers)
  return active_controllers_;
}
inline ::google::protobuf::RepeatedField<int>*
ControlConf::mutable_active_controllers() {
  // @@protoc_insertion_point(field_mutable_list:apollo.control.ControlConf.active_controllers)
  return &active_controllers_;
}

// optional int32 max_steering_percentage_allowed = 8;
inline void ControlConf::clear_max_steering_percentage_allowed() {
  max_steering_percentage_allowed_ = 0;
}
inline ::google::protobuf::int32 ControlConf::max_steering_percentage_allowed() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.max_steering_percentage_allowed)
  return max_steering_percentage_allowed_;
}
inline void ControlConf::set_max_steering_percentage_allowed(::google::protobuf::int32 value) {
  
  max_steering_percentage_allowed_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.max_steering_percentage_allowed)
}

// optional double max_status_interval_sec = 9;
inline void ControlConf::clear_max_status_interval_sec() {
  max_status_interval_sec_ = 0;
}
inline double ControlConf::max_status_interval_sec() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.max_status_interval_sec)
  return max_status_interval_sec_;
}
inline void ControlConf::set_max_status_interval_sec(double value) {
  
  max_status_interval_sec_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.max_status_interval_sec)
}

// optional .apollo.control.LatControllerConf lat_controller_conf = 10;
inline bool ControlConf::has_lat_controller_conf() const {
  return !_is_default_instance_ && lat_controller_conf_ != NULL;
}
inline void ControlConf::clear_lat_controller_conf() {
  if (GetArenaNoVirtual() == NULL && lat_controller_conf_ != NULL) delete lat_controller_conf_;
  lat_controller_conf_ = NULL;
}
inline const ::apollo::control::LatControllerConf& ControlConf::lat_controller_conf() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.lat_controller_conf)
  return lat_controller_conf_ != NULL ? *lat_controller_conf_ : *default_instance_->lat_controller_conf_;
}
inline ::apollo::control::LatControllerConf* ControlConf::mutable_lat_controller_conf() {
  
  if (lat_controller_conf_ == NULL) {
    lat_controller_conf_ = new ::apollo::control::LatControllerConf;
  }
  // @@protoc_insertion_point(field_mutable:apollo.control.ControlConf.lat_controller_conf)
  return lat_controller_conf_;
}
inline ::apollo::control::LatControllerConf* ControlConf::release_lat_controller_conf() {
  // @@protoc_insertion_point(field_release:apollo.control.ControlConf.lat_controller_conf)
  
  ::apollo::control::LatControllerConf* temp = lat_controller_conf_;
  lat_controller_conf_ = NULL;
  return temp;
}
inline void ControlConf::set_allocated_lat_controller_conf(::apollo::control::LatControllerConf* lat_controller_conf) {
  delete lat_controller_conf_;
  lat_controller_conf_ = lat_controller_conf;
  if (lat_controller_conf) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.control.ControlConf.lat_controller_conf)
}

// optional .apollo.control.LonControllerConf lon_controller_conf = 11;
inline bool ControlConf::has_lon_controller_conf() const {
  return !_is_default_instance_ && lon_controller_conf_ != NULL;
}
inline void ControlConf::clear_lon_controller_conf() {
  if (GetArenaNoVirtual() == NULL && lon_controller_conf_ != NULL) delete lon_controller_conf_;
  lon_controller_conf_ = NULL;
}
inline const ::apollo::control::LonControllerConf& ControlConf::lon_controller_conf() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.lon_controller_conf)
  return lon_controller_conf_ != NULL ? *lon_controller_conf_ : *default_instance_->lon_controller_conf_;
}
inline ::apollo::control::LonControllerConf* ControlConf::mutable_lon_controller_conf() {
  
  if (lon_controller_conf_ == NULL) {
    lon_controller_conf_ = new ::apollo::control::LonControllerConf;
  }
  // @@protoc_insertion_point(field_mutable:apollo.control.ControlConf.lon_controller_conf)
  return lon_controller_conf_;
}
inline ::apollo::control::LonControllerConf* ControlConf::release_lon_controller_conf() {
  // @@protoc_insertion_point(field_release:apollo.control.ControlConf.lon_controller_conf)
  
  ::apollo::control::LonControllerConf* temp = lon_controller_conf_;
  lon_controller_conf_ = NULL;
  return temp;
}
inline void ControlConf::set_allocated_lon_controller_conf(::apollo::control::LonControllerConf* lon_controller_conf) {
  delete lon_controller_conf_;
  lon_controller_conf_ = lon_controller_conf;
  if (lon_controller_conf) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.control.ControlConf.lon_controller_conf)
}

// optional double trajectory_period = 12;
inline void ControlConf::clear_trajectory_period() {
  trajectory_period_ = 0;
}
inline double ControlConf::trajectory_period() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.trajectory_period)
  return trajectory_period_;
}
inline void ControlConf::set_trajectory_period(double value) {
  
  trajectory_period_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.trajectory_period)
}

// optional double chassis_period = 13;
inline void ControlConf::clear_chassis_period() {
  chassis_period_ = 0;
}
inline double ControlConf::chassis_period() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.chassis_period)
  return chassis_period_;
}
inline void ControlConf::set_chassis_period(double value) {
  
  chassis_period_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.chassis_period)
}

// optional double localization_period = 14;
inline void ControlConf::clear_localization_period() {
  localization_period_ = 0;
}
inline double ControlConf::localization_period() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.localization_period)
  return localization_period_;
}
inline void ControlConf::set_localization_period(double value) {
  
  localization_period_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.localization_period)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace control
}  // namespace apollo

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::apollo::control::ControlConf_ControllerType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::control::ControlConf_ControllerType>() {
  return ::apollo::control::ControlConf_ControllerType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_apollo_5fmsgs_2fproto_2fcontrol_2fcontrol_5fconf_2eproto__INCLUDED
