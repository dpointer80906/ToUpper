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
//  toUpper.cpp
//    CPU wrapper for the MAP processor function mapToUpper().
//
//  This is part of a simple example showing how to create a MAP processor
//  library function in a shared library, callable from Python, Java or C++.
//------------------------------------------------------------------------

#include <stdint.h>
#include <carte/host>
#include "toUpper.h"

using namespace carte;

void mapToUpper(cpu_ptr<uint8_t> cpu_buf, int mapnum);

//--------------------------------------------------------------------------------
//  toUpper()
//    C++ wrapper for mapToUpper() library routine.
//--------------------------------------------------------------------------------
void toUpper(
  uint8_t *cpu_buf)    // A mutable string buffer containing BUFSZ US-ASCII characters.
{
  map_allocate(1);
  mapToUpper(make_cpu(cpu_buf), 0);
  map_free(1);
}

