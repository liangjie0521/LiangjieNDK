/*
 * NativeUtil.cpp
 *
 *  Created on: 2013年12月11日
 *      Author: proto
 */
#include <jni.h>
#include <stdio.h>
#include <iostream>

#include <opencv2/opencv.hpp>
#include <android/log.h>

using namespace std;
using namespace cv;

#include "liangjie_app_NativeUtil.h"

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "liangjie", __VA_ARGS__))
JNIEXPORT void JNICALL Java_liangjie_app_NativeUtil_SayHello(JNIEnv * je,
		jobject jj, jstring js) {
	FastFeatureDetector fast(40);
	Mat a;
	LOGI("测试！！！！");
}

