
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_Collections$CheckedMap$CheckedEntrySet__
#define __java_util_Collections$CheckedMap$CheckedEntrySet__

#pragma interface

#include <java/util/Collections$CheckedSet.h>

class java::util::Collections$CheckedMap$CheckedEntrySet : public ::java::util::Collections$CheckedSet
{

public: // actually package-private
  Collections$CheckedMap$CheckedEntrySet(::java::util::Set *, ::java::lang::Class *, ::java::lang::Class *, ::java::lang::Class *);
public:
  ::java::util::Iterator * iterator();
public: // actually package-private
  static ::java::lang::Class * access$0(::java::util::Collections$CheckedMap$CheckedEntrySet *);
private:
  ::java::lang::Class * __attribute__((aligned(__alignof__( ::java::util::Collections$CheckedSet)))) keyType;
  ::java::lang::Class * valueType;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_Collections$CheckedMap$CheckedEntrySet__
