/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class lejos_pc_comm_NXTCommBluez */

#ifndef _Included_lejos_pc_comm_NXTCommBluez
#define _Included_lejos_pc_comm_NXTCommBluez
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     lejos_pc_comm_NXTCommBluez
 * Method:    search
 * Signature: 
 */
JNIEXPORT jobjectArray JNICALL Java_lejos_pc_comm_NXTCommBluez_rcSearch
  (JNIEnv *, jobject, jstring);

/*
 * Class:     lejos_pc_comm_NXTCommBluez
 * Method:    rcSocketCreate
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_lejos_pc_comm_NXTCommBluez_rcSocketCreate
  (JNIEnv *, jobject);

/*
 * Class:     lejos_pc_comm_NXTCommBluez
 * Method:    rcSocketBind
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_lejos_pc_comm_NXTCommBluez_rcSocketBind
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     lejos_pc_comm_NXTCommBluez
 * Method:    rcSocketConnect
 * Signature: (ILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_lejos_pc_comm_NXTCommBluez_rcSocketConnect
  (JNIEnv *, jobject, jint, jstring, jint);

/*
 * Class:     lejos_pc_comm_NXTCommBluez
 * Method:    rcSocketSend
 * Signature: (I[B)V
 */
JNIEXPORT void JNICALL Java_lejos_pc_comm_NXTCommBluez_rcSocketSend
  (JNIEnv *, jobject, jint, jbyteArray);

/*
 * Class:     lejos_pc_comm_NXTCommBluez
 * Method:    rcSocketRecv
 * Signature: (I)[B
 */
JNIEXPORT jbyteArray JNICALL Java_lejos_pc_comm_NXTCommBluez_rcSocketRecv
  (JNIEnv *, jobject, jint);

/*
 * Class:     lejos_pc_comm_NXTCommBluez
 * Method:    rcSocketShutdown
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_lejos_pc_comm_NXTCommBluez_rcSocketShutdown
  (JNIEnv *, jobject, jint);

/*
 * Class:     lejos_pc_comm_NXTCommBluez
 * Method:    rcSocketClose
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_lejos_pc_comm_NXTCommBluez_rcSocketClose
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
