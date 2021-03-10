// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/lidar/lib/roi_filter/hdmap_roi_filter/proto/hdmap_roi_filter.proto

#include "modules/perception/lidar/lib/roi_filter/hdmap_roi_filter/proto/hdmap_roi_filter.pb.h"

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
constexpr HDMapRoiFilterConfig::HDMapRoiFilterConfig(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : extend_dist_(0)
  , no_edge_table_(false)
  , set_roi_service_(false)
  , range_(120)
  , cell_size_(0.25){}
struct HDMapRoiFilterConfigDefaultTypeInternal {
  constexpr HDMapRoiFilterConfigDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~HDMapRoiFilterConfigDefaultTypeInternal() {}
  union {
    HDMapRoiFilterConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT HDMapRoiFilterConfigDefaultTypeInternal _HDMapRoiFilterConfig_default_instance_;
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::HDMapRoiFilterConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::HDMapRoiFilterConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::HDMapRoiFilterConfig, range_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::HDMapRoiFilterConfig, cell_size_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::HDMapRoiFilterConfig, extend_dist_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::HDMapRoiFilterConfig, no_edge_table_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::HDMapRoiFilterConfig, set_roi_service_),
  3,
  4,
  0,
  1,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::apollo::perception::lidar::HDMapRoiFilterConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::perception::lidar::_HDMapRoiFilterConfig_default_instance_),
};

const char descriptor_table_protodef_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\nUmodules/perception/lidar/lib/roi_filte"
  "r/hdmap_roi_filter/proto/hdmap_roi_filte"
  "r.proto\022\027apollo.perception.lidar\"\231\001\n\024HDM"
  "apRoiFilterConfig\022\022\n\005range\030\001 \001(\001:\003120\022\027\n"
  "\tcell_size\030\002 \001(\001:\0040.25\022\026\n\013extend_dist\030\003 "
  "\001(\001:\0010\022\034\n\rno_edge_table\030\004 \001(\010:\005false\022\036\n\017"
  "set_roi_service\030\005 \001(\010:\005false"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto = {
  false, false, 268, descriptor_table_protodef_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto, "modules/perception/lidar/lib/roi_filter/hdmap_roi_filter/proto/hdmap_roi_filter.proto", 
  &descriptor_table_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto::offsets,
  file_level_metadata_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto, file_level_enum_descriptors_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto, file_level_service_descriptors_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto_getter() {
  return &descriptor_table_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto(&descriptor_table_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto);
namespace apollo {
namespace perception {
namespace lidar {

// ===================================================================

class HDMapRoiFilterConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<HDMapRoiFilterConfig>()._has_bits_);
  static void set_has_range(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_cell_size(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_extend_dist(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_no_edge_table(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_set_roi_service(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

HDMapRoiFilterConfig::HDMapRoiFilterConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.perception.lidar.HDMapRoiFilterConfig)
}
HDMapRoiFilterConfig::HDMapRoiFilterConfig(const HDMapRoiFilterConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&extend_dist_, &from.extend_dist_,
    static_cast<size_t>(reinterpret_cast<char*>(&cell_size_) -
    reinterpret_cast<char*>(&extend_dist_)) + sizeof(cell_size_));
  // @@protoc_insertion_point(copy_constructor:apollo.perception.lidar.HDMapRoiFilterConfig)
}

void HDMapRoiFilterConfig::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&extend_dist_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&set_roi_service_) -
    reinterpret_cast<char*>(&extend_dist_)) + sizeof(set_roi_service_));
range_ = 120;
cell_size_ = 0.25;
}

HDMapRoiFilterConfig::~HDMapRoiFilterConfig() {
  // @@protoc_insertion_point(destructor:apollo.perception.lidar.HDMapRoiFilterConfig)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void HDMapRoiFilterConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void HDMapRoiFilterConfig::ArenaDtor(void* object) {
  HDMapRoiFilterConfig* _this = reinterpret_cast< HDMapRoiFilterConfig* >(object);
  (void)_this;
}
void HDMapRoiFilterConfig::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void HDMapRoiFilterConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void HDMapRoiFilterConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.perception.lidar.HDMapRoiFilterConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&extend_dist_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&set_roi_service_) -
        reinterpret_cast<char*>(&extend_dist_)) + sizeof(set_roi_service_));
    range_ = 120;
    cell_size_ = 0.25;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* HDMapRoiFilterConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional double range = 1 [default = 120];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          _Internal::set_has_range(&has_bits);
          range_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double cell_size = 2 [default = 0.25];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_cell_size(&has_bits);
          cell_size_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double extend_dist = 3 [default = 0];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_extend_dist(&has_bits);
          extend_dist_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional bool no_edge_table = 4 [default = false];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_no_edge_table(&has_bits);
          no_edge_table_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool set_roi_service = 5 [default = false];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_set_roi_service(&has_bits);
          set_roi_service_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* HDMapRoiFilterConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.perception.lidar.HDMapRoiFilterConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double range = 1 [default = 120];
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_range(), target);
  }

  // optional double cell_size = 2 [default = 0.25];
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_cell_size(), target);
  }

  // optional double extend_dist = 3 [default = 0];
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_extend_dist(), target);
  }

  // optional bool no_edge_table = 4 [default = false];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->_internal_no_edge_table(), target);
  }

  // optional bool set_roi_service = 5 [default = false];
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(5, this->_internal_set_roi_service(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.perception.lidar.HDMapRoiFilterConfig)
  return target;
}

size_t HDMapRoiFilterConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.perception.lidar.HDMapRoiFilterConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional double extend_dist = 3 [default = 0];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional bool no_edge_table = 4 [default = false];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

    // optional bool set_roi_service = 5 [default = false];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

    // optional double range = 1 [default = 120];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

    // optional double cell_size = 2 [default = 0.25];
    if (cached_has_bits & 0x00000010u) {
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

void HDMapRoiFilterConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.perception.lidar.HDMapRoiFilterConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const HDMapRoiFilterConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<HDMapRoiFilterConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.perception.lidar.HDMapRoiFilterConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.perception.lidar.HDMapRoiFilterConfig)
    MergeFrom(*source);
  }
}

void HDMapRoiFilterConfig::MergeFrom(const HDMapRoiFilterConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.perception.lidar.HDMapRoiFilterConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      extend_dist_ = from.extend_dist_;
    }
    if (cached_has_bits & 0x00000002u) {
      no_edge_table_ = from.no_edge_table_;
    }
    if (cached_has_bits & 0x00000004u) {
      set_roi_service_ = from.set_roi_service_;
    }
    if (cached_has_bits & 0x00000008u) {
      range_ = from.range_;
    }
    if (cached_has_bits & 0x00000010u) {
      cell_size_ = from.cell_size_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void HDMapRoiFilterConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.perception.lidar.HDMapRoiFilterConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HDMapRoiFilterConfig::CopyFrom(const HDMapRoiFilterConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.perception.lidar.HDMapRoiFilterConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HDMapRoiFilterConfig::IsInitialized() const {
  return true;
}

void HDMapRoiFilterConfig::InternalSwap(HDMapRoiFilterConfig* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(HDMapRoiFilterConfig, set_roi_service_)
      + sizeof(HDMapRoiFilterConfig::set_roi_service_)
      - PROTOBUF_FIELD_OFFSET(HDMapRoiFilterConfig, extend_dist_)>(
          reinterpret_cast<char*>(&extend_dist_),
          reinterpret_cast<char*>(&other->extend_dist_));
  swap(range_, other->range_);
  swap(cell_size_, other->cell_size_);
}

::PROTOBUF_NAMESPACE_ID::Metadata HDMapRoiFilterConfig::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto_getter, &descriptor_table_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto_once,
      file_level_metadata_modules_2fperception_2flidar_2flib_2froi_5ffilter_2fhdmap_5froi_5ffilter_2fproto_2fhdmap_5froi_5ffilter_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::perception::lidar::HDMapRoiFilterConfig* Arena::CreateMaybeMessage< ::apollo::perception::lidar::HDMapRoiFilterConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::perception::lidar::HDMapRoiFilterConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
