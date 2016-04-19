LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := hello-jni.c
LOCAL_MODULE := HelloJni

include $(BUILD_SHARED_LIBRARY)