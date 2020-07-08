/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct useless_field;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_useless_field
#define APACHE_THRIFT_ACCESSOR_useless_field
APACHE_THRIFT_DEFINE_ACCESSOR(useless_field);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace cpp2 {

enum class B {
  HELLO = 0,
};




} // cpp2
namespace std {


template<> struct hash<typename ::cpp2::B> : public apache::thrift::detail::enum_hash<typename ::cpp2::B> {};
template<> struct equal_to<typename ::cpp2::B> : public apache::thrift::detail::enum_equal_to<typename ::cpp2::B> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::cpp2::B>;

template <> struct TEnumTraits<::cpp2::B> {
  using type = ::cpp2::B;

  static constexpr std::size_t const size = 1;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::HELLO; }
  static constexpr type max() { return type::HELLO; }
};


}} // apache::thrift

namespace cpp2 {

using _B_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<B>;
[[deprecated("use apache::thrift::util::enumNameSafe, apache::thrift::util::enumName, or apache::thrift::TEnumTraits")]]
extern const _B_EnumMapFactory::ValuesToNamesMapType _B_VALUES_TO_NAMES;
[[deprecated("use apache::thrift::TEnumTraits")]]
extern const _B_EnumMapFactory::NamesToValuesMapType _B_NAMES_TO_VALUES;

} // cpp2

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class A;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class A final  {
 public:
  using __fbthrift_cpp2_type = A;

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  A() :
      useless_field(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  A(apache::thrift::FragileConstructor, int32_t useless_field__arg);

  A(A&&) = default;

  A(const A&) = default;

  A& operator=(A&&) = default;

  A& operator=(const A&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  void __clear();
 public:
  int32_t useless_field;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool useless_field;
  } __isset = {};
  bool operator==(const A& rhs) const;
#ifndef SWIG
  friend bool operator!=(const A& __x, const A& __y) {
    return !(__x == __y);
  }
#endif
  bool operator<(const A& rhs) const;
#ifndef SWIG
  friend bool operator>(const A& __x, const A& __y) {
    return __y < __x;
  }
  friend bool operator<=(const A& __x, const A& __y) {
    return !(__y < __x);
  }
  friend bool operator>=(const A& __x, const A& __y) {
    return !(__x < __y);
  }
#endif

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> useless_field_ref() const& {
    return {this->useless_field, __isset.useless_field};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> useless_field_ref() const&& {
    return {std::move(this->useless_field), __isset.useless_field};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> useless_field_ref() & {
    return {this->useless_field, __isset.useless_field};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> useless_field_ref() && {
    return {std::move(this->useless_field), __isset.useless_field};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

  int32_t get_useless_field() const {
    return useless_field;
  }

  int32_t& set_useless_field(int32_t useless_field_) {
    useless_field = useless_field_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.useless_field = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return useless_field;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< A >;
};

void swap(A& a, A& b);

template <class Protocol_>
uint32_t A::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
