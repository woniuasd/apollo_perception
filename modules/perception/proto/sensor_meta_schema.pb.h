// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/proto/sensor_meta_schema.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fperception_2fproto_2fsensor_5fmeta_5fschema_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fperception_2fproto_2fsensor_5fmeta_5fschema_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_modules_2fperception_2fproto_2fsensor_5fmeta_5fschema_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fperception_2fproto_2fsensor_5fmeta_5fschema_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2fproto_2fsensor_5fmeta_5fschema_2eproto;
namespace apollo {
namespace perception {
class MultiSensorMeta;
struct MultiSensorMetaDefaultTypeInternal;
extern MultiSensorMetaDefaultTypeInternal _MultiSensorMeta_default_instance_;
class SensorMeta;
struct SensorMetaDefaultTypeInternal;
extern SensorMetaDefaultTypeInternal _SensorMeta_default_instance_;
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::perception::MultiSensorMeta* Arena::CreateMaybeMessage<::apollo::perception::MultiSensorMeta>(Arena*);
template<> ::apollo::perception::SensorMeta* Arena::CreateMaybeMessage<::apollo::perception::SensorMeta>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace perception {

enum SensorMeta_SensorType : int {
  SensorMeta_SensorType_UNKNOWN_SENSOR_TYPE = -1,
  SensorMeta_SensorType_VELODYNE_64 = 0,
  SensorMeta_SensorType_VELODYNE_32 = 1,
  SensorMeta_SensorType_VELODYNE_16 = 2,
  SensorMeta_SensorType_LDLIDAR_4 = 3,
  SensorMeta_SensorType_LDLIDAR_1 = 4,
  SensorMeta_SensorType_SHORT_RANGE_RADAR = 5,
  SensorMeta_SensorType_LONG_RANGE_RADAR = 6,
  SensorMeta_SensorType_MONOCULAR_CAMERA = 7,
  SensorMeta_SensorType_STEREO_CAMERA = 8,
  SensorMeta_SensorType_ULTRASONIC = 9,
  SensorMeta_SensorType_VELODYNE_128 = 10
};
bool SensorMeta_SensorType_IsValid(int value);
constexpr SensorMeta_SensorType SensorMeta_SensorType_SensorType_MIN = SensorMeta_SensorType_UNKNOWN_SENSOR_TYPE;
constexpr SensorMeta_SensorType SensorMeta_SensorType_SensorType_MAX = SensorMeta_SensorType_VELODYNE_128;
constexpr int SensorMeta_SensorType_SensorType_ARRAYSIZE = SensorMeta_SensorType_SensorType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SensorMeta_SensorType_descriptor();
template<typename T>
inline const std::string& SensorMeta_SensorType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SensorMeta_SensorType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SensorMeta_SensorType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SensorMeta_SensorType_descriptor(), enum_t_value);
}
inline bool SensorMeta_SensorType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, SensorMeta_SensorType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SensorMeta_SensorType>(
    SensorMeta_SensorType_descriptor(), name, value);
}
enum SensorMeta_SensorOrientation : int {
  SensorMeta_SensorOrientation_FRONT = 0,
  SensorMeta_SensorOrientation_LEFT_FORWARD = 1,
  SensorMeta_SensorOrientation_LEFT = 2,
  SensorMeta_SensorOrientation_LEFT_BACKWARD = 3,
  SensorMeta_SensorOrientation_REAR = 4,
  SensorMeta_SensorOrientation_RIGHT_BACKWARD = 5,
  SensorMeta_SensorOrientation_RIGHT = 6,
  SensorMeta_SensorOrientation_RIGHT_FORWARD = 7,
  SensorMeta_SensorOrientation_PANORAMIC = 8
};
bool SensorMeta_SensorOrientation_IsValid(int value);
constexpr SensorMeta_SensorOrientation SensorMeta_SensorOrientation_SensorOrientation_MIN = SensorMeta_SensorOrientation_FRONT;
constexpr SensorMeta_SensorOrientation SensorMeta_SensorOrientation_SensorOrientation_MAX = SensorMeta_SensorOrientation_PANORAMIC;
constexpr int SensorMeta_SensorOrientation_SensorOrientation_ARRAYSIZE = SensorMeta_SensorOrientation_SensorOrientation_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SensorMeta_SensorOrientation_descriptor();
template<typename T>
inline const std::string& SensorMeta_SensorOrientation_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SensorMeta_SensorOrientation>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SensorMeta_SensorOrientation_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SensorMeta_SensorOrientation_descriptor(), enum_t_value);
}
inline bool SensorMeta_SensorOrientation_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, SensorMeta_SensorOrientation* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SensorMeta_SensorOrientation>(
    SensorMeta_SensorOrientation_descriptor(), name, value);
}
// ===================================================================

class SensorMeta PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.perception.SensorMeta) */ {
 public:
  inline SensorMeta() : SensorMeta(nullptr) {}
  virtual ~SensorMeta();
  explicit constexpr SensorMeta(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SensorMeta(const SensorMeta& from);
  SensorMeta(SensorMeta&& from) noexcept
    : SensorMeta() {
    *this = ::std::move(from);
  }

  inline SensorMeta& operator=(const SensorMeta& from) {
    CopyFrom(from);
    return *this;
  }
  inline SensorMeta& operator=(SensorMeta&& from) noexcept {
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
  static const SensorMeta& default_instance() {
    return *internal_default_instance();
  }
  static inline const SensorMeta* internal_default_instance() {
    return reinterpret_cast<const SensorMeta*>(
               &_SensorMeta_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SensorMeta& a, SensorMeta& b) {
    a.Swap(&b);
  }
  inline void Swap(SensorMeta* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SensorMeta* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SensorMeta* New() const final {
    return CreateMaybeMessage<SensorMeta>(nullptr);
  }

  SensorMeta* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SensorMeta>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SensorMeta& from);
  void MergeFrom(const SensorMeta& from);
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
  void InternalSwap(SensorMeta* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.perception.SensorMeta";
  }
  protected:
  explicit SensorMeta(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef SensorMeta_SensorType SensorType;
  static constexpr SensorType UNKNOWN_SENSOR_TYPE =
    SensorMeta_SensorType_UNKNOWN_SENSOR_TYPE;
  static constexpr SensorType VELODYNE_64 =
    SensorMeta_SensorType_VELODYNE_64;
  static constexpr SensorType VELODYNE_32 =
    SensorMeta_SensorType_VELODYNE_32;
  static constexpr SensorType VELODYNE_16 =
    SensorMeta_SensorType_VELODYNE_16;
  static constexpr SensorType LDLIDAR_4 =
    SensorMeta_SensorType_LDLIDAR_4;
  static constexpr SensorType LDLIDAR_1 =
    SensorMeta_SensorType_LDLIDAR_1;
  static constexpr SensorType SHORT_RANGE_RADAR =
    SensorMeta_SensorType_SHORT_RANGE_RADAR;
  static constexpr SensorType LONG_RANGE_RADAR =
    SensorMeta_SensorType_LONG_RANGE_RADAR;
  static constexpr SensorType MONOCULAR_CAMERA =
    SensorMeta_SensorType_MONOCULAR_CAMERA;
  static constexpr SensorType STEREO_CAMERA =
    SensorMeta_SensorType_STEREO_CAMERA;
  static constexpr SensorType ULTRASONIC =
    SensorMeta_SensorType_ULTRASONIC;
  static constexpr SensorType VELODYNE_128 =
    SensorMeta_SensorType_VELODYNE_128;
  static inline bool SensorType_IsValid(int value) {
    return SensorMeta_SensorType_IsValid(value);
  }
  static constexpr SensorType SensorType_MIN =
    SensorMeta_SensorType_SensorType_MIN;
  static constexpr SensorType SensorType_MAX =
    SensorMeta_SensorType_SensorType_MAX;
  static constexpr int SensorType_ARRAYSIZE =
    SensorMeta_SensorType_SensorType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  SensorType_descriptor() {
    return SensorMeta_SensorType_descriptor();
  }
  template<typename T>
  static inline const std::string& SensorType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, SensorType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function SensorType_Name.");
    return SensorMeta_SensorType_Name(enum_t_value);
  }
  static inline bool SensorType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      SensorType* value) {
    return SensorMeta_SensorType_Parse(name, value);
  }

  typedef SensorMeta_SensorOrientation SensorOrientation;
  static constexpr SensorOrientation FRONT =
    SensorMeta_SensorOrientation_FRONT;
  static constexpr SensorOrientation LEFT_FORWARD =
    SensorMeta_SensorOrientation_LEFT_FORWARD;
  static constexpr SensorOrientation LEFT =
    SensorMeta_SensorOrientation_LEFT;
  static constexpr SensorOrientation LEFT_BACKWARD =
    SensorMeta_SensorOrientation_LEFT_BACKWARD;
  static constexpr SensorOrientation REAR =
    SensorMeta_SensorOrientation_REAR;
  static constexpr SensorOrientation RIGHT_BACKWARD =
    SensorMeta_SensorOrientation_RIGHT_BACKWARD;
  static constexpr SensorOrientation RIGHT =
    SensorMeta_SensorOrientation_RIGHT;
  static constexpr SensorOrientation RIGHT_FORWARD =
    SensorMeta_SensorOrientation_RIGHT_FORWARD;
  static constexpr SensorOrientation PANORAMIC =
    SensorMeta_SensorOrientation_PANORAMIC;
  static inline bool SensorOrientation_IsValid(int value) {
    return SensorMeta_SensorOrientation_IsValid(value);
  }
  static constexpr SensorOrientation SensorOrientation_MIN =
    SensorMeta_SensorOrientation_SensorOrientation_MIN;
  static constexpr SensorOrientation SensorOrientation_MAX =
    SensorMeta_SensorOrientation_SensorOrientation_MAX;
  static constexpr int SensorOrientation_ARRAYSIZE =
    SensorMeta_SensorOrientation_SensorOrientation_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  SensorOrientation_descriptor() {
    return SensorMeta_SensorOrientation_descriptor();
  }
  template<typename T>
  static inline const std::string& SensorOrientation_Name(T enum_t_value) {
    static_assert(::std::is_same<T, SensorOrientation>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function SensorOrientation_Name.");
    return SensorMeta_SensorOrientation_Name(enum_t_value);
  }
  static inline bool SensorOrientation_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      SensorOrientation* value) {
    return SensorMeta_SensorOrientation_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kOrientationFieldNumber = 3,
    kTypeFieldNumber = 2,
  };
  // optional string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional .apollo.perception.SensorMeta.SensorOrientation orientation = 3;
  bool has_orientation() const;
  private:
  bool _internal_has_orientation() const;
  public:
  void clear_orientation();
  ::apollo::perception::SensorMeta_SensorOrientation orientation() const;
  void set_orientation(::apollo::perception::SensorMeta_SensorOrientation value);
  private:
  ::apollo::perception::SensorMeta_SensorOrientation _internal_orientation() const;
  void _internal_set_orientation(::apollo::perception::SensorMeta_SensorOrientation value);
  public:

  // optional .apollo.perception.SensorMeta.SensorType type = 2;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::apollo::perception::SensorMeta_SensorType type() const;
  void set_type(::apollo::perception::SensorMeta_SensorType value);
  private:
  ::apollo::perception::SensorMeta_SensorType _internal_type() const;
  void _internal_set_type(::apollo::perception::SensorMeta_SensorType value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.perception.SensorMeta)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  int orientation_;
  int type_;
  friend struct ::TableStruct_modules_2fperception_2fproto_2fsensor_5fmeta_5fschema_2eproto;
};
// -------------------------------------------------------------------

class MultiSensorMeta PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.perception.MultiSensorMeta) */ {
 public:
  inline MultiSensorMeta() : MultiSensorMeta(nullptr) {}
  virtual ~MultiSensorMeta();
  explicit constexpr MultiSensorMeta(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MultiSensorMeta(const MultiSensorMeta& from);
  MultiSensorMeta(MultiSensorMeta&& from) noexcept
    : MultiSensorMeta() {
    *this = ::std::move(from);
  }

  inline MultiSensorMeta& operator=(const MultiSensorMeta& from) {
    CopyFrom(from);
    return *this;
  }
  inline MultiSensorMeta& operator=(MultiSensorMeta&& from) noexcept {
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
  static const MultiSensorMeta& default_instance() {
    return *internal_default_instance();
  }
  static inline const MultiSensorMeta* internal_default_instance() {
    return reinterpret_cast<const MultiSensorMeta*>(
               &_MultiSensorMeta_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MultiSensorMeta& a, MultiSensorMeta& b) {
    a.Swap(&b);
  }
  inline void Swap(MultiSensorMeta* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MultiSensorMeta* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MultiSensorMeta* New() const final {
    return CreateMaybeMessage<MultiSensorMeta>(nullptr);
  }

  MultiSensorMeta* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MultiSensorMeta>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MultiSensorMeta& from);
  void MergeFrom(const MultiSensorMeta& from);
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
  void InternalSwap(MultiSensorMeta* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.perception.MultiSensorMeta";
  }
  protected:
  explicit MultiSensorMeta(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSensorMetaFieldNumber = 1,
  };
  // repeated .apollo.perception.SensorMeta sensor_meta = 1;
  int sensor_meta_size() const;
  private:
  int _internal_sensor_meta_size() const;
  public:
  void clear_sensor_meta();
  ::apollo::perception::SensorMeta* mutable_sensor_meta(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::perception::SensorMeta >*
      mutable_sensor_meta();
  private:
  const ::apollo::perception::SensorMeta& _internal_sensor_meta(int index) const;
  ::apollo::perception::SensorMeta* _internal_add_sensor_meta();
  public:
  const ::apollo::perception::SensorMeta& sensor_meta(int index) const;
  ::apollo::perception::SensorMeta* add_sensor_meta();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::perception::SensorMeta >&
      sensor_meta() const;

  // @@protoc_insertion_point(class_scope:apollo.perception.MultiSensorMeta)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::perception::SensorMeta > sensor_meta_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_modules_2fperception_2fproto_2fsensor_5fmeta_5fschema_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SensorMeta

// optional string name = 1;
inline bool SensorMeta::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool SensorMeta::has_name() const {
  return _internal_has_name();
}
inline void SensorMeta::clear_name() {
  name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& SensorMeta::name() const {
  // @@protoc_insertion_point(field_get:apollo.perception.SensorMeta.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
PROTOBUF_ALWAYS_INLINE
inline void SensorMeta::set_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArena());
  // @@protoc_insertion_point(field_set:apollo.perception.SensorMeta.name)
}
inline std::string* SensorMeta::mutable_name() {
  // @@protoc_insertion_point(field_mutable:apollo.perception.SensorMeta.name)
  return _internal_mutable_name();
}
inline const std::string& SensorMeta::_internal_name() const {
  return name_.Get();
}
inline void SensorMeta::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline std::string* SensorMeta::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* SensorMeta::release_name() {
  // @@protoc_insertion_point(field_release:apollo.perception.SensorMeta.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SensorMeta::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.SensorMeta.name)
}

// optional .apollo.perception.SensorMeta.SensorType type = 2;
inline bool SensorMeta::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool SensorMeta::has_type() const {
  return _internal_has_type();
}
inline void SensorMeta::clear_type() {
  type_ = -1;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::apollo::perception::SensorMeta_SensorType SensorMeta::_internal_type() const {
  return static_cast< ::apollo::perception::SensorMeta_SensorType >(type_);
}
inline ::apollo::perception::SensorMeta_SensorType SensorMeta::type() const {
  // @@protoc_insertion_point(field_get:apollo.perception.SensorMeta.type)
  return _internal_type();
}
inline void SensorMeta::_internal_set_type(::apollo::perception::SensorMeta_SensorType value) {
  assert(::apollo::perception::SensorMeta_SensorType_IsValid(value));
  _has_bits_[0] |= 0x00000004u;
  type_ = value;
}
inline void SensorMeta::set_type(::apollo::perception::SensorMeta_SensorType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:apollo.perception.SensorMeta.type)
}

// optional .apollo.perception.SensorMeta.SensorOrientation orientation = 3;
inline bool SensorMeta::_internal_has_orientation() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool SensorMeta::has_orientation() const {
  return _internal_has_orientation();
}
inline void SensorMeta::clear_orientation() {
  orientation_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::apollo::perception::SensorMeta_SensorOrientation SensorMeta::_internal_orientation() const {
  return static_cast< ::apollo::perception::SensorMeta_SensorOrientation >(orientation_);
}
inline ::apollo::perception::SensorMeta_SensorOrientation SensorMeta::orientation() const {
  // @@protoc_insertion_point(field_get:apollo.perception.SensorMeta.orientation)
  return _internal_orientation();
}
inline void SensorMeta::_internal_set_orientation(::apollo::perception::SensorMeta_SensorOrientation value) {
  assert(::apollo::perception::SensorMeta_SensorOrientation_IsValid(value));
  _has_bits_[0] |= 0x00000002u;
  orientation_ = value;
}
inline void SensorMeta::set_orientation(::apollo::perception::SensorMeta_SensorOrientation value) {
  _internal_set_orientation(value);
  // @@protoc_insertion_point(field_set:apollo.perception.SensorMeta.orientation)
}

// -------------------------------------------------------------------

// MultiSensorMeta

// repeated .apollo.perception.SensorMeta sensor_meta = 1;
inline int MultiSensorMeta::_internal_sensor_meta_size() const {
  return sensor_meta_.size();
}
inline int MultiSensorMeta::sensor_meta_size() const {
  return _internal_sensor_meta_size();
}
inline void MultiSensorMeta::clear_sensor_meta() {
  sensor_meta_.Clear();
}
inline ::apollo::perception::SensorMeta* MultiSensorMeta::mutable_sensor_meta(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.perception.MultiSensorMeta.sensor_meta)
  return sensor_meta_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::perception::SensorMeta >*
MultiSensorMeta::mutable_sensor_meta() {
  // @@protoc_insertion_point(field_mutable_list:apollo.perception.MultiSensorMeta.sensor_meta)
  return &sensor_meta_;
}
inline const ::apollo::perception::SensorMeta& MultiSensorMeta::_internal_sensor_meta(int index) const {
  return sensor_meta_.Get(index);
}
inline const ::apollo::perception::SensorMeta& MultiSensorMeta::sensor_meta(int index) const {
  // @@protoc_insertion_point(field_get:apollo.perception.MultiSensorMeta.sensor_meta)
  return _internal_sensor_meta(index);
}
inline ::apollo::perception::SensorMeta* MultiSensorMeta::_internal_add_sensor_meta() {
  return sensor_meta_.Add();
}
inline ::apollo::perception::SensorMeta* MultiSensorMeta::add_sensor_meta() {
  // @@protoc_insertion_point(field_add:apollo.perception.MultiSensorMeta.sensor_meta)
  return _internal_add_sensor_meta();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::perception::SensorMeta >&
MultiSensorMeta::sensor_meta() const {
  // @@protoc_insertion_point(field_list:apollo.perception.MultiSensorMeta.sensor_meta)
  return sensor_meta_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace perception
}  // namespace apollo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::apollo::perception::SensorMeta_SensorType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::perception::SensorMeta_SensorType>() {
  return ::apollo::perception::SensorMeta_SensorType_descriptor();
}
template <> struct is_proto_enum< ::apollo::perception::SensorMeta_SensorOrientation> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::perception::SensorMeta_SensorOrientation>() {
  return ::apollo::perception::SensorMeta_SensorOrientation_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fperception_2fproto_2fsensor_5fmeta_5fschema_2eproto
