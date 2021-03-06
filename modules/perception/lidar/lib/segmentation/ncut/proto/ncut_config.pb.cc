// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/lidar/lib/segmentation/ncut/proto/ncut_config.proto

#include "modules/perception/lidar/lib/segmentation/ncut/proto/ncut_config.pb.h"

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
constexpr NCutConfig::NCutConfig(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : param_file_(nullptr){}
struct NCutConfigDefaultTypeInternal {
  constexpr NCutConfigDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~NCutConfigDefaultTypeInternal() {}
  union {
    NCutConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT NCutConfigDefaultTypeInternal _NCutConfig_default_instance_;
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::NCutConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::NCutConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::NCutConfig, param_file_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::apollo::perception::lidar::NCutConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::perception::lidar::_NCutConfig_default_instance_),
};

const char descriptor_table_protodef_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\nFmodules/perception/lidar/lib/segmentat"
  "ion/ncut/proto/ncut_config.proto\022\027apollo"
  ".perception.lidar\"\?\n\nNCutConfig\0221\n\nparam"
  "_file\030\001 \001(\t:\035./data/models/ncut/param.co"
  "nf"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto = {
  false, false, 162, descriptor_table_protodef_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto, "modules/perception/lidar/lib/segmentation/ncut/proto/ncut_config.proto", 
  &descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto::offsets,
  file_level_metadata_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto, file_level_enum_descriptors_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto, file_level_service_descriptors_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto_getter() {
  return &descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto(&descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto);
namespace apollo {
namespace perception {
namespace lidar {

// ===================================================================

class NCutConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<NCutConfig>()._has_bits_);
  static void set_has_param_file(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::PROTOBUF_NAMESPACE_ID::internal::LazyString NCutConfig::_i_give_permission_to_break_this_code_default_param_file_{{{"./data/models/ncut/param.conf", 29}}, {nullptr}};
NCutConfig::NCutConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.perception.lidar.NCutConfig)
}
NCutConfig::NCutConfig(const NCutConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  param_file_.UnsafeSetDefault(nullptr);
  if (from._internal_has_param_file()) {
    param_file_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::NonEmptyDefault{}, from._internal_param_file(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:apollo.perception.lidar.NCutConfig)
}

void NCutConfig::SharedCtor() {
param_file_.UnsafeSetDefault(nullptr);
}

NCutConfig::~NCutConfig() {
  // @@protoc_insertion_point(destructor:apollo.perception.lidar.NCutConfig)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void NCutConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  param_file_.DestroyNoArena(nullptr);
}

void NCutConfig::ArenaDtor(void* object) {
  NCutConfig* _this = reinterpret_cast< NCutConfig* >(object);
  (void)_this;
}
void NCutConfig::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void NCutConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void NCutConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.perception.lidar.NCutConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    param_file_.ClearToDefault(::apollo::perception::lidar::NCutConfig::_i_give_permission_to_break_this_code_default_param_file_, GetArena());
     }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NCutConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string param_file = 1 [default = "./data/models/ncut/param.conf"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_param_file();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.perception.lidar.NCutConfig.param_file");
          #endif  // !NDEBUG
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* NCutConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.perception.lidar.NCutConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string param_file = 1 [default = "./data/models/ncut/param.conf"];
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_param_file().data(), static_cast<int>(this->_internal_param_file().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.lidar.NCutConfig.param_file");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_param_file(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.perception.lidar.NCutConfig)
  return target;
}

size_t NCutConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.perception.lidar.NCutConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string param_file = 1 [default = "./data/models/ncut/param.conf"];
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_param_file());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NCutConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.perception.lidar.NCutConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const NCutConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<NCutConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.perception.lidar.NCutConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.perception.lidar.NCutConfig)
    MergeFrom(*source);
  }
}

void NCutConfig::MergeFrom(const NCutConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.perception.lidar.NCutConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_param_file()) {
    _internal_set_param_file(from._internal_param_file());
  }
}

void NCutConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.perception.lidar.NCutConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NCutConfig::CopyFrom(const NCutConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.perception.lidar.NCutConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NCutConfig::IsInitialized() const {
  return true;
}

void NCutConfig::InternalSwap(NCutConfig* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  param_file_.Swap(&other->param_file_, nullptr, GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata NCutConfig::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto_getter, &descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto_once,
      file_level_metadata_modules_2fperception_2flidar_2flib_2fsegmentation_2fncut_2fproto_2fncut_5fconfig_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::perception::lidar::NCutConfig* Arena::CreateMaybeMessage< ::apollo::perception::lidar::NCutConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::perception::lidar::NCutConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
