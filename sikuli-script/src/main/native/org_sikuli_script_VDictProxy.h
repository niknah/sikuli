/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_sikuli_script_VDictProxy */

#ifndef _Included_org_sikuli_script_VDictProxy
#define _Included_org_sikuli_script_VDictProxy
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_sikuli_script_VDictProxy
 * Method:    getInstance
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_sikuli_script_VDictProxy_getInstance
  (JNIEnv *, jobject);

/*
 * Class:     org_sikuli_script_VDictProxy
 * Method:    _insert
 * Signature: (JLjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_sikuli_script_VDictProxy__1insert
  (JNIEnv *, jobject, jlong, jstring, jint);

/*
 * Class:     org_sikuli_script_VDictProxy
 * Method:    _lookup
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_sikuli_script_VDictProxy__1lookup
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_sikuli_script_VDictProxy
 * Method:    _lookup_similar
 * Signature: (JLjava/lang/String;D)I
 */
JNIEXPORT jint JNICALL Java_org_sikuli_script_VDictProxy__1lookup_1similar
  (JNIEnv *, jobject, jlong, jstring, jdouble);

/*
 * Class:     org_sikuli_script_VDictProxy
 * Method:    _lookup_similar_n
 * Signature: (JLjava/lang/String;DI)[I
 */
JNIEXPORT jintArray JNICALL Java_org_sikuli_script_VDictProxy__1lookup_1similar_1n
  (JNIEnv *, jobject, jlong, jstring, jdouble, jint);

/*
 * Class:     org_sikuli_script_VDictProxy
 * Method:    _erase
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_sikuli_script_VDictProxy__1erase
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_sikuli_script_VDictProxy
 * Method:    _size
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_sikuli_script_VDictProxy__1size
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_sikuli_script_VDictProxy
 * Method:    _empty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sikuli_script_VDictProxy__1empty
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
