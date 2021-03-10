// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/proto/perception_ultrasonic.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "modules/common/proto/header.pb.h"
#include "modules/common/proto/geometry.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto;
namespace apollo {
namespace perception {
class ImpendingCollisionEdge;
struct ImpendingCollisionEdgeDefaultTypeInternal;
extern ImpendingCollisionEdgeDefaultTypeInternal _ImpendingCollisionEdge_default_instance_;
class ImpendingCollisionEdges;
struct ImpendingCollisionEdgesDefaultTypeInternal;
extern ImpendingCollisionEdgesDefaultTypeInternal _ImpendingCollisionEdges_default_instance_;
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::perception::ImpendingCollisionEdge* Arena::CreateMaybeMessage<::apollo::perception::ImpendingCollisionEdge>(Arena*);
template<> ::apollo::perception::ImpendingCollisionEdges* Arena::CreateMaybeMessage<::apollo::perception::ImpendingCollisionEdges>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace perception {

// ===================================================================

class ImpendingCollisionEdge PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.perception.ImpendingCollisionEdge) */ {
 public:
  inline ImpendingCollisionEdge() : ImpendingCollisionEdge(nullptr) {}
  virtual ~ImpendingCollisionEdge();
  explicit constexpr ImpendingCollisionEdge(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ImpendingCollisionEdge(const ImpendingCollisionEdge& from);
  ImpendingCollisionEdge(ImpendingCollisionEdge&& from) noexcept
    : ImpendingCollisionEdge() {
    *this = ::std::move(from);
  }

  inline ImpendingCollisionEdge& operator=(const ImpendingCollisionEdge& from) {
    CopyFrom(from);
    return *this;
  }
  inline ImpendingCollisionEdge& operator=(ImpendingCollisionEdge&& from) noexcept {
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
  static const ImpendingCollisionEdge& default_instance() {
    return *internal_default_instance();
  }
  static inline const ImpendingCollisionEdge* internal_default_instance() {
    return reinterpret_cast<const ImpendingCollisionEdge*>(
               &_ImpendingCollisionEdge_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ImpendingCollisionEdge& a, ImpendingCollisionEdge& b) {
    a.Swap(&b);
  }
  inline void Swap(ImpendingCollisionEdge* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ImpendingCollisionEdge* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ImpendingCollisionEdge* New() const final {
    return CreateMaybeMessage<ImpendingCollisionEdge>(nullptr);
  }

  ImpendingCollisionEdge* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ImpendingCollisionEdge>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ImpendingCollisionEdge& from);
  void MergeFrom(const ImpendingCollisionEdge& from);
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
  void InternalSwap(ImpendingCollisionEdge* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.perception.ImpendingCollisionEdge";
  }
  protected:
  explicit ImpendingCollisionEdge(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kConeIdListFieldNumber = 2,
    kPointFieldNumber = 3,
    kTrackingTimeFieldNumber = 4,
    kIdFieldNumber = 1,
  };
  // repeated int32 cone_id_list = 2 [deprecated = true];
  PROTOBUF_DEPRECATED int cone_id_list_size() const;
  private:
  int _internal_cone_id_list_size() const;
  public:
  PROTOBUF_DEPRECATED void clear_cone_id_list();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_cone_id_list(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_cone_id_list() const;
  void _internal_add_cone_id_list(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_cone_id_list();
  public:
  PROTOBUF_DEPRECATED ::PROTOBUF_NAMESPACE_ID::int32 cone_id_list(int index) const;
  PROTOBUF_DEPRECATED void set_cone_id_list(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  PROTOBUF_DEPRECATED void add_cone_id_list(::PROTOBUF_NAMESPACE_ID::int32 value);
  PROTOBUF_DEPRECATED const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      cone_id_list() const;
  PROTOBUF_DEPRECATED ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_cone_id_list();

  // repeated .apollo.common.Point3D point = 3;
  int point_size() const;
  private:
  int _internal_point_size() const;
  public:
  void clear_point();
  ::apollo::common::Point3D* mutable_point(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::common::Point3D >*
      mutable_point();
  private:
  const ::apollo::common::Point3D& _internal_point(int index) const;
  ::apollo::common::Point3D* _internal_add_point();
  public:
  const ::apollo::common::Point3D& point(int index) const;
  ::apollo::common::Point3D* add_point();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::common::Point3D >&
      point() const;

  // optional double tracking_time = 4;
  bool has_tracking_time() const;
  private:
  bool _internal_has_tracking_time() const;
  public:
  void clear_tracking_time();
  double tracking_time() const;
  void set_tracking_time(double value);
  private:
  double _internal_tracking_time() const;
  void _internal_set_tracking_time(double value);
  public:

  // optional int32 id = 1;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.perception.ImpendingCollisionEdge)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > cone_id_list_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::common::Point3D > point_;
  double tracking_time_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  friend struct ::TableStruct_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto;
};
// -------------------------------------------------------------------

class ImpendingCollisionEdges PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.perception.ImpendingCollisionEdges) */ {
 public:
  inline ImpendingCollisionEdges() : ImpendingCollisionEdges(nullptr) {}
  virtual ~ImpendingCollisionEdges();
  explicit constexpr ImpendingCollisionEdges(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ImpendingCollisionEdges(const ImpendingCollisionEdges& from);
  ImpendingCollisionEdges(ImpendingCollisionEdges&& from) noexcept
    : ImpendingCollisionEdges() {
    *this = ::std::move(from);
  }

  inline ImpendingCollisionEdges& operator=(const ImpendingCollisionEdges& from) {
    CopyFrom(from);
    return *this;
  }
  inline ImpendingCollisionEdges& operator=(ImpendingCollisionEdges&& from) noexcept {
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
  static const ImpendingCollisionEdges& default_instance() {
    return *internal_default_instance();
  }
  static inline const ImpendingCollisionEdges* internal_default_instance() {
    return reinterpret_cast<const ImpendingCollisionEdges*>(
               &_ImpendingCollisionEdges_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ImpendingCollisionEdges& a, ImpendingCollisionEdges& b) {
    a.Swap(&b);
  }
  inline void Swap(ImpendingCollisionEdges* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ImpendingCollisionEdges* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ImpendingCollisionEdges* New() const final {
    return CreateMaybeMessage<ImpendingCollisionEdges>(nullptr);
  }

  ImpendingCollisionEdges* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ImpendingCollisionEdges>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ImpendingCollisionEdges& from);
  void MergeFrom(const ImpendingCollisionEdges& from);
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
  void InternalSwap(ImpendingCollisionEdges* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.perception.ImpendingCollisionEdges";
  }
  protected:
  explicit ImpendingCollisionEdges(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kImpendingCollisionEdgeFieldNumber = 1,
    kHeaderFieldNumber = 2,
  };
  // repeated .apollo.perception.ImpendingCollisionEdge impending_collision_edge = 1;
  int impending_collision_edge_size() const;
  private:
  int _internal_impending_collision_edge_size() const;
  public:
  void clear_impending_collision_edge();
  ::apollo::perception::ImpendingCollisionEdge* mutable_impending_collision_edge(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::perception::ImpendingCollisionEdge >*
      mutable_impending_collision_edge();
  private:
  const ::apollo::perception::ImpendingCollisionEdge& _internal_impending_collision_edge(int index) const;
  ::apollo::perception::ImpendingCollisionEdge* _internal_add_impending_collision_edge();
  public:
  const ::apollo::perception::ImpendingCollisionEdge& impending_collision_edge(int index) const;
  ::apollo::perception::ImpendingCollisionEdge* add_impending_collision_edge();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::perception::ImpendingCollisionEdge >&
      impending_collision_edge() const;

  // optional .apollo.common.Header header = 2;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::apollo::common::Header& header() const;
  ::apollo::common::Header* release_header();
  ::apollo::common::Header* mutable_header();
  void set_allocated_header(::apollo::common::Header* header);
  private:
  const ::apollo::common::Header& _internal_header() const;
  ::apollo::common::Header* _internal_mutable_header();
  public:
  void unsafe_arena_set_allocated_header(
      ::apollo::common::Header* header);
  ::apollo::common::Header* unsafe_arena_release_header();

  // @@protoc_insertion_point(class_scope:apollo.perception.ImpendingCollisionEdges)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::perception::ImpendingCollisionEdge > impending_collision_edge_;
  ::apollo::common::Header* header_;
  friend struct ::TableStruct_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ImpendingCollisionEdge

// optional int32 id = 1;
inline bool ImpendingCollisionEdge::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ImpendingCollisionEdge::has_id() const {
  return _internal_has_id();
}
inline void ImpendingCollisionEdge::clear_id() {
  id_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ImpendingCollisionEdge::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ImpendingCollisionEdge::id() const {
  // @@protoc_insertion_point(field_get:apollo.perception.ImpendingCollisionEdge.id)
  return _internal_id();
}
inline void ImpendingCollisionEdge::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  id_ = value;
}
inline void ImpendingCollisionEdge::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:apollo.perception.ImpendingCollisionEdge.id)
}

// repeated int32 cone_id_list = 2 [deprecated = true];
inline int ImpendingCollisionEdge::_internal_cone_id_list_size() const {
  return cone_id_list_.size();
}
inline int ImpendingCollisionEdge::cone_id_list_size() const {
  return _internal_cone_id_list_size();
}
inline void ImpendingCollisionEdge::clear_cone_id_list() {
  cone_id_list_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ImpendingCollisionEdge::_internal_cone_id_list(int index) const {
  return cone_id_list_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ImpendingCollisionEdge::cone_id_list(int index) const {
  // @@protoc_insertion_point(field_get:apollo.perception.ImpendingCollisionEdge.cone_id_list)
  return _internal_cone_id_list(index);
}
inline void ImpendingCollisionEdge::set_cone_id_list(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  cone_id_list_.Set(index, value);
  // @@protoc_insertion_point(field_set:apollo.perception.ImpendingCollisionEdge.cone_id_list)
}
inline void ImpendingCollisionEdge::_internal_add_cone_id_list(::PROTOBUF_NAMESPACE_ID::int32 value) {
  cone_id_list_.Add(value);
}
inline void ImpendingCollisionEdge::add_cone_id_list(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_cone_id_list(value);
  // @@protoc_insertion_point(field_add:apollo.perception.ImpendingCollisionEdge.cone_id_list)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
ImpendingCollisionEdge::_internal_cone_id_list() const {
  return cone_id_list_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
ImpendingCollisionEdge::cone_id_list() const {
  // @@protoc_insertion_point(field_list:apollo.perception.ImpendingCollisionEdge.cone_id_list)
  return _internal_cone_id_list();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
ImpendingCollisionEdge::_internal_mutable_cone_id_list() {
  return &cone_id_list_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
ImpendingCollisionEdge::mutable_cone_id_list() {
  // @@protoc_insertion_point(field_mutable_list:apollo.perception.ImpendingCollisionEdge.cone_id_list)
  return _internal_mutable_cone_id_list();
}

// repeated .apollo.common.Point3D point = 3;
inline int ImpendingCollisionEdge::_internal_point_size() const {
  return point_.size();
}
inline int ImpendingCollisionEdge::point_size() const {
  return _internal_point_size();
}
inline ::apollo::common::Point3D* ImpendingCollisionEdge::mutable_point(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.perception.ImpendingCollisionEdge.point)
  return point_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::common::Point3D >*
ImpendingCollisionEdge::mutable_point() {
  // @@protoc_insertion_point(field_mutable_list:apollo.perception.ImpendingCollisionEdge.point)
  return &point_;
}
inline const ::apollo::common::Point3D& ImpendingCollisionEdge::_internal_point(int index) const {
  return point_.Get(index);
}
inline const ::apollo::common::Point3D& ImpendingCollisionEdge::point(int index) const {
  // @@protoc_insertion_point(field_get:apollo.perception.ImpendingCollisionEdge.point)
  return _internal_point(index);
}
inline ::apollo::common::Point3D* ImpendingCollisionEdge::_internal_add_point() {
  return point_.Add();
}
inline ::apollo::common::Point3D* ImpendingCollisionEdge::add_point() {
  // @@protoc_insertion_point(field_add:apollo.perception.ImpendingCollisionEdge.point)
  return _internal_add_point();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::common::Point3D >&
ImpendingCollisionEdge::point() const {
  // @@protoc_insertion_point(field_list:apollo.perception.ImpendingCollisionEdge.point)
  return point_;
}

// optional double tracking_time = 4;
inline bool ImpendingCollisionEdge::_internal_has_tracking_time() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ImpendingCollisionEdge::has_tracking_time() const {
  return _internal_has_tracking_time();
}
inline void ImpendingCollisionEdge::clear_tracking_time() {
  tracking_time_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline double ImpendingCollisionEdge::_internal_tracking_time() const {
  return tracking_time_;
}
inline double ImpendingCollisionEdge::tracking_time() const {
  // @@protoc_insertion_point(field_get:apollo.perception.ImpendingCollisionEdge.tracking_time)
  return _internal_tracking_time();
}
inline void ImpendingCollisionEdge::_internal_set_tracking_time(double value) {
  _has_bits_[0] |= 0x00000001u;
  tracking_time_ = value;
}
inline void ImpendingCollisionEdge::set_tracking_time(double value) {
  _internal_set_tracking_time(value);
  // @@protoc_insertion_point(field_set:apollo.perception.ImpendingCollisionEdge.tracking_time)
}

// -------------------------------------------------------------------

// ImpendingCollisionEdges

// repeated .apollo.perception.ImpendingCollisionEdge impending_collision_edge = 1;
inline int ImpendingCollisionEdges::_internal_impending_collision_edge_size() const {
  return impending_collision_edge_.size();
}
inline int ImpendingCollisionEdges::impending_collision_edge_size() const {
  return _internal_impending_collision_edge_size();
}
inline void ImpendingCollisionEdges::clear_impending_collision_edge() {
  impending_collision_edge_.Clear();
}
inline ::apollo::perception::ImpendingCollisionEdge* ImpendingCollisionEdges::mutable_impending_collision_edge(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.perception.ImpendingCollisionEdges.impending_collision_edge)
  return impending_collision_edge_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::perception::ImpendingCollisionEdge >*
ImpendingCollisionEdges::mutable_impending_collision_edge() {
  // @@protoc_insertion_point(field_mutable_list:apollo.perception.ImpendingCollisionEdges.impending_collision_edge)
  return &impending_collision_edge_;
}
inline const ::apollo::perception::ImpendingCollisionEdge& ImpendingCollisionEdges::_internal_impending_collision_edge(int index) const {
  return impending_collision_edge_.Get(index);
}
inline const ::apollo::perception::ImpendingCollisionEdge& ImpendingCollisionEdges::impending_collision_edge(int index) const {
  // @@protoc_insertion_point(field_get:apollo.perception.ImpendingCollisionEdges.impending_collision_edge)
  return _internal_impending_collision_edge(index);
}
inline ::apollo::perception::ImpendingCollisionEdge* ImpendingCollisionEdges::_internal_add_impending_collision_edge() {
  return impending_collision_edge_.Add();
}
inline ::apollo::perception::ImpendingCollisionEdge* ImpendingCollisionEdges::add_impending_collision_edge() {
  // @@protoc_insertion_point(field_add:apollo.perception.ImpendingCollisionEdges.impending_collision_edge)
  return _internal_add_impending_collision_edge();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::perception::ImpendingCollisionEdge >&
ImpendingCollisionEdges::impending_collision_edge() const {
  // @@protoc_insertion_point(field_list:apollo.perception.ImpendingCollisionEdges.impending_collision_edge)
  return impending_collision_edge_;
}

// optional .apollo.common.Header header = 2;
inline bool ImpendingCollisionEdges::_internal_has_header() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || header_ != nullptr);
  return value;
}
inline bool ImpendingCollisionEdges::has_header() const {
  return _internal_has_header();
}
inline const ::apollo::common::Header& ImpendingCollisionEdges::_internal_header() const {
  const ::apollo::common::Header* p = header_;
  return p != nullptr ? *p : reinterpret_cast<const ::apollo::common::Header&>(
      ::apollo::common::_Header_default_instance_);
}
inline const ::apollo::common::Header& ImpendingCollisionEdges::header() const {
  // @@protoc_insertion_point(field_get:apollo.perception.ImpendingCollisionEdges.header)
  return _internal_header();
}
inline void ImpendingCollisionEdges::unsafe_arena_set_allocated_header(
    ::apollo::common::Header* header) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  header_ = header;
  if (header) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:apollo.perception.ImpendingCollisionEdges.header)
}
inline ::apollo::common::Header* ImpendingCollisionEdges::release_header() {
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::common::Header* temp = header_;
  header_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::apollo::common::Header* ImpendingCollisionEdges::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:apollo.perception.ImpendingCollisionEdges.header)
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::apollo::common::Header* ImpendingCollisionEdges::_internal_mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Header>(GetArena());
    header_ = p;
  }
  return header_;
}
inline ::apollo::common::Header* ImpendingCollisionEdges::mutable_header() {
  // @@protoc_insertion_point(field_mutable:apollo.perception.ImpendingCollisionEdges.header)
  return _internal_mutable_header();
}
inline void ImpendingCollisionEdges::set_allocated_header(::apollo::common::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header)->GetArena();
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.ImpendingCollisionEdges.header)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace perception
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto
