package com.megvii.licensemanager.sdk.jni;

import android.content.Context;

/**
 * @brief jni 接口类
 *
 * 该类加载了 jni 库
 */
public class NativeLicenseAPI {

    public static native String nativeGetLicense(String version, int duration);

    public static native int nativeSetLicense(String handle);

    public static native long getExpireTime(String version);

    /**
     * 这里加载的名称要根据 so 不同的版本号进行修改
     */
    static {
        System.loadLibrary("megface-new");
        System.loadLibrary("MegviiLicenseManager-jni-0.3.0");
    }
}
