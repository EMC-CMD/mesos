/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_mesos_state_AbstractState_NamesFuture */

#ifndef _Included_org_apache_mesos_state_AbstractState_NamesFuture
#define _Included_org_apache_mesos_state_AbstractState_NamesFuture
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_apache_mesos_state_AbstractState_NamesFuture
 * Method:    cancel
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_org_apache_mesos_state_AbstractState_00024NamesFuture_cancel
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_apache_mesos_state_AbstractState_NamesFuture
 * Method:    isCancelled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_apache_mesos_state_AbstractState_00024NamesFuture_isCancelled
  (JNIEnv *, jobject);

/*
 * Class:     org_apache_mesos_state_AbstractState_NamesFuture
 * Method:    isDone
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_apache_mesos_state_AbstractState_00024NamesFuture_isDone
  (JNIEnv *, jobject);

/*
 * Class:     org_apache_mesos_state_AbstractState_NamesFuture
 * Method:    get
 * Signature: ()Ljava/util/Iterator;
 */
JNIEXPORT jobject JNICALL Java_org_apache_mesos_state_AbstractState_00024NamesFuture_get__
  (JNIEnv *, jobject);

/*
 * Class:     org_apache_mesos_state_AbstractState_NamesFuture
 * Method:    get
 * Signature: (JLjava/util/concurrent/TimeUnit;)Ljava/util/Iterator;
 */
JNIEXPORT jobject JNICALL Java_org_apache_mesos_state_AbstractState_00024NamesFuture_get__JLjava_util_concurrent_TimeUnit_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     org_apache_mesos_state_AbstractState_NamesFuture
 * Method:    finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_apache_mesos_state_AbstractState_00024NamesFuture_finalize
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
