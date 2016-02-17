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
//  toUpperExample.cpp
//    C++ code to create a string of BUFSZ US-ASCII characters and send
//    it to the MAP processor for conversion to upper case.
//
//  This is part of a simple example showing how to create a MAP processor
//  library function in a shared library, callable from Python, Java or C++.
//------------------------------------------------------------------------

#include <stdint.h>
#include <iostream>
#include <string>
#include <vector>
#include "toUpper.h"

//--------------------------------------------------------------------------------
//  main()
//    Create a mutable string of BUFSZ US-ASCII characters and send it to the
//    MAP processor for conversion to upper case.
//--------------------------------------------------------------------------------
int main(int argc, char **argv)
{
  std::string strOriginal = ("ThiS is A strinG");

  std::vector<uint8_t> strBytes(strOriginal.begin(), strOriginal.end());
  strBytes.resize(BUFSZ);
  uint8_t *buf = &strBytes[0];
  toUpper(buf);
  std::cout << strOriginal << " -> " << (char *)buf << std::endl;
}

