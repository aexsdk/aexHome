/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_androidex_devices_aexddMT319 */

#ifndef _Included_com_androidex_devices_aexddMT319
#define _Included_com_androidex_devices_aexddMT319
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL aexddMT319_JNI_OnLoad(JavaVM* vm, void* reserved);
void JNICALL aexddMT319_JNI_OnUnload(JavaVM* vm, void* reserved);

JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddMT319Reader_mt319ReadCardLoop
        (JNIEnv *, jobject, jint,jint);
JNIEXPORT void JNICALL Java_com_androidex_devices_aexddMT319Reader_mt319SendCmd
        (JNIEnv *, jobject, jint, jstring, jint);
JNIEXPORT void JNICALL Java_com_androidex_devices_aexddMT319Reader_mt319SendHexCmd
        (JNIEnv *, jobject, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif
