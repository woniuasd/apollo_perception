// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/proto/dst_existence_fusion_config.proto

#include "modules/perception/proto/dst_existence_fusion_config.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace apollo {
namespace perception {
constexpr CameraValidDist::CameraValidDist(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : camera_name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , valid_dist_(0){}
struct CameraValidDistDefaultTypeInternal {
  constexpr CameraValidDistDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CameraValidDistDefaultTypeInternal() {}
  union {
    CameraValidDist _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CameraValidDistDefaultTypeInternal _CameraValidDist_default_instance_;
constexpr DstExistenceFusionConfig::DstExistenceFusionConfig(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : camera_valid_dist_()
  , track_object_max_match_distance_(4){}
struct DstExistenceFusionConfigDefaultTypeInternal {
  constexpr DstExistenceFusionConfigDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~DstExistenceFusionConfigDefaultTypeInternal() {}
  union {
    DstExistenceFusionConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT DstExistenceFusionConfigDefaultTypeInternal _DstExistenceFusionConfig_default_instance_;
}  // namespace perception
}  // namespace apollo
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::perception::CameraValidDist, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::CameraValidDist, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::perception::CameraValidDist, camera_name_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::CameraValidDist, valid_dist_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::apollo::perception::DstExistenceFusionConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::DstExistenceFusionConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::perception::DstExistenceFusionConfig, track_object_max_match_distance_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::DstExistenceFusionConfig, camera_valid_dist_),
  0,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::apollo::perception::CameraValidDist)},
  { 9, 16, sizeof(::apollo::perception::DstExistenceFusionConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::perception::_CameraValidDist_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::perception::_DstExistenceFusionConfig_default_instance_),
};

const char descriptor_table_protodef_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n:modules/perception/proto/dst_existence"
  "_fusion_config.proto\022\021apollo.perception\""
  "\?\n\017CameraValidDist\022\025\n\013camera_name\030\001 \001(\t:"
  "\000\022\025\n\nvalid_dist\030\002 \001(\001:\0010\"\205\001\n\030DstExistenc"
  "eFusionConfig\022*\n\037track_object_max_match_"
  "distance\030\001 \001(\001:\0014\022=\n\021camera_valid_dist\030\002"
  " \003(\0132\".apollo.perception.CameraValidDist"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto = {
  false, false, 280, descriptor_table_protodef_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto, "modules/perception/proto/dst_existence_fusion_config.proto", 
  &descriptor_table_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto::offsets,
  file_level_metadata_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto, file_level_enum_descriptors_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto, file_level_service_descriptors_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto_getter() {
  return &descriptor_table_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto(&descriptor_table_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto);
namespace apollo {
namespace perception {

// ===================================================================

class CameraValidDist::_Internal {
 public:
  using HasBits = decltype(std::declval<CameraValidDist>()._has_bits_);
  static void set_has_camera_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_valid_dist(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

CameraValidDist::CameraValidDist(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.perception.CameraValidDist)
}
CameraValidDist::CameraValidDist(const CameraValidDist& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  camera_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_camera_name()) {
    camera_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_camera_name(), 
      GetArena());
  }
  valid_dist_ = from.valid_dist_;
  // @@protoc_insertion_point(copy_constructor:apollo.perception.CameraValidDist)
}

void CameraValidDist::SharedCtor() {
camera_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
valid_dist_ = 0;
}

CameraValidDist::~CameraValidDist() {
  // @@protoc_insertion_point(destructor:apollo.perception.CameraValidDist)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void CameraValidDist::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  camera_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void CameraValidDist::ArenaDtor(void* object) {
  CameraValidDist* _this = reinterpret_cast< CameraValidDist* >(object);
  (void)_this;
}
void CameraValidDist::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CameraValidDist::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void CameraValidDist::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.perception.CameraValidDist)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    camera_name_.ClearNonDefaultToEmpty();
  }
  valid_dist_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CameraValidDist::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string camera_name = 1 [default = ""];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_camera_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.perception.CameraValidDist.camera_name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional double valid_dist = 2 [default = 0];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_valid_dist(&has_bits);
          valid_dist_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* CameraValidDist::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.perception.CameraValidDist)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string camera_name = 1 [default = ""];
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_camera_name().data(), static_cast<int>(this->_internal_camera_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.CameraValidDist.camera_name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_camera_name(), target);
  }

  // optional double valid_dist = 2 [default = 0];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_valid_dist(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.perception.CameraValidDist)
  return target;
}

size_t CameraValidDist::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.perception.CameraValidDist)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string camera_name = 1 [default = ""];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_camera_name());
    }

    // optional double valid_dist = 2 [default = 0];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 8;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CameraValidDist::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.perception.CameraValidDist)
  GOOGLE_DCHECK_NE(&from, this);
  const CameraValidDist* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CameraValidDist>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.perception.CameraValidDist)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.perception.CameraValidDist)
    MergeFrom(*source);
  }
}

void CameraValidDist::MergeFrom(const CameraValidDist& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.perception.CameraValidDist)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_camera_name(from._internal_camera_name());
    }
    if (cached_has_bits & 0x00000002u) {
      valid_dist_ = from.valid_dist_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void CameraValidDist::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.perception.CameraValidDist)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CameraValidDist::CopyFrom(const CameraValidDist& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.perception.CameraValidDist)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CameraValidDist::IsInitialized() const {
  return true;
}

void CameraValidDist::InternalSwap(CameraValidDist* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  camera_name_.Swap(&other->camera_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(valid_dist_, other->valid_dist_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CameraValidDist::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto_getter, &descriptor_table_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto_once,
      file_level_metadata_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto[0]);
}

// ===================================================================

class DstExistenceFusionConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<DstExistenceFusionConfig>()._has_bits_);
  static void set_has_track_object_max_match_distance(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

DstExistenceFusionConfig::DstExistenceFusionConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  camera_valid_dist_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.perception.DstExistenceFusionConfig)
}
DstExistenceFusionConfig::DstExistenceFusionConfig(const DstExistenceFusionConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      camera_valid_dist_(from.camera_valid_dist_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  track_object_max_match_distance_ = from.track_object_max_match_distance_;
  // @@protoc_insertion_point(copy_constructor:apollo.perception.DstExistenceFusionConfig)
}

void DstExistenceFusionConfig::SharedCtor() {
track_object_max_match_distance_ = 4;
}

DstExistenceFusionConfig::~DstExistenceFusionConfig() {
  // @@protoc_insertion_point(destructor:apollo.perception.DstExistenceFusionConfig)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void DstExistenceFusionConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void DstExistenceFusionConfig::ArenaDtor(void* object) {
  DstExistenceFusionConfig* _this = reinterpret_cast< DstExistenceFusionConfig* >(object);
  (void)_this;
}
void DstExistenceFusionConfig::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void DstExistenceFusionConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void DstExistenceFusionConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.perception.DstExistenceFusionConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  camera_valid_dist_.Clear();
  track_object_max_match_distance_ = 4;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* DstExistenceFusionConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional double track_object_max_match_distance = 1 [default = 4];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          _Internal::set_has_track_object_max_match_distance(&has_bits);
          track_object_max_match_distance_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // repeated .apollo.perception.CameraValidDist camera_valid_dist = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_camera_valid_dist(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* DstExistenceFusionConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.perception.DstExistenceFusionConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double track_object_max_match_distance = 1 [default = 4];
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_track_object_max_match_distance(), target);
  }

  // repeated .apollo.perception.CameraValidDist camera_valid_dist = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_camera_valid_dist_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_camera_valid_dist(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.perception.DstExistenceFusionConfig)
  return target;
}

size_t DstExistenceFusionConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.perception.DstExistenceFusionConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .apollo.perception.CameraValidDist camera_valid_dist = 2;
  total_size += 1UL * this->_internal_camera_valid_dist_size();
  for (const auto& msg : this->camera_valid_dist_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // optional double track_object_max_match_distance = 1 [default = 4];
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 + 8;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DstExistenceFusionConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.perception.DstExistenceFusionConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const DstExistenceFusionConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<DstExistenceFusionConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.perception.DstExistenceFusionConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.perception.DstExistenceFusionConfig)
    MergeFrom(*source);
  }
}

void DstExistenceFusionConfig::MergeFrom(const DstExistenceFusionConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.perception.DstExistenceFusionConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  camera_valid_dist_.MergeFrom(from.camera_valid_dist_);
  if (from._internal_has_track_object_max_match_distance()) {
    _internal_set_track_object_max_match_distance(from._internal_track_object_max_match_distance());
  }
}

void DstExistenceFusionConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.perception.DstExistenceFusionConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DstExistenceFusionConfig::CopyFrom(const DstExistenceFusionConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.perception.DstExistenceFusionConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DstExistenceFusionConfig::IsInitialized() const {
  return true;
}

void DstExistenceFusionConfig::InternalSwap(DstExistenceFusionConfig* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  camera_valid_dist_.InternalSwap(&other->camera_valid_dist_);
  swap(track_object_max_match_distance_, other->track_object_max_match_distance_);
}

::PROTOBUF_NAMESPACE_ID::Metadata DstExistenceFusionConfig::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto_getter, &descriptor_table_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto_once,
      file_level_metadata_modules_2fperception_2fproto_2fdst_5fexistence_5ffusion_5fconfig_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::perception::CameraValidDist* Arena::CreateMaybeMessage< ::apollo::perception::CameraValidDist >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::perception::CameraValidDist >(arena);
}
template<> PROTOBUF_NOINLINE ::apollo::perception::DstExistenceFusionConfig* Arena::CreateMaybeMessage< ::apollo::perception::DstExistenceFusionConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::perception::DstExistenceFusionConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
