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
# Standard Makefile to compile and link a C++ program that
# calls a MAP processor shared library function.
#
# This is part of a simple example showing how to create a MAP processor
# library function in a shared library, callable from Python, Java or C++.
#------------------------------------------------------------------------

CC 	= clang++
HOMEDIR = /home/dpointer
INCLDIR = $(HOMEDIR)/include
LIBDIR 	= $(HOMEDIR)/lib
CFLAGS 	= -I. -I$(INCLDIR) -Wall
LDFLAGS = -L$(LIBDIR) -ltoupper
TARGET 	= toUpperExample

all: main

main:
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp $(LDFLAGS) 

clean:
	rm -f *~ *.o $(TARGET)
