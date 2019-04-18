// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kv.proto

#ifndef PROTOBUF_INCLUDED_kv_2eproto
#define PROTOBUF_INCLUDED_kv_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "gogo.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_kv_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_kv_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_kv_2eproto();
namespace mvccpb {
class Event;
class EventDefaultTypeInternal;
extern EventDefaultTypeInternal _Event_default_instance_;
class KeyValue;
class KeyValueDefaultTypeInternal;
extern KeyValueDefaultTypeInternal _KeyValue_default_instance_;
}  // namespace mvccpb
namespace google {
namespace protobuf {
template<> ::mvccpb::Event* Arena::CreateMaybeMessage<::mvccpb::Event>(Arena*);
template<> ::mvccpb::KeyValue* Arena::CreateMaybeMessage<::mvccpb::KeyValue>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace mvccpb {

enum Event_EventType {
  Event_EventType_PUT = 0,
  Event_EventType_DELETE = 1,
  Event_EventType_Event_EventType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  Event_EventType_Event_EventType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool Event_EventType_IsValid(int value);
const Event_EventType Event_EventType_EventType_MIN = Event_EventType_PUT;
const Event_EventType Event_EventType_EventType_MAX = Event_EventType_DELETE;
const int Event_EventType_EventType_ARRAYSIZE = Event_EventType_EventType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Event_EventType_descriptor();
inline const ::std::string& Event_EventType_Name(Event_EventType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Event_EventType_descriptor(), value);
}
inline bool Event_EventType_Parse(
    const ::std::string& name, Event_EventType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Event_EventType>(
    Event_EventType_descriptor(), name, value);
}
// ===================================================================

class KeyValue :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mvccpb.KeyValue) */ {
 public:
  KeyValue();
  virtual ~KeyValue();

  KeyValue(const KeyValue& from);

  inline KeyValue& operator=(const KeyValue& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  KeyValue(KeyValue&& from) noexcept
    : KeyValue() {
    *this = ::std::move(from);
  }

  inline KeyValue& operator=(KeyValue&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const KeyValue& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const KeyValue* internal_default_instance() {
    return reinterpret_cast<const KeyValue*>(
               &_KeyValue_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(KeyValue* other);
  friend void swap(KeyValue& a, KeyValue& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline KeyValue* New() const final {
    return CreateMaybeMessage<KeyValue>(nullptr);
  }

  KeyValue* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<KeyValue>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const KeyValue& from);
  void MergeFrom(const KeyValue& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(KeyValue* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const void* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // bytes value = 5;
  void clear_value();
  static const int kValueFieldNumber = 5;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const void* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // int64 create_revision = 2;
  void clear_create_revision();
  static const int kCreateRevisionFieldNumber = 2;
  ::google::protobuf::int64 create_revision() const;
  void set_create_revision(::google::protobuf::int64 value);

  // int64 mod_revision = 3;
  void clear_mod_revision();
  static const int kModRevisionFieldNumber = 3;
  ::google::protobuf::int64 mod_revision() const;
  void set_mod_revision(::google::protobuf::int64 value);

  // int64 version = 4;
  void clear_version();
  static const int kVersionFieldNumber = 4;
  ::google::protobuf::int64 version() const;
  void set_version(::google::protobuf::int64 value);

  // int64 lease = 6;
  void clear_lease();
  static const int kLeaseFieldNumber = 6;
  ::google::protobuf::int64 lease() const;
  void set_lease(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:mvccpb.KeyValue)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  ::google::protobuf::int64 create_revision_;
  ::google::protobuf::int64 mod_revision_;
  ::google::protobuf::int64 version_;
  ::google::protobuf::int64 lease_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_kv_2eproto;
};
// -------------------------------------------------------------------

class Event :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mvccpb.Event) */ {
 public:
  Event();
  virtual ~Event();

  Event(const Event& from);

  inline Event& operator=(const Event& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Event(Event&& from) noexcept
    : Event() {
    *this = ::std::move(from);
  }

  inline Event& operator=(Event&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Event& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Event* internal_default_instance() {
    return reinterpret_cast<const Event*>(
               &_Event_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Event* other);
  friend void swap(Event& a, Event& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Event* New() const final {
    return CreateMaybeMessage<Event>(nullptr);
  }

  Event* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Event>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Event& from);
  void MergeFrom(const Event& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Event* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Event_EventType EventType;
  static const EventType PUT =
    Event_EventType_PUT;
  static const EventType DELETE =
    Event_EventType_DELETE;
  static inline bool EventType_IsValid(int value) {
    return Event_EventType_IsValid(value);
  }
  static const EventType EventType_MIN =
    Event_EventType_EventType_MIN;
  static const EventType EventType_MAX =
    Event_EventType_EventType_MAX;
  static const int EventType_ARRAYSIZE =
    Event_EventType_EventType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  EventType_descriptor() {
    return Event_EventType_descriptor();
  }
  static inline const ::std::string& EventType_Name(EventType value) {
    return Event_EventType_Name(value);
  }
  static inline bool EventType_Parse(const ::std::string& name,
      EventType* value) {
    return Event_EventType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .mvccpb.KeyValue kv = 2;
  bool has_kv() const;
  void clear_kv();
  static const int kKvFieldNumber = 2;
  const ::mvccpb::KeyValue& kv() const;
  ::mvccpb::KeyValue* release_kv();
  ::mvccpb::KeyValue* mutable_kv();
  void set_allocated_kv(::mvccpb::KeyValue* kv);

  // .mvccpb.KeyValue prev_kv = 3;
  bool has_prev_kv() const;
  void clear_prev_kv();
  static const int kPrevKvFieldNumber = 3;
  const ::mvccpb::KeyValue& prev_kv() const;
  ::mvccpb::KeyValue* release_prev_kv();
  ::mvccpb::KeyValue* mutable_prev_kv();
  void set_allocated_prev_kv(::mvccpb::KeyValue* prev_kv);

  // .mvccpb.Event.EventType type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::mvccpb::Event_EventType type() const;
  void set_type(::mvccpb::Event_EventType value);

  // @@protoc_insertion_point(class_scope:mvccpb.Event)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::mvccpb::KeyValue* kv_;
  ::mvccpb::KeyValue* prev_kv_;
  int type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_kv_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// KeyValue

// bytes key = 1;
inline void KeyValue::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& KeyValue::key() const {
  // @@protoc_insertion_point(field_get:mvccpb.KeyValue.key)
  return key_.GetNoArena();
}
inline void KeyValue::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mvccpb.KeyValue.key)
}
#if LANG_CXX11
inline void KeyValue::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mvccpb.KeyValue.key)
}
#endif
inline void KeyValue::set_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mvccpb.KeyValue.key)
}
inline void KeyValue::set_key(const void* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mvccpb.KeyValue.key)
}
inline ::std::string* KeyValue::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:mvccpb.KeyValue.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* KeyValue::release_key() {
  // @@protoc_insertion_point(field_release:mvccpb.KeyValue.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void KeyValue::set_allocated_key(::std::string* key) {
  if (key != nullptr) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:mvccpb.KeyValue.key)
}

// int64 create_revision = 2;
inline void KeyValue::clear_create_revision() {
  create_revision_ = PROTOBUF_LONGLONG(0);
}
inline ::google::protobuf::int64 KeyValue::create_revision() const {
  // @@protoc_insertion_point(field_get:mvccpb.KeyValue.create_revision)
  return create_revision_;
}
inline void KeyValue::set_create_revision(::google::protobuf::int64 value) {
  
  create_revision_ = value;
  // @@protoc_insertion_point(field_set:mvccpb.KeyValue.create_revision)
}

// int64 mod_revision = 3;
inline void KeyValue::clear_mod_revision() {
  mod_revision_ = PROTOBUF_LONGLONG(0);
}
inline ::google::protobuf::int64 KeyValue::mod_revision() const {
  // @@protoc_insertion_point(field_get:mvccpb.KeyValue.mod_revision)
  return mod_revision_;
}
inline void KeyValue::set_mod_revision(::google::protobuf::int64 value) {
  
  mod_revision_ = value;
  // @@protoc_insertion_point(field_set:mvccpb.KeyValue.mod_revision)
}

// int64 version = 4;
inline void KeyValue::clear_version() {
  version_ = PROTOBUF_LONGLONG(0);
}
inline ::google::protobuf::int64 KeyValue::version() const {
  // @@protoc_insertion_point(field_get:mvccpb.KeyValue.version)
  return version_;
}
inline void KeyValue::set_version(::google::protobuf::int64 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:mvccpb.KeyValue.version)
}

// bytes value = 5;
inline void KeyValue::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& KeyValue::value() const {
  // @@protoc_insertion_point(field_get:mvccpb.KeyValue.value)
  return value_.GetNoArena();
}
inline void KeyValue::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mvccpb.KeyValue.value)
}
#if LANG_CXX11
inline void KeyValue::set_value(::std::string&& value) {
  
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mvccpb.KeyValue.value)
}
#endif
inline void KeyValue::set_value(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mvccpb.KeyValue.value)
}
inline void KeyValue::set_value(const void* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mvccpb.KeyValue.value)
}
inline ::std::string* KeyValue::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:mvccpb.KeyValue.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* KeyValue::release_value() {
  // @@protoc_insertion_point(field_release:mvccpb.KeyValue.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void KeyValue::set_allocated_value(::std::string* value) {
  if (value != nullptr) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:mvccpb.KeyValue.value)
}

// int64 lease = 6;
inline void KeyValue::clear_lease() {
  lease_ = PROTOBUF_LONGLONG(0);
}
inline ::google::protobuf::int64 KeyValue::lease() const {
  // @@protoc_insertion_point(field_get:mvccpb.KeyValue.lease)
  return lease_;
}
inline void KeyValue::set_lease(::google::protobuf::int64 value) {
  
  lease_ = value;
  // @@protoc_insertion_point(field_set:mvccpb.KeyValue.lease)
}

// -------------------------------------------------------------------

// Event

// .mvccpb.Event.EventType type = 1;
inline void Event::clear_type() {
  type_ = 0;
}
inline ::mvccpb::Event_EventType Event::type() const {
  // @@protoc_insertion_point(field_get:mvccpb.Event.type)
  return static_cast< ::mvccpb::Event_EventType >(type_);
}
inline void Event::set_type(::mvccpb::Event_EventType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:mvccpb.Event.type)
}

// .mvccpb.KeyValue kv = 2;
inline bool Event::has_kv() const {
  return this != internal_default_instance() && kv_ != nullptr;
}
inline void Event::clear_kv() {
  if (GetArenaNoVirtual() == nullptr && kv_ != nullptr) {
    delete kv_;
  }
  kv_ = nullptr;
}
inline const ::mvccpb::KeyValue& Event::kv() const {
  const ::mvccpb::KeyValue* p = kv_;
  // @@protoc_insertion_point(field_get:mvccpb.Event.kv)
  return p != nullptr ? *p : *reinterpret_cast<const ::mvccpb::KeyValue*>(
      &::mvccpb::_KeyValue_default_instance_);
}
inline ::mvccpb::KeyValue* Event::release_kv() {
  // @@protoc_insertion_point(field_release:mvccpb.Event.kv)
  
  ::mvccpb::KeyValue* temp = kv_;
  kv_ = nullptr;
  return temp;
}
inline ::mvccpb::KeyValue* Event::mutable_kv() {
  
  if (kv_ == nullptr) {
    auto* p = CreateMaybeMessage<::mvccpb::KeyValue>(GetArenaNoVirtual());
    kv_ = p;
  }
  // @@protoc_insertion_point(field_mutable:mvccpb.Event.kv)
  return kv_;
}
inline void Event::set_allocated_kv(::mvccpb::KeyValue* kv) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete kv_;
  }
  if (kv) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      kv = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, kv, submessage_arena);
    }
    
  } else {
    
  }
  kv_ = kv;
  // @@protoc_insertion_point(field_set_allocated:mvccpb.Event.kv)
}

// .mvccpb.KeyValue prev_kv = 3;
inline bool Event::has_prev_kv() const {
  return this != internal_default_instance() && prev_kv_ != nullptr;
}
inline void Event::clear_prev_kv() {
  if (GetArenaNoVirtual() == nullptr && prev_kv_ != nullptr) {
    delete prev_kv_;
  }
  prev_kv_ = nullptr;
}
inline const ::mvccpb::KeyValue& Event::prev_kv() const {
  const ::mvccpb::KeyValue* p = prev_kv_;
  // @@protoc_insertion_point(field_get:mvccpb.Event.prev_kv)
  return p != nullptr ? *p : *reinterpret_cast<const ::mvccpb::KeyValue*>(
      &::mvccpb::_KeyValue_default_instance_);
}
inline ::mvccpb::KeyValue* Event::release_prev_kv() {
  // @@protoc_insertion_point(field_release:mvccpb.Event.prev_kv)
  
  ::mvccpb::KeyValue* temp = prev_kv_;
  prev_kv_ = nullptr;
  return temp;
}
inline ::mvccpb::KeyValue* Event::mutable_prev_kv() {
  
  if (prev_kv_ == nullptr) {
    auto* p = CreateMaybeMessage<::mvccpb::KeyValue>(GetArenaNoVirtual());
    prev_kv_ = p;
  }
  // @@protoc_insertion_point(field_mutable:mvccpb.Event.prev_kv)
  return prev_kv_;
}
inline void Event::set_allocated_prev_kv(::mvccpb::KeyValue* prev_kv) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete prev_kv_;
  }
  if (prev_kv) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      prev_kv = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, prev_kv, submessage_arena);
    }
    
  } else {
    
  }
  prev_kv_ = prev_kv;
  // @@protoc_insertion_point(field_set_allocated:mvccpb.Event.prev_kv)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace mvccpb

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::mvccpb::Event_EventType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::mvccpb::Event_EventType>() {
  return ::mvccpb::Event_EventType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_kv_2eproto
