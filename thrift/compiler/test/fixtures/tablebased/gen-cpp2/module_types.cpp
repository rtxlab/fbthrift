/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/tablebased/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/tablebased/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/tablebased/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::test::fixtures::tablebased::ExampleEnum>::size;
folly::Range<::test::fixtures::tablebased::ExampleEnum const*> const TEnumTraits<::test::fixtures::tablebased::ExampleEnum>::values = folly::range(TEnumDataStorage<::test::fixtures::tablebased::ExampleEnum>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::test::fixtures::tablebased::ExampleEnum>::names = folly::range(TEnumDataStorage<::test::fixtures::tablebased::ExampleEnum>::names);

char const* TEnumTraits<::test::fixtures::tablebased::ExampleEnum>::findName(type value) {
  using factory = ::test::fixtures::tablebased::_ExampleEnum_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::test::fixtures::tablebased::ExampleEnum>::findValue(char const* name, type* out) {
  using factory = ::test::fixtures::tablebased::_ExampleEnum_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace test { namespace fixtures { namespace tablebased {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _ExampleEnum_EnumMapFactory::ValuesToNamesMapType _ExampleEnum_VALUES_TO_NAMES = _ExampleEnum_EnumMapFactory::makeValuesToNamesMap();
const _ExampleEnum_EnumMapFactory::NamesToValuesMapType _ExampleEnum_NAMES_TO_VALUES = _ExampleEnum_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

}}} // test::fixtures::tablebased

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::test::fixtures::tablebased::TrivialTypesStruct>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) noexcept {
  using TType = apache::thrift::protocol::TType;
  constexpr size_t _size = 5;
  static constexpr folly::StringPiece _names[] = {
    "fieldA",
    "fieldB",
    "fieldC",
    "fieldD",
    "fieldE",
  };
  static constexpr int16_t _ids[] = {
    1,
    2,
    3,
    4,
    5,
  };
  static constexpr TType _types[] = {
    TType::T_I32,
    TType::T_STRING,
    TType::T_STRING,
    TType::T_STRING,
    TType::T_I32,
  };
  static constexpr st::translate_field_name_table
      table{_size, _names, _ids, _types};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace test { namespace fixtures { namespace tablebased {

TrivialTypesStruct::TrivialTypesStruct(const TrivialTypesStruct& srcObj) {
  fieldA = srcObj.fieldA;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldA = srcObj.__isset.fieldA;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldB = srcObj.fieldB;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldB = srcObj.__isset.fieldB;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldC = srcObj.fieldC;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldC = srcObj.__isset.fieldC;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  if (srcObj.fieldD) fieldD = srcObj.fieldD->clone();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldD = srcObj.__isset.fieldD;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldE = srcObj.fieldE;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldE = srcObj.__isset.fieldE;
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

TrivialTypesStruct& TrivialTypesStruct::operator=(const TrivialTypesStruct& src) {
  TrivialTypesStruct tmp(src);
  swap(*this, tmp);
  return *this;
}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
TrivialTypesStruct::TrivialTypesStruct() :
      fieldA(0),
      fieldE( ::test::fixtures::tablebased::ExampleEnum::ZERO) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END


TrivialTypesStruct::~TrivialTypesStruct() {}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
TrivialTypesStruct::TrivialTypesStruct(apache::thrift::FragileConstructor, int32_t fieldA__arg, ::std::string fieldB__arg, ::std::string fieldC__arg,  ::test::fixtures::tablebased::IOBufPtr fieldD__arg,  ::test::fixtures::tablebased::ExampleEnum fieldE__arg) :
    fieldA(std::move(fieldA__arg)),
    fieldB(std::move(fieldB__arg)),
    fieldC(std::move(fieldC__arg)),
    fieldD(std::move(fieldD__arg)),
    fieldE(std::move(fieldE__arg)) {
  __isset.fieldA = true;
  __isset.fieldB = true;
  __isset.fieldC = true;
  __isset.fieldD = true;
  __isset.fieldE = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void TrivialTypesStruct::__clear() {
  // clear all fields
  fieldA = 0;
  fieldB = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  fieldC = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  fieldD = apache::thrift::StringTraits< std::unique_ptr<folly::IOBuf>>::fromStringLiteral("");
  fieldE =  ::test::fixtures::tablebased::ExampleEnum::ZERO;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool TrivialTypesStruct::operator==(const TrivialTypesStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (lhs.fieldA_ref() != rhs.fieldA_ref()) {
    return false;
  }
  if (lhs.fieldB_ref() != rhs.fieldB_ref()) {
    return false;
  }
  if (lhs.fieldC_ref().has_value() != rhs.fieldC_ref().has_value()) {
    return false;
  }
  if (lhs.fieldC_ref().has_value()) {
    if (!apache::thrift::StringTraits<std::string>::isEqual(lhs.fieldC, rhs.fieldC)) {
      return false;
    }
  }
  if (lhs.fieldD_ref().has_value() != rhs.fieldD_ref().has_value()) {
    return false;
  }
  if (lhs.fieldD_ref().has_value()) {
    if (!apache::thrift::StringTraits<std::unique_ptr<folly::IOBuf>>::isEqual(lhs.fieldD, rhs.fieldD)) {
      return false;
    }
  }
  if (!(lhs.fieldE == rhs.fieldE)) {
    return false;
  }
  return true;
}

bool TrivialTypesStruct::operator<(const TrivialTypesStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (lhs.fieldA_ref() != rhs.fieldA_ref()) {
    return lhs.fieldA_ref() < rhs.fieldA_ref();
  }
  if (lhs.fieldB_ref() != rhs.fieldB_ref()) {
    return lhs.fieldB_ref() < rhs.fieldB_ref();
  }
  if (lhs.fieldC_ref().has_value() != rhs.fieldC_ref().has_value()) {
    return lhs.fieldC_ref().has_value() < rhs.fieldC_ref().has_value();
  }
  if (lhs.fieldC_ref().has_value()) {
    if (!apache::thrift::StringTraits<std::string>::isEqual(lhs.fieldC, rhs.fieldC)) {
      return apache::thrift::StringTraits<std::string>::isLess(lhs.fieldC, rhs.fieldC);
    }
  }
  if (lhs.fieldD_ref().has_value() != rhs.fieldD_ref().has_value()) {
    return lhs.fieldD_ref().has_value() < rhs.fieldD_ref().has_value();
  }
  if (lhs.fieldD_ref().has_value()) {
    if (!apache::thrift::StringTraits<std::unique_ptr<folly::IOBuf>>::isEqual(lhs.fieldD, rhs.fieldD)) {
      return apache::thrift::StringTraits<std::unique_ptr<folly::IOBuf>>::isLess(lhs.fieldD, rhs.fieldD);
    }
  }
  if (!(lhs.fieldE == rhs.fieldE)) {
    return lhs.fieldE < rhs.fieldE;
  }
  return false;
}


void swap(TrivialTypesStruct& a, TrivialTypesStruct& b) {
  using ::std::swap;
  swap(a.fieldA_ref().value_unchecked(), b.fieldA_ref().value_unchecked());
  swap(a.fieldB_ref().value_unchecked(), b.fieldB_ref().value_unchecked());
  swap(a.fieldC_ref().value_unchecked(), b.fieldC_ref().value_unchecked());
  swap(a.fieldD_ref().value_unchecked(), b.fieldD_ref().value_unchecked());
  swap(a.fieldE_ref().value(), b.fieldE_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void TrivialTypesStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t TrivialTypesStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t TrivialTypesStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t TrivialTypesStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void TrivialTypesStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t TrivialTypesStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t TrivialTypesStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t TrivialTypesStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void TrivialTypesStruct::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t TrivialTypesStruct::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t TrivialTypesStruct::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t TrivialTypesStruct::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;



}}} // test::fixtures::tablebased
namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::test::fixtures::tablebased::ContainerStruct>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) noexcept {
  using TType = apache::thrift::protocol::TType;
  constexpr size_t _size = 8;
  static constexpr folly::StringPiece _names[] = {
    "fieldA",
    "fieldB",
    "fieldC",
    "fieldD",
    "fieldE",
    "fieldF",
    "fieldG",
    "fieldH",
  };
  static constexpr int16_t _ids[] = {
    12,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
  };
  static constexpr TType _types[] = {
    TType::T_LIST,
    TType::T_LIST,
    TType::T_LIST,
    TType::T_LIST,
    TType::T_LIST,
    TType::T_SET,
    TType::T_MAP,
    TType::T_LIST,
  };
  static constexpr st::translate_field_name_table
      table{_size, _names, _ids, _types};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace test { namespace fixtures { namespace tablebased {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
ContainerStruct::ContainerStruct() {}
THRIFT_IGNORE_ISSET_USE_WARNING_END


ContainerStruct::~ContainerStruct() {}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
ContainerStruct::ContainerStruct(apache::thrift::FragileConstructor, ::std::vector<int32_t> fieldA__arg, std::list<int32_t> fieldB__arg, std::deque<int32_t> fieldC__arg, folly::fbvector<int32_t> fieldD__arg, folly::small_vector<int32_t> fieldE__arg, folly::sorted_vector_set<int32_t> fieldF__arg, folly::sorted_vector_map<int32_t, ::std::string> fieldG__arg, ::std::vector< ::test::fixtures::tablebased::TrivialTypesStruct> fieldH__arg) :
    fieldA(std::move(fieldA__arg)),
    fieldB(std::move(fieldB__arg)),
    fieldC(std::move(fieldC__arg)),
    fieldD(std::move(fieldD__arg)),
    fieldE(std::move(fieldE__arg)),
    fieldF(std::move(fieldF__arg)),
    fieldG(std::move(fieldG__arg)),
    fieldH(std::move(fieldH__arg)) {
  __isset.fieldA = true;
  __isset.fieldB = true;
  __isset.fieldC = true;
  __isset.fieldD = true;
  __isset.fieldE = true;
  __isset.fieldF = true;
  __isset.fieldG = true;
  __isset.fieldH = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void ContainerStruct::__clear() {
  // clear all fields
  fieldA.clear();
  fieldB.clear();
  fieldC.clear();
  fieldD.clear();
  fieldE.clear();
  fieldF.clear();
  fieldG.clear();
  fieldH.clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool ContainerStruct::operator==(const ContainerStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fieldA == rhs.fieldA)) {
    return false;
  }
  if (!(lhs.fieldB == rhs.fieldB)) {
    return false;
  }
  if (!(lhs.fieldC == rhs.fieldC)) {
    return false;
  }
  if (!(lhs.fieldD == rhs.fieldD)) {
    return false;
  }
  if (!(lhs.fieldE == rhs.fieldE)) {
    return false;
  }
  if (!(lhs.fieldF == rhs.fieldF)) {
    return false;
  }
  if (!(lhs.fieldG == rhs.fieldG)) {
    return false;
  }
  if (!(lhs.fieldH == rhs.fieldH)) {
    return false;
  }
  return true;
}

const ::std::vector<int32_t>& ContainerStruct::get_fieldA() const& {
  return fieldA;
}

::std::vector<int32_t> ContainerStruct::get_fieldA() && {
  return std::move(fieldA);
}

const std::list<int32_t>& ContainerStruct::get_fieldB() const& {
  return fieldB;
}

std::list<int32_t> ContainerStruct::get_fieldB() && {
  return std::move(fieldB);
}

const std::deque<int32_t>& ContainerStruct::get_fieldC() const& {
  return fieldC;
}

std::deque<int32_t> ContainerStruct::get_fieldC() && {
  return std::move(fieldC);
}

const folly::fbvector<int32_t>& ContainerStruct::get_fieldD() const& {
  return fieldD;
}

folly::fbvector<int32_t> ContainerStruct::get_fieldD() && {
  return std::move(fieldD);
}

const folly::small_vector<int32_t>& ContainerStruct::get_fieldE() const& {
  return fieldE;
}

folly::small_vector<int32_t> ContainerStruct::get_fieldE() && {
  return std::move(fieldE);
}

const folly::sorted_vector_set<int32_t>& ContainerStruct::get_fieldF() const& {
  return fieldF;
}

folly::sorted_vector_set<int32_t> ContainerStruct::get_fieldF() && {
  return std::move(fieldF);
}

const folly::sorted_vector_map<int32_t, ::std::string>& ContainerStruct::get_fieldG() const& {
  return fieldG;
}

folly::sorted_vector_map<int32_t, ::std::string> ContainerStruct::get_fieldG() && {
  return std::move(fieldG);
}

const ::std::vector< ::test::fixtures::tablebased::TrivialTypesStruct>& ContainerStruct::get_fieldH() const& {
  return fieldH;
}

::std::vector< ::test::fixtures::tablebased::TrivialTypesStruct> ContainerStruct::get_fieldH() && {
  return std::move(fieldH);
}


void swap(ContainerStruct& a, ContainerStruct& b) {
  using ::std::swap;
  swap(a.fieldA_ref().value(), b.fieldA_ref().value());
  swap(a.fieldB_ref().value(), b.fieldB_ref().value());
  swap(a.fieldC_ref().value(), b.fieldC_ref().value());
  swap(a.fieldD_ref().value(), b.fieldD_ref().value());
  swap(a.fieldE_ref().value(), b.fieldE_ref().value());
  swap(a.fieldF_ref().value(), b.fieldF_ref().value());
  swap(a.fieldG_ref().value(), b.fieldG_ref().value());
  swap(a.fieldH_ref().value(), b.fieldH_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void ContainerStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ContainerStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ContainerStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ContainerStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ContainerStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ContainerStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ContainerStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ContainerStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void ContainerStruct::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t ContainerStruct::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t ContainerStruct::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t ContainerStruct::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        ContainerStruct,
        ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>,
        ::std::vector< ::test::fixtures::tablebased::TrivialTypesStruct>>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        ContainerStruct,
        ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>,
        ::std::vector< ::test::fixtures::tablebased::TrivialTypesStruct>>,
    "inconsistent use of nimble option");

}}} // test::fixtures::tablebased
namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::test::fixtures::tablebased::ExampleUnion>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) noexcept {
  using TType = apache::thrift::protocol::TType;
  constexpr size_t _size = 2;
  static constexpr folly::StringPiece _names[] = {
    "fieldA",
    "fieldB",
  };
  static constexpr int16_t _ids[] = {
    1,
    2,
  };
  static constexpr TType _types[] = {
    TType::T_STRUCT,
    TType::T_STRUCT,
  };
  static constexpr st::translate_field_name_table
      table{_size, _names, _ids, _types};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::test::fixtures::tablebased::ExampleUnion::Type>::size;
folly::Range<::test::fixtures::tablebased::ExampleUnion::Type const*> const TEnumTraits<::test::fixtures::tablebased::ExampleUnion::Type>::values = folly::range(TEnumDataStorage<::test::fixtures::tablebased::ExampleUnion::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::test::fixtures::tablebased::ExampleUnion::Type>::names = folly::range(TEnumDataStorage<::test::fixtures::tablebased::ExampleUnion::Type>::names);

char const* TEnumTraits<::test::fixtures::tablebased::ExampleUnion::Type>::findName(type value) {
  using factory = detail::TEnumMapFactory<::test::fixtures::tablebased::ExampleUnion::Type>;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::test::fixtures::tablebased::ExampleUnion::Type>::findValue(char const* name, type* out) {
  using factory = detail::TEnumMapFactory<::test::fixtures::tablebased::ExampleUnion::Type>;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}
}} // apache::thrift
namespace test { namespace fixtures { namespace tablebased {

void ExampleUnion::__clear() {
  // clear all fields
  if (type_ == Type::__EMPTY__) { return; }
  switch(type_) {
    case Type::fieldA:
      destruct(value_.fieldA);
      break;
    case Type::fieldB:
      destruct(value_.fieldB);
      break;
    default:
      assert(false);
      break;
  }
  type_ = Type::__EMPTY__;
}

bool ExampleUnion::operator==(const ExampleUnion& rhs) const {
  if (type_ != rhs.type_) { return false; }
  switch(type_) {
    case Type::fieldA:
      return value_.fieldA == rhs.value_.fieldA;
    case Type::fieldB:
      return value_.fieldB == rhs.value_.fieldB;
    default:
      return true;
  }
}

void swap(ExampleUnion& a, ExampleUnion& b) {
  ExampleUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void ExampleUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ExampleUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ExampleUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ExampleUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ExampleUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ExampleUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ExampleUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ExampleUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void ExampleUnion::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t ExampleUnion::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t ExampleUnion::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t ExampleUnion::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        ExampleUnion,
        ::apache::thrift::type_class::structure,
         ::test::fixtures::tablebased::ContainerStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        ExampleUnion,
        ::apache::thrift::type_class::structure,
         ::test::fixtures::tablebased::TrivialTypesStruct>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        ExampleUnion,
        ::apache::thrift::type_class::structure,
         ::test::fixtures::tablebased::ContainerStruct>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        ExampleUnion,
        ::apache::thrift::type_class::structure,
         ::test::fixtures::tablebased::TrivialTypesStruct>,
    "inconsistent use of nimble option");

}}} // test::fixtures::tablebased
