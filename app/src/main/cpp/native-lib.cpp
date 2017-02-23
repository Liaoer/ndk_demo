#include <jni.h>
#include <string>

extern "C"
jstring
Java_liaoer_game_org_ndk_1demo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
