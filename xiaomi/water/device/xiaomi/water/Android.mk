LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := water
LOCAL_SRC_FILES := $(call all-subdir-java-files)

include $(BUILD_EXECUTABLE)

