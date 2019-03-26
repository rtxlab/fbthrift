#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.bytes cimport PyBytes_AsStringAndSize
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t, uint32_t
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.types import NOTSET as __NOTSET
from thrift.py3.types cimport (
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    constant_shared_ptr,
)
cimport thrift.py3.std_libcpp as std_libcpp
from thrift.py3.serializer import Protocol as __Protocol
cimport thrift.py3.serializer as serializer
from thrift.py3.serializer import deserialize, serialize
import folly.iobuf as __iobuf
from folly.optional cimport cOptional

import sys
import itertools
from collections.abc import Sequence, Set, Mapping, Iterable
import warnings
import weakref as __weakref
import builtins as _builtins


cdef cFoo _Foo_defaults = cFoo()

cdef class Foo(thrift.py3.types.Struct):

    def __init__(
        Foo self, *,
        MyInt=None
    ):
        if MyInt is not None:
            if not isinstance(MyInt, int):
                raise TypeError(f'MyInt is not a { int !r}.')
            MyInt = <int64_t> MyInt

        self._cpp_obj = move(Foo._make_instance(
          NULL,
          NULL,
          MyInt,
        ))

    def __call__(
        Foo self,
        MyInt=__NOTSET
    ):
        ___NOTSET = __NOTSET  # Cheaper for larger structs
        cdef bint[1] __isNOTSET  # so make_instance is typed

        changes = False
        if MyInt is ___NOTSET:
            __isNOTSET[0] = True
            MyInt = None
        else:
            __isNOTSET[0] = False
            changes = True


        if not changes:
            return self

        if MyInt is not None:
            if not isinstance(MyInt, int):
                raise TypeError(f'MyInt is not a { int !r}.')
            MyInt = <int64_t> MyInt

        inst = <Foo>Foo.__new__(Foo)
        inst._cpp_obj = move(Foo._make_instance(
          self._cpp_obj.get(),
          __isNOTSET,
          MyInt,
        ))
        return inst

    @staticmethod
    cdef unique_ptr[cFoo] _make_instance(
        cFoo* base_instance,
        bint* __isNOTSET,
        object MyInt 
    ) except *:
        cdef unique_ptr[cFoo] c_inst
        if base_instance:
            c_inst = make_unique[cFoo](deref(base_instance))
        else:
            c_inst = make_unique[cFoo]()

        if base_instance:
            # Convert None's to default value. (or unset)
            if not __isNOTSET[0] and MyInt is None:
                deref(c_inst).MyInt = _Foo_defaults.MyInt
                deref(c_inst).__isset.MyInt = False
                pass

        if MyInt is not None:
            deref(c_inst).MyInt = MyInt
            deref(c_inst).__isset.MyInt = True
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return move_unique(c_inst)

    def __iter__(self):
        yield 'MyInt', self.MyInt

    def __bool__(self):
        return True

    @staticmethod
    cdef create(shared_ptr[cFoo] cpp_obj):
        inst = <Foo>Foo.__new__(Foo)
        inst._cpp_obj = move_shared(cpp_obj)
        return inst

    @property
    def MyInt(self):

        return deref(self._cpp_obj).MyInt


    def __hash__(Foo self):
        if not self.__hash:
            self.__hash = hash((
            self.MyInt,
            ))
        return self.__hash

    def __repr__(Foo self):
        return f'Foo(MyInt={repr(self.MyInt)})'
    def __copy__(Foo self):
        cdef shared_ptr[cFoo] cpp_obj = make_shared[cFoo](
            deref(self._cpp_obj)
        )
        return Foo.create(move_shared(cpp_obj))

    def __richcmp__(self, other, op):
        cdef int cop = op
        if not (
                isinstance(self, Foo) and
                isinstance(other, Foo)):
            if cop == Py_EQ:  # different types are never equal
                return False
            elif cop == Py_NE:  # different types are always notequal
                return True
            else:
                return NotImplemented

        cdef cFoo* cself = (<Foo>self)._cpp_obj.get()
        cdef cFoo* cother = (<Foo>other)._cpp_obj.get()
        if cop == Py_EQ:
            return deref(cself) == deref(cother)
        elif cop == Py_NE:
            return deref(cself) != deref(cother)
        elif cop == Py_LT:
            return deref(cself) < deref(cother)
        elif cop == Py_LE:
            return deref(cself) <= deref(cother)
        elif cop == Py_GT:
            return deref(cself) > deref(cother)
        elif cop == Py_GE:
            return deref(cself) >= deref(cother)
        else:
            return NotImplemented

    cdef __iobuf.IOBuf _serialize(Foo self, proto):
        cdef __iobuf.cIOBufQueue queue = __iobuf.cIOBufQueue(__iobuf.cacheChainLength())
        cdef cFoo* cpp_obj = self._cpp_obj.get()
        if proto is __Protocol.COMPACT:
            with nogil:
                serializer.CompactSerialize[cFoo](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is __Protocol.BINARY:
            with nogil:
                serializer.BinarySerialize[cFoo](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is __Protocol.JSON:
            with nogil:
                serializer.JSONSerialize[cFoo](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is __Protocol.COMPACT_JSON:
            with nogil:
                serializer.CompactJSONSerialize[cFoo](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        return __iobuf.from_unique_ptr(queue.move())

    cdef uint32_t _deserialize(Foo self, const __iobuf.cIOBuf* buf, proto) except? 0:
        cdef uint32_t needed
        self._cpp_obj = make_shared[cFoo]()
        cdef cFoo* cpp_obj = self._cpp_obj.get()
        if proto is __Protocol.COMPACT:
            with nogil:
                needed = serializer.CompactDeserialize[cFoo](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is __Protocol.BINARY:
            with nogil:
                needed = serializer.BinaryDeserialize[cFoo](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is __Protocol.JSON:
            with nogil:
                needed = serializer.JSONDeserialize[cFoo](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is __Protocol.COMPACT_JSON:
            with nogil:
                needed = serializer.CompactJSONDeserialize[cFoo](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        return needed

    def __reduce__(self):
        return (deserialize, (Foo, serialize(self)))


