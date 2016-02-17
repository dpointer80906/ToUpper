#------------------------------------------------------------------------
# Copyright 2016 DirectStream, LLC.  All rights reserved.
#
#      Manufactured in the United States of America.
#
# DirectStream, LLC
# 4240 N Nevada Avenue
# Colorado Springs, CO 80907
# (v) (719) 262-0213
# (f) (719) 262-0223
#
# As covered under the End User Software License Agreement, no
# permission has been granted to distribute or copy this software
# without the express permission of DirectStream, LLC.
#
# This program is distributed WITHOUT ANY WARRANTY OF ANY KIND.
#
# DirectStream, LLC Confidential as covered under the NDA agreement.
#------------------------------------------------------------------------
#  ToUpperExample.py
#    Python code to create a string of BUFSZ US-ASCII characters and send
#    it to the MAP processor for conversion to upper case.
#
#  This is part of a simple example showing how to create a MAP processor
#  library function in a shared library, callable from Python, Java or C++.
#------------------------------------------------------------------------

import ctypes

mylib = ctypes.CDLL('libtoupper.so.1.0.0')
strOriginal = 'ThiS is A strinG'
strBytes = ctypes.create_string_buffer(strOriginal, 80)
mylib.toUpper(ctypes.byref(strBytes))
print  strOriginal + ' -> ' + strBytes.value

 
