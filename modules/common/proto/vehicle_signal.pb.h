// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/common/proto/vehicle_signal.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto;
namespace apollo {
namespace common {
class VehicleSignal;
struct VehicleSignalDefaultTypeInternal;
extern VehicleSignalDefaultTypeInternal _VehicleSignal_default_instance_;
}  // namespace common
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::common::VehicleSignal* Arena::CreateMaybeMessage<::apollo::common::VehicleSignal>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace common {

enum VehicleSignal_TurnSignal : int {
  VehicleSignal_TurnSignal_TURN_NONE = 0,
  VehicleSignal_TurnSignal_TURN_LEFT = 1,
  VehicleSignal_TurnSignal_TURN_RIGHT = 2
};
bool VehicleSignal_TurnSignal_IsValid(int value);
constexpr VehicleSignal_TurnSignal VehicleSignal_TurnSignal_TurnSignal_MIN = VehicleSignal_TurnSignal_TURN_NONE;
constexpr VehicleSignal_TurnSignal VehicleSignal_TurnSignal_TurnSignal_MAX = VehicleSignal_TurnSignal_TURN_RIGHT;
constexpr int VehicleSignal_TurnSignal_TurnSignal_ARRAYSIZE = VehicleSignal_TurnSignal_TurnSignal_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* VehicleSignal_TurnSignal_descriptor();
template<typename T>
inline const std::string& VehicleSignal_TurnSignal_Name(T enum_t_value) {
  static_assert(::std::is_same<T, VehicleSignal_TurnSignal>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function VehicleSignal_TurnSignal_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    VehicleSignal_TurnSignal_descriptor(), enum_t_value);
}
inline bool VehicleSignal_TurnSignal_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, VehicleSignal_TurnSignal* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<VehicleSignal_TurnSignal>(
    VehicleSignal_TurnSignal_descriptor(), name, value);
}
// ===================================================================

class VehicleSignal PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.common.VehicleSignal) */ {
 public:
  inline VehicleSignal() : VehicleSignal(nullptr) {}
  virtual ~VehicleSignal();
  explicit constexpr VehicleSignal(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  VehicleSignal(const VehicleSignal& from);
  VehicleSignal(VehicleSignal&& from) noexcept
    : VehicleSignal() {
    *this = ::std::move(from);
  }

  inline VehicleSignal& operator=(const VehicleSignal& from) {
    CopyFrom(from);
    return *this;
  }
  inline VehicleSignal& operator=(VehicleSignal&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const VehicleSignal& default_instance() {
    return *internal_default_instance();
  }
  static inline const VehicleSignal* internal_default_instance() {
    return reinterpret_cast<const VehicleSignal*>(
               &_VehicleSignal_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(VehicleSignal& a, VehicleSignal& b) {
    a.Swap(&b);
  }
  inline void Swap(VehicleSignal* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(VehicleSignal* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VehicleSignal* New() const final {
    return CreateMaybeMessage<VehicleSignal>(nullptr);
  }

  VehicleSignal* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VehicleSignal>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const VehicleSignal& from);
  void MergeFrom(const VehicleSignal& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VehicleSignal* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.common.VehicleSignal";
  }
  protected:
  explicit VehicleSignal(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef VehicleSignal_TurnSignal TurnSignal;
  static constexpr TurnSignal TURN_NONE =
    VehicleSignal_TurnSignal_TURN_NONE;
  static constexpr TurnSignal TURN_LEFT =
    VehicleSignal_TurnSignal_TURN_LEFT;
  static constexpr TurnSignal TURN_RIGHT =
    VehicleSignal_TurnSignal_TURN_RIGHT;
  static inline bool TurnSignal_IsValid(int value) {
    return VehicleSignal_TurnSignal_IsValid(value);
  }
  static constexpr TurnSignal TurnSignal_MIN =
    VehicleSignal_TurnSignal_TurnSignal_MIN;
  static constexpr TurnSignal TurnSignal_MAX =
    VehicleSignal_TurnSignal_TurnSignal_MAX;
  static constexpr int TurnSignal_ARRAYSIZE =
    VehicleSignal_TurnSignal_TurnSignal_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  TurnSignal_descriptor() {
    return VehicleSignal_TurnSignal_descriptor();
  }
  template<typename T>
  static inline const std::string& TurnSignal_Name(T enum_t_value) {
    static_assert(::std::is_same<T, TurnSignal>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function TurnSignal_Name.");
    return VehicleSignal_TurnSignal_Name(enum_t_value);
  }
  static inline bool TurnSignal_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      TurnSignal* value) {
    return VehicleSignal_TurnSignal_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kTurnSignalFieldNumber = 1,
    kHighBeamFieldNumber = 2,
    kLowBeamFieldNumber = 3,
    kHornFieldNumber = 4,
    kEmergencyLightFieldNumber = 5,
  };
  // optional .apollo.common.VehicleSignal.TurnSignal turn_signal = 1;
  bool has_turn_signal() const;
  private:
  bool _internal_has_turn_signal() const;
  public:
  void clear_turn_signal();
  ::apollo::common::VehicleSignal_TurnSignal turn_signal() const;
  void set_turn_signal(::apollo::common::VehicleSignal_TurnSignal value);
  private:
  ::apollo::common::VehicleSignal_TurnSignal _internal_turn_signal() const;
  void _internal_set_turn_signal(::apollo::common::VehicleSignal_TurnSignal value);
  public:

  // optional bool high_beam = 2;
  bool has_high_beam() const;
  private:
  bool _internal_has_high_beam() const;
  public:
  void clear_high_beam();
  bool high_beam() const;
  void set_high_beam(bool value);
  private:
  bool _internal_high_beam() const;
  void _internal_set_high_beam(bool value);
  public:

  // optional bool low_beam = 3;
  bool has_low_beam() const;
  private:
  bool _internal_has_low_beam() const;
  public:
  void clear_low_beam();
  bool low_beam() const;
  void set_low_beam(bool value);
  private:
  bool _internal_low_beam() const;
  void _internal_set_low_beam(bool value);
  public:

  // optional bool horn = 4;
  bool has_horn() const;
  private:
  bool _internal_has_horn() const;
  public:
  void clear_horn();
  bool horn() const;
  void set_horn(bool value);
  private:
  bool _internal_horn() const;
  void _internal_set_horn(bool value);
  public:

  // optional bool emergency_light = 5;
  bool has_emergency_light() const;
  private:
  bool _internal_has_emergency_light() const;
  public:
  void clear_emergency_light();
  bool emergency_light() const;
  void set_emergency_light(bool value);
  private:
  bool _internal_emergency_light() const;
  void _internal_set_emergency_light(bool value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.common.VehicleSignal)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  int turn_signal_;
  bool high_beam_;
  bool low_beam_;
  bool horn_;
  bool emergency_light_;
  friend struct ::TableStruct_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VehicleSignal

// optional .apollo.common.VehicleSignal.TurnSignal turn_signal = 1;
inline bool VehicleSignal::_internal_has_turn_signal() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool VehicleSignal::has_turn_signal() const {
  return _internal_has_turn_signal();
}
inline void VehicleSignal::clear_turn_signal() {
  turn_signal_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::apollo::common::VehicleSignal_TurnSignal VehicleSignal::_internal_turn_signal() const {
  return static_cast< ::apollo::common::VehicleSignal_TurnSignal >(turn_signal_);
}
inline ::apollo::common::VehicleSignal_TurnSignal VehicleSignal::turn_signal() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleSignal.turn_signal)
  return _internal_turn_signal();
}
inline void VehicleSignal::_internal_set_turn_signal(::apollo::common::VehicleSignal_TurnSignal value) {
  assert(::apollo::common::VehicleSignal_TurnSignal_IsValid(value));
  _has_bits_[0] |= 0x00000001u;
  turn_signal_ = value;
}
inline void VehicleSignal::set_turn_signal(::apollo::common::VehicleSignal_TurnSignal value) {
  _internal_set_turn_signal(value);
  // @@protoc_insertion_point(field_set:apollo.common.VehicleSignal.turn_signal)
}

// optional bool high_beam = 2;
inline bool VehicleSignal::_internal_has_high_beam() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool VehicleSignal::has_high_beam() const {
  return _internal_has_high_beam();
}
inline void VehicleSignal::clear_high_beam() {
  high_beam_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool VehicleSignal::_internal_high_beam() const {
  return high_beam_;
}
inline bool VehicleSignal::high_beam() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleSignal.high_beam)
  return _internal_high_beam();
}
inline void VehicleSignal::_internal_set_high_beam(bool value) {
  _has_bits_[0] |= 0x00000002u;
  high_beam_ = value;
}
inline void VehicleSignal::set_high_beam(bool value) {
  _internal_set_high_beam(value);
  // @@protoc_insertion_point(field_set:apollo.common.VehicleSignal.high_beam)
}

// optional bool low_beam = 3;
inline bool VehicleSignal::_internal_has_low_beam() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool VehicleSignal::has_low_beam() const {
  return _internal_has_low_beam();
}
inline void VehicleSignal::clear_low_beam() {
  low_beam_ = false;
  _has_bits_[0] &= ~0x00000004u;
}
inline bool VehicleSignal::_internal_low_beam() const {
  return low_beam_;
}
inline bool VehicleSignal::low_beam() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleSignal.low_beam)
  return _internal_low_beam();
}
inline void VehicleSignal::_internal_set_low_beam(bool value) {
  _has_bits_[0] |= 0x00000004u;
  low_beam_ = value;
}
inline void VehicleSignal::set_low_beam(bool value) {
  _internal_set_low_beam(value);
  // @@protoc_insertion_point(field_set:apollo.common.VehicleSignal.low_beam)
}

// optional bool horn = 4;
inline bool VehicleSignal::_internal_has_horn() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool VehicleSignal::has_horn() const {
  return _internal_has_horn();
}
inline void VehicleSignal::clear_horn() {
  horn_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool VehicleSignal::_internal_horn() const {
  return horn_;
}
inline bool VehicleSignal::horn() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleSignal.horn)
  return _internal_horn();
}
inline void VehicleSignal::_internal_set_horn(bool value) {
  _has_bits_[0] |= 0x00000008u;
  horn_ = value;
}
inline void VehicleSignal::set_horn(bool value) {
  _internal_set_horn(value);
  // @@protoc_insertion_point(field_set:apollo.common.VehicleSignal.horn)
}

// optional bool emergency_light = 5;
inline bool VehicleSignal::_internal_has_emergency_light() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool VehicleSignal::has_emergency_light() const {
  return _internal_has_emergency_light();
}
inline void VehicleSignal::clear_emergency_light() {
  emergency_light_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool VehicleSignal::_internal_emergency_light() const {
  return emergency_light_;
}
inline bool VehicleSignal::emergency_light() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleSignal.emergency_light)
  return _internal_emergency_light();
}
inline void VehicleSignal::_internal_set_emergency_light(bool value) {
  _has_bits_[0] |= 0x00000010u;
  emergency_light_ = value;
}
inline void VehicleSignal::set_emergency_light(bool value) {
  _internal_set_emergency_light(value);
  // @@protoc_insertion_point(field_set:apollo.common.VehicleSignal.emergency_light)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace common
}  // namespace apollo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::apollo::common::VehicleSignal_TurnSignal> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::common::VehicleSignal_TurnSignal>() {
  return ::apollo::common::VehicleSignal_TurnSignal_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto
