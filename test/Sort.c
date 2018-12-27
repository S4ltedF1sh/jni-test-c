#include <jni.h>
#include "bbsort.h"
#include "Sort.h"
#include <stdlib.h>
#include <stdio.h>

JNIEXPORT void JNICALL Java_Sort_sort (JNIEnv *env, jclass obj, jintArray arr){
	int len = (int)(*env)->GetArrayLength(env, arr);
	jint *a = (*env)->GetIntArrayElements(env, arr, 0);
	//jintArray ja = (*env)->NewIntArray(env, len);
	sort((int*)a, len);
	//(*env)->SetIntArrayRegion(env, ja, 0, len, a);
	(*env)->SetIntArrayRegion(env, arr, 0, len, a);
	//return ja;
}

