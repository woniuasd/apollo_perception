// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/lidar/lib/object_filter_bank/proto/filter_bank_config.proto

#include "modules/perception/lidar/lib/object_filter_bank/proto/filter_bank_config.pb.h"

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
constexpr FilterBankConfig::FilterBankConfig(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : filter_name_(){}
struct FilterBankConfigDefaultTypeInternal {
  constexpr FilterBankConfigDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~FilterBankConfigDefaultTypeInternal() {}
  union {
    FilterBankConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT FilterBankConfigDefaultTypeInternal _FilterBankConfig_default_instance_;
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::FilterBankConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::FilterBankConfig, filter_name_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::apollo::perception::lidar::FilterBankConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::perception::lidar::_FilterBankConfig_default_instance_),
};

const char descriptor_table_protodef_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\nNmodules/perception/lidar/lib/object_fi"
  "lter_bank/proto/filter_bank_config.proto"
  "\022\027apollo.perception.lidar\"\'\n\020FilterBankC"
  "onfig\022\023\n\013filter_name\030\001 \003(\t"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto = {
  false, false, 146, descriptor_table_protodef_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto, "modules/perception/lidar/lib/object_filter_bank/proto/filter_bank_config.proto", 
  &descriptor_table_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto::offsets,
  file_level_metadata_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto, file_level_enum_descriptors_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto, file_level_service_descriptors_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto_getter() {
  return &descriptor_table_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto(&descriptor_table_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto);
namespace apollo {
namespace perception {
namespace lidar {

// ===================================================================

class FilterBankConfig::_Internal {
 public:
};

FilterBankConfig::FilterBankConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  filter_name_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.perception.lidar.FilterBankConfig)
}
FilterBankConfig::FilterBankConfig(const FilterBankConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      filter_name_(from.filter_name_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:apollo.perception.lidar.FilterBankConfig)
}

void FilterBankConfig::SharedCtor() {
}

FilterBankConfig::~FilterBankConfig() {
  // @@protoc_insertion_point(destructor:apollo.perception.lidar.FilterBankConfig)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void FilterBankConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void FilterBankConfig::ArenaDtor(void* object) {
  FilterBankConfig* _this = reinterpret_cast< FilterBankConfig* >(object);
  (void)_this;
}
void FilterBankConfig::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void FilterBankConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FilterBankConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.perception.lidar.FilterBankConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  filter_name_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FilterBankConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated string filter_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_filter_name();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            #ifndef NDEBUG
            ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.perception.lidar.FilterBankConfig.filter_name");
            #endif  // !NDEBUG
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* FilterBankConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.perception.lidar.FilterBankConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string filter_name = 1;
  for (int i = 0, n = this->_internal_filter_name_size(); i < n; i++) {
    const auto& s = this->_internal_filter_name(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.lidar.FilterBankConfig.filter_name");
    target = stream->WriteString(1, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.perception.lidar.FilterBankConfig)
  return target;
}

size_t FilterBankConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.perception.lidar.FilterBankConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string filter_name = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(filter_name_.size());
  for (int i = 0, n = filter_name_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      filter_name_.Get(i));
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FilterBankConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.perception.lidar.FilterBankConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const FilterBankConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<FilterBankConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.perception.lidar.FilterBankConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.perception.lidar.FilterBankConfig)
    MergeFrom(*source);
  }
}

void FilterBankConfig::MergeFrom(const FilterBankConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.perception.lidar.FilterBankConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  filter_name_.MergeFrom(from.filter_name_);
}

void FilterBankConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.perception.lidar.FilterBankConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FilterBankConfig::CopyFrom(const FilterBankConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.perception.lidar.FilterBankConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FilterBankConfig::IsInitialized() const {
  return true;
}

void FilterBankConfig::InternalSwap(FilterBankConfig* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  filter_name_.InternalSwap(&other->filter_name_);
}

::PROTOBUF_NAMESPACE_ID::Metadata FilterBankConfig::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto_getter, &descriptor_table_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto_once,
      file_level_metadata_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::perception::lidar::FilterBankConfig* Arena::CreateMaybeMessage< ::apollo::perception::lidar::FilterBankConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::perception::lidar::FilterBankConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
