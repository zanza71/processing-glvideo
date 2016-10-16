/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class gohai_glvideo_GLVideo */

#ifndef _Included_gohai_glvideo_GLVideo
#define _Included_gohai_glvideo_GLVideo
#ifdef __cplusplus
extern "C" {
#endif
#undef gohai_glvideo_GLVideo_MUTE
#define gohai_glvideo_GLVideo_MUTE 1L
/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_setEnvVar
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1setEnvVar
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_init
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1init
  (JNIEnv *, jclass);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_filenameToUri
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1filenameToUri
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_getDevices
 * Signature: (Ljava/lang/String;)[[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1getDevices
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_open_pipeline
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1open_1pipeline
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_open_device
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1open_1device
  (JNIEnv *, jclass, jstring, jstring, jint);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_isAvailable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1isAvailable
  (JNIEnv *, jclass, jlong);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_getFrame
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1getFrame
  (JNIEnv *, jclass, jlong);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_startPlayback
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1startPlayback
  (JNIEnv *, jclass, jlong);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_isPlaying
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1isPlaying
  (JNIEnv *, jclass, jlong);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_stopPlayback
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1stopPlayback
  (JNIEnv *, jclass, jlong);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_setLooping
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1setLooping
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_seek
 * Signature: (JF)Z
 */
JNIEXPORT jboolean JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1seek
  (JNIEnv *, jclass, jlong, jfloat);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_setSpeed
 * Signature: (JF)Z
 */
JNIEXPORT jboolean JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1setSpeed
  (JNIEnv *, jclass, jlong, jfloat);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_setVolume
 * Signature: (JF)Z
 */
JNIEXPORT jboolean JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1setVolume
  (JNIEnv *, jclass, jlong, jfloat);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_getDuration
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1getDuration
  (JNIEnv *, jclass, jlong);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_getPosition
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1getPosition
  (JNIEnv *, jclass, jlong);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_getWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1getWidth
  (JNIEnv *, jclass, jlong);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_getHeight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1getHeight
  (JNIEnv *, jclass, jlong);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_getFramerate
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1getFramerate
  (JNIEnv *, jclass, jlong);

/*
 * Class:     gohai_glvideo_GLVideo
 * Method:    gstreamer_close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_gohai_glvideo_GLVideo_gstreamer_1close
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
