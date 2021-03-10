// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber/proto/run_mode_conf.proto

#include "cyber/proto/run_mode_conf.pb.h"

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
namespace cyber {
namespace proto {
constexpr RunModeConf::RunModeConf(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : run_mode_(0)

  , clock_mode_(0)
{}
struct RunModeConfDefaultTypeInternal {
  constexpr RunModeConfDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~RunModeConfDefaultTypeInternal() {}
  union {
    RunModeConf _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT RunModeConfDefaultTypeInternal _RunModeConf_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_cyber_2fproto_2frun_5fmode_5fconf_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_cyber_2fproto_2frun_5fmode_5fconf_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_cyber_2fproto_2frun_5fmode_5fconf_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_cyber_2fproto_2frun_5fmode_5fconf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::RunModeConf, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::RunModeConf, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::RunModeConf, run_mode_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::RunModeConf, clock_mode_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::apollo::cyber::proto::RunModeConf)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::cyber::proto::_RunModeConf_default_instance_),
};

const char descriptor_table_protodef_cyber_2fproto_2frun_5fmode_5fconf_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\037cyber/proto/run_mode_conf.proto\022\022apoll"
  "o.cyber.proto\"\211\001\n\013RunModeConf\022;\n\010run_mod"
  "e\030\001 \001(\0162\033.apollo.cyber.proto.RunMode:\014MO"
  "DE_REALITY\022=\n\nclock_mode\030\002 \001(\0162\035.apollo."
  "cyber.proto.ClockMode:\nMODE_CYBER*0\n\007Run"
  "Mode\022\020\n\014MODE_REALITY\020\000\022\023\n\017MODE_SIMULATIO"
  "N\020\001**\n\tClockMode\022\016\n\nMODE_CYBER\020\000\022\r\n\tMODE"
  "_MOCK\020\001"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_cyber_2fproto_2frun_5fmode_5fconf_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cyber_2fproto_2frun_5fmode_5fconf_2eproto = {
  false, false, 287, descriptor_table_protodef_cyber_2fproto_2frun_5fmode_5fconf_2eproto, "cyber/proto/run_mode_conf.proto", 
  &descriptor_table_cyber_2fproto_2frun_5fmode_5fconf_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_cyber_2fproto_2frun_5fmode_5fconf_2eproto::offsets,
  file_level_metadata_cyber_2fproto_2frun_5fmode_5fconf_2eproto, file_level_enum_descriptors_cyber_2fproto_2frun_5fmode_5fconf_2eproto, file_level_service_descriptors_cyber_2fproto_2frun_5fmode_5fconf_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_cyber_2fproto_2frun_5fmode_5fconf_2eproto_getter() {
  return &descriptor_table_cyber_2fproto_2frun_5fmode_5fconf_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_cyber_2fproto_2frun_5fmode_5fconf_2eproto(&descriptor_table_cyber_2fproto_2frun_5fmode_5fconf_2eproto);
namespace apollo {
namespace cyber {
namespace proto {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RunMode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_cyber_2fproto_2frun_5fmode_5fconf_2eproto);
  return file_level_enum_descriptors_cyber_2fproto_2frun_5fmode_5fconf_2eproto[0];
}
bool RunMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ClockMode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_cyber_2fproto_2frun_5fmode_5fconf_2eproto);
  return file_level_enum_descriptors_cyber_2fproto_2frun_5fmode_5fconf_2eproto[1];
}
bool ClockMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class RunModeConf::_Internal {
 public:
  using HasBits = decltype(std::declval<RunModeConf>()._has_bits_);
  static void set_has_run_mode(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_clock_mode(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

RunModeConf::RunModeConf(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.cyber.proto.RunModeConf)
}
RunModeConf::RunModeConf(const RunModeConf& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&run_mode_, &from.run_mode_,
    static_cast<size_t>(reinterpret_cast<char*>(&clock_mode_) -
    reinterpret_cast<char*>(&run_mode_)) + sizeof(clock_mode_));
  // @@protoc_insertion_point(copy_constructor:apollo.cyber.proto.RunModeConf)
}

void RunModeConf::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&run_mode_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&clock_mode_) -
    reinterpret_cast<char*>(&run_mode_)) + sizeof(clock_mode_));
}

RunModeConf::~RunModeConf() {
  // @@protoc_insertion_point(destructor:apollo.cyber.proto.RunModeConf)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void RunModeConf::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void RunModeConf::ArenaDtor(void* object) {
  RunModeConf* _this = reinterpret_cast< RunModeConf* >(object);
  (void)_this;
}
void RunModeConf::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RunModeConf::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void RunModeConf::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.cyber.proto.RunModeConf)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&run_mode_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&clock_mode_) -
        reinterpret_cast<char*>(&run_mode_)) + sizeof(clock_mode_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RunModeConf::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .apollo.cyber.proto.RunMode run_mode = 1 [default = MODE_REALITY];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::apollo::cyber::proto::RunMode_IsValid(val))) {
            _internal_set_run_mode(static_cast<::apollo::cyber::proto::RunMode>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional .apollo.cyber.proto.ClockMode clock_mode = 2 [default = MODE_CYBER];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::apollo::cyber::proto::ClockMode_IsValid(val))) {
            _internal_set_clock_mode(static_cast<::apollo::cyber::proto::ClockMode>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
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

::PROTOBUF_NAMESPACE_ID::uint8* RunModeConf::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.cyber.proto.RunModeConf)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.cyber.proto.RunMode run_mode = 1 [default = MODE_REALITY];
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_run_mode(), target);
  }

  // optional .apollo.cyber.proto.ClockMode clock_mode = 2 [default = MODE_CYBER];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_clock_mode(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.cyber.proto.RunModeConf)
  return target;
}

size_t RunModeConf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.cyber.proto.RunModeConf)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .apollo.cyber.proto.RunMode run_mode = 1 [default = MODE_REALITY];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_run_mode());
    }

    // optional .apollo.cyber.proto.ClockMode clock_mode = 2 [default = MODE_CYBER];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_clock_mode());
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

void RunModeConf::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.cyber.proto.RunModeConf)
  GOOGLE_DCHECK_NE(&from, this);
  const RunModeConf* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RunModeConf>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.cyber.proto.RunModeConf)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.cyber.proto.RunModeConf)
    MergeFrom(*source);
  }
}

void RunModeConf::MergeFrom(const RunModeConf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.cyber.proto.RunModeConf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      run_mode_ = from.run_mode_;
    }
    if (cached_has_bits & 0x00000002u) {
      clock_mode_ = from.clock_mode_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void RunModeConf::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.cyber.proto.RunModeConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RunModeConf::CopyFrom(const RunModeConf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.cyber.proto.RunModeConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RunModeConf::IsInitialized() const {
  return true;
}

void RunModeConf::InternalSwap(RunModeConf* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RunModeConf, clock_mode_)
      + sizeof(RunModeConf::clock_mode_)
      - PROTOBUF_FIELD_OFFSET(RunModeConf, run_mode_)>(
          reinterpret_cast<char*>(&run_mode_),
          reinterpret_cast<char*>(&other->run_mode_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RunModeConf::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_cyber_2fproto_2frun_5fmode_5fconf_2eproto_getter, &descriptor_table_cyber_2fproto_2frun_5fmode_5fconf_2eproto_once,
      file_level_metadata_cyber_2fproto_2frun_5fmode_5fconf_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::cyber::proto::RunModeConf* Arena::CreateMaybeMessage< ::apollo::cyber::proto::RunModeConf >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::cyber::proto::RunModeConf >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
