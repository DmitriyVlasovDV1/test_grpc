// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api_walker.proto

#include "api_walker.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace apiwalker {
template <typename>
PROTOBUF_CONSTEXPR RequestMessage::RequestMessage(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.message_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct RequestMessageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RequestMessageDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~RequestMessageDefaultTypeInternal() {}
  union {
    RequestMessage _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RequestMessageDefaultTypeInternal _RequestMessage_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR ReplyMessage::ReplyMessage(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.message_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ReplyMessageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ReplyMessageDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ReplyMessageDefaultTypeInternal() {}
  union {
    ReplyMessage _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ReplyMessageDefaultTypeInternal _ReplyMessage_default_instance_;
}  // namespace apiwalker
static ::_pb::Metadata file_level_metadata_api_5fwalker_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_api_5fwalker_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_api_5fwalker_2eproto = nullptr;
const ::uint32_t TableStruct_api_5fwalker_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::apiwalker::RequestMessage, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::apiwalker::RequestMessage, _impl_.message_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::apiwalker::ReplyMessage, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::apiwalker::ReplyMessage, _impl_.message_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::apiwalker::RequestMessage)},
        { 9, -1, -1, sizeof(::apiwalker::ReplyMessage)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::apiwalker::_RequestMessage_default_instance_._instance,
    &::apiwalker::_ReplyMessage_default_instance_._instance,
};
const char descriptor_table_protodef_api_5fwalker_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\020api_walker.proto\022\tapiwalker\"!\n\016Request"
    "Message\022\017\n\007message\030\001 \001(\t\"\037\n\014ReplyMessage"
    "\022\017\n\007message\030\001 \001(\t2M\n\tApiWalker\022@\n\010GetRep"
    "ly\022\031.apiwalker.RequestMessage\032\027.apiwalke"
    "r.ReplyMessage\"\000b\006proto3"
};
static ::absl::once_flag descriptor_table_api_5fwalker_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_api_5fwalker_2eproto = {
    false,
    false,
    184,
    descriptor_table_protodef_api_5fwalker_2eproto,
    "api_walker.proto",
    &descriptor_table_api_5fwalker_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_api_5fwalker_2eproto::offsets,
    file_level_metadata_api_5fwalker_2eproto,
    file_level_enum_descriptors_api_5fwalker_2eproto,
    file_level_service_descriptors_api_5fwalker_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_api_5fwalker_2eproto_getter() {
  return &descriptor_table_api_5fwalker_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_api_5fwalker_2eproto(&descriptor_table_api_5fwalker_2eproto);
namespace apiwalker {
// ===================================================================

class RequestMessage::_Internal {
 public:
};

RequestMessage::RequestMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:apiwalker.RequestMessage)
}
RequestMessage::RequestMessage(const RequestMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  RequestMessage* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.message_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.message_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_message().empty()) {
    _this->_impl_.message_.Set(from._internal_message(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:apiwalker.RequestMessage)
}

inline void RequestMessage::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.message_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.message_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

RequestMessage::~RequestMessage() {
  // @@protoc_insertion_point(destructor:apiwalker.RequestMessage)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void RequestMessage::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.message_.Destroy();
}

void RequestMessage::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void RequestMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:apiwalker.RequestMessage)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.message_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RequestMessage::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string message = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_message();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "apiwalker.RequestMessage.message"));
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* RequestMessage::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apiwalker.RequestMessage)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    const std::string& _s = this->_internal_message();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "apiwalker.RequestMessage.message");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apiwalker.RequestMessage)
  return target;
}

::size_t RequestMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apiwalker.RequestMessage)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_message());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RequestMessage::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    RequestMessage::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RequestMessage::GetClassData() const { return &_class_data_; }


void RequestMessage::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<RequestMessage*>(&to_msg);
  auto& from = static_cast<const RequestMessage&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:apiwalker.RequestMessage)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_message().empty()) {
    _this->_internal_set_message(from._internal_message());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RequestMessage::CopyFrom(const RequestMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apiwalker.RequestMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestMessage::IsInitialized() const {
  return true;
}

void RequestMessage::InternalSwap(RequestMessage* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.message_, lhs_arena,
                                       &other->_impl_.message_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata RequestMessage::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_api_5fwalker_2eproto_getter, &descriptor_table_api_5fwalker_2eproto_once,
      file_level_metadata_api_5fwalker_2eproto[0]);
}
// ===================================================================

class ReplyMessage::_Internal {
 public:
};

ReplyMessage::ReplyMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:apiwalker.ReplyMessage)
}
ReplyMessage::ReplyMessage(const ReplyMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ReplyMessage* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.message_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.message_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_message().empty()) {
    _this->_impl_.message_.Set(from._internal_message(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:apiwalker.ReplyMessage)
}

inline void ReplyMessage::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.message_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.message_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ReplyMessage::~ReplyMessage() {
  // @@protoc_insertion_point(destructor:apiwalker.ReplyMessage)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ReplyMessage::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.message_.Destroy();
}

void ReplyMessage::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ReplyMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:apiwalker.ReplyMessage)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.message_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ReplyMessage::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string message = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_message();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "apiwalker.ReplyMessage.message"));
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* ReplyMessage::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apiwalker.ReplyMessage)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    const std::string& _s = this->_internal_message();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "apiwalker.ReplyMessage.message");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apiwalker.ReplyMessage)
  return target;
}

::size_t ReplyMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apiwalker.ReplyMessage)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_message());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ReplyMessage::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ReplyMessage::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ReplyMessage::GetClassData() const { return &_class_data_; }


void ReplyMessage::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ReplyMessage*>(&to_msg);
  auto& from = static_cast<const ReplyMessage&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:apiwalker.ReplyMessage)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_message().empty()) {
    _this->_internal_set_message(from._internal_message());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ReplyMessage::CopyFrom(const ReplyMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apiwalker.ReplyMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReplyMessage::IsInitialized() const {
  return true;
}

void ReplyMessage::InternalSwap(ReplyMessage* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.message_, lhs_arena,
                                       &other->_impl_.message_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata ReplyMessage::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_api_5fwalker_2eproto_getter, &descriptor_table_api_5fwalker_2eproto_once,
      file_level_metadata_api_5fwalker_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace apiwalker
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apiwalker::RequestMessage*
Arena::CreateMaybeMessage< ::apiwalker::RequestMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apiwalker::RequestMessage >(arena);
}
template<> PROTOBUF_NOINLINE ::apiwalker::ReplyMessage*
Arena::CreateMaybeMessage< ::apiwalker::ReplyMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apiwalker::ReplyMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
