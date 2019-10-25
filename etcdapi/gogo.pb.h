// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gogo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_gogo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_gogo_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/descriptor.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_gogo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_gogo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_gogo_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace gogoproto {

// ===================================================================


// ===================================================================

static const int kGoprotoEnumPrefixFieldNumber = 62001;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_prefix;
static const int kGoprotoEnumStringerFieldNumber = 62021;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_stringer;
static const int kEnumStringerFieldNumber = 62022;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  enum_stringer;
static const int kEnumCustomnameFieldNumber = 62023;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  enum_customname;
static const int kEnumdeclFieldNumber = 62024;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  enumdecl;
static const int kEnumvalueCustomnameFieldNumber = 66001;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  enumvalue_customname;
static const int kGoprotoGettersAllFieldNumber = 63001;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_getters_all;
static const int kGoprotoEnumPrefixAllFieldNumber = 63002;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_prefix_all;
static const int kGoprotoStringerAllFieldNumber = 63003;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_stringer_all;
static const int kVerboseEqualAllFieldNumber = 63004;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  verbose_equal_all;
static const int kFaceAllFieldNumber = 63005;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  face_all;
static const int kGostringAllFieldNumber = 63006;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  gostring_all;
static const int kPopulateAllFieldNumber = 63007;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  populate_all;
static const int kStringerAllFieldNumber = 63008;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  stringer_all;
static const int kOnlyoneAllFieldNumber = 63009;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  onlyone_all;
static const int kEqualAllFieldNumber = 63013;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  equal_all;
static const int kDescriptionAllFieldNumber = 63014;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  description_all;
static const int kTestgenAllFieldNumber = 63015;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  testgen_all;
static const int kBenchgenAllFieldNumber = 63016;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  benchgen_all;
static const int kMarshalerAllFieldNumber = 63017;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  marshaler_all;
static const int kUnmarshalerAllFieldNumber = 63018;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  unmarshaler_all;
static const int kStableMarshalerAllFieldNumber = 63019;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  stable_marshaler_all;
static const int kSizerAllFieldNumber = 63020;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  sizer_all;
static const int kGoprotoEnumStringerAllFieldNumber = 63021;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_stringer_all;
static const int kEnumStringerAllFieldNumber = 63022;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  enum_stringer_all;
static const int kUnsafeMarshalerAllFieldNumber = 63023;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_marshaler_all;
static const int kUnsafeUnmarshalerAllFieldNumber = 63024;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_unmarshaler_all;
static const int kGoprotoExtensionsMapAllFieldNumber = 63025;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_extensions_map_all;
static const int kGoprotoUnrecognizedAllFieldNumber = 63026;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unrecognized_all;
static const int kGogoprotoImportFieldNumber = 63027;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  gogoproto_import;
static const int kProtosizerAllFieldNumber = 63028;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  protosizer_all;
static const int kCompareAllFieldNumber = 63029;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  compare_all;
static const int kTypedeclAllFieldNumber = 63030;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  typedecl_all;
static const int kEnumdeclAllFieldNumber = 63031;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  enumdecl_all;
static const int kGoprotoRegistrationFieldNumber = 63032;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_registration;
static const int kMessagenameAllFieldNumber = 63033;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  messagename_all;
static const int kGoprotoSizecacheAllFieldNumber = 63034;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_sizecache_all;
static const int kGoprotoUnkeyedAllFieldNumber = 63035;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unkeyed_all;
static const int kGoprotoGettersFieldNumber = 64001;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_getters;
static const int kGoprotoStringerFieldNumber = 64003;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_stringer;
static const int kVerboseEqualFieldNumber = 64004;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  verbose_equal;
static const int kFaceFieldNumber = 64005;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  face;
static const int kGostringFieldNumber = 64006;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  gostring;
static const int kPopulateFieldNumber = 64007;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  populate;
static const int kStringerFieldNumber = 67008;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  stringer;
static const int kOnlyoneFieldNumber = 64009;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  onlyone;
static const int kEqualFieldNumber = 64013;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  equal;
static const int kDescriptionFieldNumber = 64014;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  description;
static const int kTestgenFieldNumber = 64015;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  testgen;
static const int kBenchgenFieldNumber = 64016;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  benchgen;
static const int kMarshalerFieldNumber = 64017;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  marshaler;
static const int kUnmarshalerFieldNumber = 64018;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  unmarshaler;
static const int kStableMarshalerFieldNumber = 64019;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  stable_marshaler;
static const int kSizerFieldNumber = 64020;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  sizer;
static const int kUnsafeMarshalerFieldNumber = 64023;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_marshaler;
static const int kUnsafeUnmarshalerFieldNumber = 64024;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_unmarshaler;
static const int kGoprotoExtensionsMapFieldNumber = 64025;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_extensions_map;
static const int kGoprotoUnrecognizedFieldNumber = 64026;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unrecognized;
static const int kProtosizerFieldNumber = 64028;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  protosizer;
static const int kCompareFieldNumber = 64029;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  compare;
static const int kTypedeclFieldNumber = 64030;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  typedecl;
static const int kMessagenameFieldNumber = 64033;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  messagename;
static const int kGoprotoSizecacheFieldNumber = 64034;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_sizecache;
static const int kGoprotoUnkeyedFieldNumber = 64035;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unkeyed;
static const int kNullableFieldNumber = 65001;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  nullable;
static const int kEmbedFieldNumber = 65002;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  embed;
static const int kCustomtypeFieldNumber = 65003;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  customtype;
static const int kCustomnameFieldNumber = 65004;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  customname;
static const int kJsontagFieldNumber = 65005;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  jsontag;
static const int kMoretagsFieldNumber = 65006;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  moretags;
static const int kCasttypeFieldNumber = 65007;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  casttype;
static const int kCastkeyFieldNumber = 65008;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  castkey;
static const int kCastvalueFieldNumber = 65009;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  castvalue;
static const int kStdtimeFieldNumber = 65010;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  stdtime;
static const int kStddurationFieldNumber = 65011;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  stdduration;
static const int kWktpointerFieldNumber = 65012;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  wktpointer;

// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace gogoproto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_gogo_2eproto
