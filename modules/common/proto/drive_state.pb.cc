// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/common/proto/drive_state.proto

#include "modules/common/proto/drive_state.pb.h"

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
namespace common {
constexpr EngageAdvice::EngageAdvice(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : reason_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , advice_(1)
{}
struct EngageAdviceDefaultTypeInternal {
  constexpr EngageAdviceDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~EngageAdviceDefaultTypeInternal() {}
  union {
    EngageAdvice _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT EngageAdviceDefaultTypeInternal _EngageAdvice_default_instance_;
}  // namespace common
}  // namespace apollo
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::common::EngageAdvice, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::EngageAdvice, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::common::EngageAdvice, advice_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::EngageAdvice, reason_),
  1,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::apollo::common::EngageAdvice)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::common::_EngageAdvice_default_instance_),
};

const char descriptor_table_protodef_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n&modules/common/proto/drive_state.proto"
  "\022\rapollo.common\"\315\001\n\014EngageAdvice\022C\n\006advi"
  "ce\030\001 \001(\0162\".apollo.common.EngageAdvice.Ad"
  "vice:\017DISALLOW_ENGAGE\022\016\n\006reason\030\002 \001(\t\"h\n"
  "\006Advice\022\013\n\007UNKNOWN\020\000\022\023\n\017DISALLOW_ENGAGE\020"
  "\001\022\023\n\017READY_TO_ENGAGE\020\002\022\020\n\014KEEP_ENGAGED\020\003"
  "\022\025\n\021PREPARE_DISENGAGE\020\004"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto = {
  false, false, 263, descriptor_table_protodef_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto, "modules/common/proto/drive_state.proto", 
  &descriptor_table_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto::offsets,
  file_level_metadata_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto, file_level_enum_descriptors_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto, file_level_service_descriptors_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto_getter() {
  return &descriptor_table_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto(&descriptor_table_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto);
namespace apollo {
namespace common {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EngageAdvice_Advice_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto);
  return file_level_enum_descriptors_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto[0];
}
bool EngageAdvice_Advice_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr EngageAdvice_Advice EngageAdvice::UNKNOWN;
constexpr EngageAdvice_Advice EngageAdvice::DISALLOW_ENGAGE;
constexpr EngageAdvice_Advice EngageAdvice::READY_TO_ENGAGE;
constexpr EngageAdvice_Advice EngageAdvice::KEEP_ENGAGED;
constexpr EngageAdvice_Advice EngageAdvice::PREPARE_DISENGAGE;
constexpr EngageAdvice_Advice EngageAdvice::Advice_MIN;
constexpr EngageAdvice_Advice EngageAdvice::Advice_MAX;
constexpr int EngageAdvice::Advice_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class EngageAdvice::_Internal {
 public:
  using HasBits = decltype(std::declval<EngageAdvice>()._has_bits_);
  static void set_has_advice(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_reason(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

EngageAdvice::EngageAdvice(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.common.EngageAdvice)
}
EngageAdvice::EngageAdvice(const EngageAdvice& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  reason_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_reason()) {
    reason_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_reason(), 
      GetArena());
  }
  advice_ = from.advice_;
  // @@protoc_insertion_point(copy_constructor:apollo.common.EngageAdvice)
}

void EngageAdvice::SharedCtor() {
reason_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
advice_ = 1;
}

EngageAdvice::~EngageAdvice() {
  // @@protoc_insertion_point(destructor:apollo.common.EngageAdvice)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void EngageAdvice::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  reason_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void EngageAdvice::ArenaDtor(void* object) {
  EngageAdvice* _this = reinterpret_cast< EngageAdvice* >(object);
  (void)_this;
}
void EngageAdvice::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void EngageAdvice::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void EngageAdvice::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.common.EngageAdvice)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      reason_.ClearNonDefaultToEmpty();
    }
    advice_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* EngageAdvice::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .apollo.common.EngageAdvice.Advice advice = 1 [default = DISALLOW_ENGAGE];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::apollo::common::EngageAdvice_Advice_IsValid(val))) {
            _internal_set_advice(static_cast<::apollo::common::EngageAdvice_Advice>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional string reason = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_reason();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.common.EngageAdvice.reason");
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

::PROTOBUF_NAMESPACE_ID::uint8* EngageAdvice::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.common.EngageAdvice)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.common.EngageAdvice.Advice advice = 1 [default = DISALLOW_ENGAGE];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_advice(), target);
  }

  // optional string reason = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_reason().data(), static_cast<int>(this->_internal_reason().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.common.EngageAdvice.reason");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_reason(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.common.EngageAdvice)
  return target;
}

size_t EngageAdvice::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.common.EngageAdvice)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string reason = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_reason());
    }

    // optional .apollo.common.EngageAdvice.Advice advice = 1 [default = DISALLOW_ENGAGE];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_advice());
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

void EngageAdvice::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.common.EngageAdvice)
  GOOGLE_DCHECK_NE(&from, this);
  const EngageAdvice* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<EngageAdvice>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.common.EngageAdvice)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.common.EngageAdvice)
    MergeFrom(*source);
  }
}

void EngageAdvice::MergeFrom(const EngageAdvice& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.common.EngageAdvice)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_reason(from._internal_reason());
    }
    if (cached_has_bits & 0x00000002u) {
      advice_ = from.advice_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void EngageAdvice::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.common.EngageAdvice)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EngageAdvice::CopyFrom(const EngageAdvice& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.common.EngageAdvice)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EngageAdvice::IsInitialized() const {
  return true;
}

void EngageAdvice::InternalSwap(EngageAdvice* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  reason_.Swap(&other->reason_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(advice_, other->advice_);
}

::PROTOBUF_NAMESPACE_ID::Metadata EngageAdvice::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto_getter, &descriptor_table_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto_once,
      file_level_metadata_modules_2fcommon_2fproto_2fdrive_5fstate_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace common
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::common::EngageAdvice* Arena::CreateMaybeMessage< ::apollo::common::EngageAdvice >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::common::EngageAdvice >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
