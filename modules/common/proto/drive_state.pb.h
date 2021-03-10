// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/common/proto/drive_state.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto;
namespace apollo {
namespace common {
class EngageAdvice;
struct EngageAdviceDefaultTypeInternal;
extern EngageAdviceDefaultTypeInternal _EngageAdvice_default_instance_;
}  // namespace common
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::common::EngageAdvice* Arena::CreateMaybeMessage<::apollo::common::EngageAdvice>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace common {

enum EngageAdvice_Advice : int {
  EngageAdvice_Advice_UNKNOWN = 0,
  EngageAdvice_Advice_DISALLOW_ENGAGE = 1,
  EngageAdvice_Advice_READY_TO_ENGAGE = 2,
  EngageAdvice_Advice_KEEP_ENGAGED = 3,
  EngageAdvice_Advice_PREPARE_DISENGAGE = 4
};
bool EngageAdvice_Advice_IsValid(int value);
constexpr EngageAdvice_Advice EngageAdvice_Advice_Advice_MIN = EngageAdvice_Advice_UNKNOWN;
constexpr EngageAdvice_Advice EngageAdvice_Advice_Advice_MAX = EngageAdvice_Advice_PREPARE_DISENGAGE;
constexpr int EngageAdvice_Advice_Advice_ARRAYSIZE = EngageAdvice_Advice_Advice_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EngageAdvice_Advice_descriptor();
template<typename T>
inline const std::string& EngageAdvice_Advice_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EngageAdvice_Advice>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EngageAdvice_Advice_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EngageAdvice_Advice_descriptor(), enum_t_value);
}
inline bool EngageAdvice_Advice_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EngageAdvice_Advice* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EngageAdvice_Advice>(
    EngageAdvice_Advice_descriptor(), name, value);
}
// ===================================================================

class EngageAdvice PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.common.EngageAdvice) */ {
 public:
  inline EngageAdvice() : EngageAdvice(nullptr) {}
  virtual ~EngageAdvice();
  explicit constexpr EngageAdvice(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  EngageAdvice(const EngageAdvice& from);
  EngageAdvice(EngageAdvice&& from) noexcept
    : EngageAdvice() {
    *this = ::std::move(from);
  }

  inline EngageAdvice& operator=(const EngageAdvice& from) {
    CopyFrom(from);
    return *this;
  }
  inline EngageAdvice& operator=(EngageAdvice&& from) noexcept {
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
  static const EngageAdvice& default_instance() {
    return *internal_default_instance();
  }
  static inline const EngageAdvice* internal_default_instance() {
    return reinterpret_cast<const EngageAdvice*>(
               &_EngageAdvice_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(EngageAdvice& a, EngageAdvice& b) {
    a.Swap(&b);
  }
  inline void Swap(EngageAdvice* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(EngageAdvice* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline EngageAdvice* New() const final {
    return CreateMaybeMessage<EngageAdvice>(nullptr);
  }

  EngageAdvice* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<EngageAdvice>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const EngageAdvice& from);
  void MergeFrom(const EngageAdvice& from);
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
  void InternalSwap(EngageAdvice* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.common.EngageAdvice";
  }
  protected:
  explicit EngageAdvice(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef EngageAdvice_Advice Advice;
  static constexpr Advice UNKNOWN =
    EngageAdvice_Advice_UNKNOWN;
  static constexpr Advice DISALLOW_ENGAGE =
    EngageAdvice_Advice_DISALLOW_ENGAGE;
  static constexpr Advice READY_TO_ENGAGE =
    EngageAdvice_Advice_READY_TO_ENGAGE;
  static constexpr Advice KEEP_ENGAGED =
    EngageAdvice_Advice_KEEP_ENGAGED;
  static constexpr Advice PREPARE_DISENGAGE =
    EngageAdvice_Advice_PREPARE_DISENGAGE;
  static inline bool Advice_IsValid(int value) {
    return EngageAdvice_Advice_IsValid(value);
  }
  static constexpr Advice Advice_MIN =
    EngageAdvice_Advice_Advice_MIN;
  static constexpr Advice Advice_MAX =
    EngageAdvice_Advice_Advice_MAX;
  static constexpr int Advice_ARRAYSIZE =
    EngageAdvice_Advice_Advice_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Advice_descriptor() {
    return EngageAdvice_Advice_descriptor();
  }
  template<typename T>
  static inline const std::string& Advice_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Advice>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Advice_Name.");
    return EngageAdvice_Advice_Name(enum_t_value);
  }
  static inline bool Advice_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Advice* value) {
    return EngageAdvice_Advice_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kReasonFieldNumber = 2,
    kAdviceFieldNumber = 1,
  };
  // optional string reason = 2;
  bool has_reason() const;
  private:
  bool _internal_has_reason() const;
  public:
  void clear_reason();
  const std::string& reason() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_reason(ArgT0&& arg0, ArgT... args);
  std::string* mutable_reason();
  std::string* release_reason();
  void set_allocated_reason(std::string* reason);
  private:
  const std::string& _internal_reason() const;
  void _internal_set_reason(const std::string& value);
  std::string* _internal_mutable_reason();
  public:

  // optional .apollo.common.EngageAdvice.Advice advice = 1 [default = DISALLOW_ENGAGE];
  bool has_advice() const;
  private:
  bool _internal_has_advice() const;
  public:
  void clear_advice();
  ::apollo::common::EngageAdvice_Advice advice() const;
  void set_advice(::apollo::common::EngageAdvice_Advice value);
  private:
  ::apollo::common::EngageAdvice_Advice _internal_advice() const;
  void _internal_set_advice(::apollo::common::EngageAdvice_Advice value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.common.EngageAdvice)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr reason_;
  int advice_;
  friend struct ::TableStruct_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EngageAdvice

// optional .apollo.common.EngageAdvice.Advice advice = 1 [default = DISALLOW_ENGAGE];
inline bool EngageAdvice::_internal_has_advice() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool EngageAdvice::has_advice() const {
  return _internal_has_advice();
}
inline void EngageAdvice::clear_advice() {
  advice_ = 1;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::apollo::common::EngageAdvice_Advice EngageAdvice::_internal_advice() const {
  return static_cast< ::apollo::common::EngageAdvice_Advice >(advice_);
}
inline ::apollo::common::EngageAdvice_Advice EngageAdvice::advice() const {
  // @@protoc_insertion_point(field_get:apollo.common.EngageAdvice.advice)
  return _internal_advice();
}
inline void EngageAdvice::_internal_set_advice(::apollo::common::EngageAdvice_Advice value) {
  assert(::apollo::common::EngageAdvice_Advice_IsValid(value));
  _has_bits_[0] |= 0x00000002u;
  advice_ = value;
}
inline void EngageAdvice::set_advice(::apollo::common::EngageAdvice_Advice value) {
  _internal_set_advice(value);
  // @@protoc_insertion_point(field_set:apollo.common.EngageAdvice.advice)
}

// optional string reason = 2;
inline bool EngageAdvice::_internal_has_reason() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool EngageAdvice::has_reason() const {
  return _internal_has_reason();
}
inline void EngageAdvice::clear_reason() {
  reason_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& EngageAdvice::reason() const {
  // @@protoc_insertion_point(field_get:apollo.common.EngageAdvice.reason)
  return _internal_reason();
}
template <typename ArgT0, typename... ArgT>
PROTOBUF_ALWAYS_INLINE
inline void EngageAdvice::set_reason(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 reason_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArena());
  // @@protoc_insertion_point(field_set:apollo.common.EngageAdvice.reason)
}
inline std::string* EngageAdvice::mutable_reason() {
  // @@protoc_insertion_point(field_mutable:apollo.common.EngageAdvice.reason)
  return _internal_mutable_reason();
}
inline const std::string& EngageAdvice::_internal_reason() const {
  return reason_.Get();
}
inline void EngageAdvice::_internal_set_reason(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  reason_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline std::string* EngageAdvice::_internal_mutable_reason() {
  _has_bits_[0] |= 0x00000001u;
  return reason_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* EngageAdvice::release_reason() {
  // @@protoc_insertion_point(field_release:apollo.common.EngageAdvice.reason)
  if (!_internal_has_reason()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return reason_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void EngageAdvice::set_allocated_reason(std::string* reason) {
  if (reason != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  reason_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), reason,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:apollo.common.EngageAdvice.reason)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace common
}  // namespace apollo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::apollo::common::EngageAdvice_Advice> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::common::EngageAdvice_Advice>() {
  return ::apollo::common::EngageAdvice_Advice_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto