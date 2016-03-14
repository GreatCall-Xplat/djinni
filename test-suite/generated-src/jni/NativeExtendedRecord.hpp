// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from extended_record.djinni

#pragma once

#include "djinni_support.hpp"
#include "extended_record.hpp"

namespace djinni_generated {

class NativeExtendedRecord final {
public:
    using CppType = ::testsuite::ExtendedRecord;
    using JniType = jobject;

    using Boxed = NativeExtendedRecord;

    ~NativeExtendedRecord();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeExtendedRecord();
    friend ::djinni::JniClass<NativeExtendedRecord>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/ExtendedRecord") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Z)V") };
    const jfieldID field_mFoo { ::djinni::jniGetFieldID(clazz.get(), "mFoo", "Z") };
};

}  // namespace djinni_generated
