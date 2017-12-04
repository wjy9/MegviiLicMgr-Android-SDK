#include <jni.h>

#ifndef _Included_com_megvii_fppapidemo_Api
#define _Included_com_megvii_fppapidemo_Api
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL Java_com_megvii_licensemanager_sdk_jni_NativeLicenseAPI_nativeGetLicense(JNIEnv *,
																								   jobject,
																								   jstring, jint);

JNIEXPORT jint JNICALL Java_com_megvii_licensemanager_sdk_jni_NativeLicenseAPI_nativeSetLicense(JNIEnv *,
																								jobject,
																								jstring);

JNIEXPORT jlong JNICALL Java_com_megvii_licensemanager_sdk_jni_NativeLicenseAPI_getExpireTime(JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
