// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/lidar/lib/segmentation/cnnseg/proto/spp_engine_config.proto

#include "modules/perception/lidar/lib/segmentation/cnnseg/proto/spp_engine_config.pb.h"

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
namespace lidar {
constexpr SppEngineConfig::SppEngineConfig(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : height_gap_(0.5f){}
struct SppEngineConfigDefaultTypeInternal {
  constexpr SppEngineConfigDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SppEngineConfigDefaultTypeInternal() {}
  union {
    SppEngineConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SppEngineConfigDefaultTypeInternal _SppEngineConfig_default_instance_;
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::SppEngineConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::SppEngineConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::SppEngineConfig, height_gap_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::apollo::perception::lidar::SppEngineConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::perception::lidar::_SppEngineConfig_default_instance_),
};

const char descriptor_table_protodef_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\nNmodules/perception/lidar/lib/segmentat"
  "ion/cnnseg/proto/spp_engine_config.proto"
  "\022\027apollo.perception.lidar\"*\n\017SppEngineCo"
  "nfig\022\027\n\nheight_gap\030\010 \001(\002:\0030.5"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto = {
  false, false, 149, descriptor_table_protodef_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto, "modules/perception/lidar/lib/segmentation/cnnseg/proto/spp_engine_config.proto", 
  &descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto::offsets,
  file_level_metadata_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto, file_level_enum_descriptors_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto, file_level_service_descriptors_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto_getter() {
  return &descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto(&descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto);
namespace apollo {
namespace perception {
namespace lidar {

// ===================================================================

class SppEngineConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<SppEngineConfig>()._has_bits_);
  static void set_has_height_gap(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

SppEngineConfig::SppEngineConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.perception.lidar.SppEngineConfig)
}
SppEngineConfig::SppEngineConfig(const SppEngineConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  height_gap_ = from.height_gap_;
  // @@protoc_insertion_point(copy_constructor:apollo.perception.lidar.SppEngineConfig)
}

void SppEngineConfig::SharedCtor() {
height_gap_ = 0.5f;
}

SppEngineConfig::~SppEngineConfig() {
  // @@protoc_insertion_point(destructor:apollo.perception.lidar.SppEngineConfig)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SppEngineConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void SppEngineConfig::ArenaDtor(void* object) {
  SppEngineConfig* _this = reinterpret_cast< SppEngineConfig* >(object);
  (void)_this;
}
void SppEngineConfig::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SppEngineConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SppEngineConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.perception.lidar.SppEngineConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  height_gap_ = 0.5f;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SppEngineConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional float height_gap = 8 [default = 0.5];
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 69)) {
          _Internal::set_has_height_gap(&has_bits);
          height_gap_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
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

::PROTOBUF_NAMESPACE_ID::uint8* SppEngineConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.perception.lidar.SppEngineConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional float height_gap = 8 [default = 0.5];
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(8, this->_internal_height_gap(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.perception.lidar.SppEngineConfig)
  return target;
}

size_t SppEngineConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.perception.lidar.SppEngineConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional float height_gap = 8 [default = 0.5];
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 + 4;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SppEngineConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.perception.lidar.SppEngineConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const SppEngineConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SppEngineConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.perception.lidar.SppEngineConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.perception.lidar.SppEngineConfig)
    MergeFrom(*source);
  }
}

void SppEngineConfig::MergeFrom(const SppEngineConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.perception.lidar.SppEngineConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_height_gap()) {
    _internal_set_height_gap(from._internal_height_gap());
  }
}

void SppEngineConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.perception.lidar.SppEngineConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SppEngineConfig::CopyFrom(const SppEngineConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.perception.lidar.SppEngineConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SppEngineConfig::IsInitialized() const {
  return true;
}

void SppEngineConfig::InternalSwap(SppEngineConfig* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(height_gap_, other->height_gap_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SppEngineConfig::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto_getter, &descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto_once,
      file_level_metadata_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fspp_5fengine_5fconfig_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::perception::lidar::SppEngineConfig* Arena::CreateMaybeMessage< ::apollo::perception::lidar::SppEngineConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::perception::lidar::SppEngineConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
