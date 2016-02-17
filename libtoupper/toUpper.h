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
//  toUpper.h
//    Function prototype declaration for toUpper(), which is a CPU
//    wrapper for the MAP processor function mapToUpper().
//
//  This is part of a simple example showing how to create a MAP processor
//  library function in a shared library, callable from Python, Java or C++.
//------------------------------------------------------------------------

#ifndef _TOUPPER_H
#define _TOUPPER_H

#define BUFSZ    80                     // max size of string byte buffer

#ifndef MAPFUNC                         // anything after this is not used in the MAP processor function

#include <stdint.h>

#ifdef __cplusplus
  extern "C" {
#endif    //  #ifdef __cplusplus

    void toUpper(uint8_t *cpu_buf);     // MAP processor functoin call wrapper

#ifdef __cplusplus
  }
#endif    //  #ifdef __cplusplus

#endif    //  #ifndef MAPFUNC

#endif    //  #ifndef _TOUPPER_H
