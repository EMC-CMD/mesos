/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_mesos_Log_Reader */

#ifndef _Included_org_apache_mesos_Log_Reader
#define _Included_org_apache_mesos_Log_Reader
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_apache_mesos_Log_Reader
 * Method:    read
 * Signature: (Lorg/apache/mesos/Log/Position;Lorg/apache/mesos/Log/Position;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_org_apache_mesos_Log_00024Reader_read
  (JNIEnv *, jobject, jobject, jobject, jlong, jobject);

/*
 * Class:     org_apache_mesos_Log_Reader
 * Method:    beginning
 * Signature: ()Lorg/apache/mesos/Log/Position;
 */
JNIEXPORT jobject JNICALL Java_org_apache_mesos_Log_00024Reader_beginning
  (JNIEnv *, jobject);

/*
 * Class:     org_apache_mesos_Log_Reader
 * Method:    ending
 * Signature: ()Lorg/apache/mesos/Log/Position;
 */
JNIEXPORT jobject JNICALL Java_org_apache_mesos_Log_00024Reader_ending
  (JNIEnv *, jobject);

/*
 * Class:     org_apache_mesos_Log_Reader
 * Method:    initialize
 * Signature: (Lorg/apache/mesos/Log;)V
 */
JNIEXPORT void JNICALL Java_org_apache_mesos_Log_00024Reader_initialize
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_apache_mesos_Log_Reader
 * Method:    finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_apache_mesos_Log_00024Reader_finalize
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
