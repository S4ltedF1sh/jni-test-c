// Save as "HelloJNI.c"
#include <jni.h>        // JNI header provided by JDK
#include <string.h>
#include <stdio.h>      // C Standard IO Header
#include "HelloJNI.h"   // Generated

// Implementation of the native method sayHello()
JNIEXPORT void JNICALL Java_HelloJNI_sayHello(JNIEnv *env, jobject obj) {
   	printf("Hello World!\n");
   	return;
}

JNIEXPORT void JNICALL Java_HelloJNI_nativeCall(JNIEnv *env, jobject obj, jobject o){
	jclass cls;
	jfieldID fid;
	jstring jstr;
	const char* str;
	
	cls = (*env)->GetObjectClass(env, o);
	fid = (*env)->GetFieldID(env, cls, "token", "I");
	
	int token = (*env)->GetIntField(env, o, fid);
	printf("object token pre change: %d\n", token);
	(*env)->SetIntField(env, o, fid, 96);
	
	fid = (*env)->GetFieldID(env, cls, "myname", "Ljava/lang/String;");
	
	jstr = (*env)->GetObjectField(env, o, fid);
	str = (*env)->GetStringUTFChars(env, jstr, 0);
  	printf("object myname: \"%s\"\n", str);
  	(*env)->ReleaseStringUTFChars(env, jstr, str);
  	
  	jstr = (*env)->NewStringUTF(env, "NotMe");
  	(*env)->SetObjectField(env, o, fid, jstr);
  	
  	jmethodID mid = (*env)->GetMethodID(env, cls, "call", "()V");
	
	(*env)->CallVoidMethod(env, o, mid);
}
