//------------------------------------------------------------------------
// Copyright 2016 DirectStream, LLC.  All rights reserved.
//
//      Manufactured in the United States of America.
//
// DirectStream, LLC
// 4240 N Nevada Avenue
// Colorado Springs, CO 80907
// (v) (719) 262-0213
// (f) (719) 262-0223
//
// As covered under the End User Software License Agreement, no
// permission has been granted to distribute or copy this software
// without the express permission of DirectStream, LLC.
//
// This program is distributed WITHOUT ANY WARRANTY OF ANY KIND.
//
// DirectStream, LLC Confidential as covered under the NDA agreement.
//------------------------------------------------------------------------
//  Java_ToUpperExample_toUpper.cpp
//    Implementation of Java 6 JNI interface to the MAP processor library 
//    CPU entry point toUpper().
//
//  This is part of a simple example showing how to create a MAP processor
//  library function in a shared library, callable from Python, Java or C++.
//------------------------------------------------------------------------

#include <jni.h>
#include "toUpper.h"
#include "Java_ToUpperExample_toUpper.h"

JNIEXPORT void JNICALL Java_ToUpperExample_toUpper
  (JNIEnv *env, jobject jobj, jbyteArray jBuf)
{
  jbyte *cpu_buf = env->GetByteArrayElements(jBuf, 0);
  toUpper((uint8_t *)cpu_buf);
  env->ReleaseByteArrayElements(jBuf, cpu_buf, 0);
}


