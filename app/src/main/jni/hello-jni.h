
#include <jni.h>

#ifndef _addvals_h
#define _addvals_h
#ifdef __cplusplus

extern "C" {
#endif

jint Java_com_example_hellojni_HelloJni_addVals( JNIEnv* env, jobject thiz, jint a, jint b);
jint Java_com_example_hellojni_HelloJni_subVals( JNIEnv* env, jobject thiz, jint a, jint b);
jint Java_com_example_hellojni_HelloJni_mulVals( JNIEnv* env, jobject thiz, jint a, jint b);
jint Java_com_example_hellojni_HelloJni_divVals( JNIEnv* env, jobject thiz, jint a, jint b);

#ifdef __cplusplus
}
#endif
#endif
