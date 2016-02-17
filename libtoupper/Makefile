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
# Carte++ standard Makefile for library creation
#
# SRC CARTE 6.0  x86_64 CentOS 6.6    201606.9 2016-02-16 17:30
#
# The Carte++ environment must be sourced in the build shell, e.g.,
#   source /home/dvl/installs/TRIAL_x86_64_6.0/thisenv.sh
# before 'make debug', 'make sim' or 'make hw' may be executed.
#
# The result is a Linux shared library object, which is installed
# using 'make -f Makelib'.
#
# Utilizes Java 6 JNI, set by the variables JNI0 and JI1.
#
# This is part of a simple example showing how to create a MAP processor
# library function in a shared library, callable from Python, Java or C++.
#------------------------------------------------------------------------

JNI0		= /etc/alternatives/java_sdk_1.6.0/include/
JNI1		= /etc/alternatives/java_sdk_1.6.0/include/linux

INCLUDES	= -I. -I$(JNI0) -I$(JNI1)
FILES		= toUpper.cpp Java_ToUpperExample_toUpper.cpp
MAPFILES	= toUpper.mcpp
SHAREDLIB	= libtoupper.so.1.0.0

MCXX 		= carte++
CXX 		= clang++
LD 		= $(CXX)

$(shell cp $(MC_ROOT)/opt/srcci/comp/CarteVersion .)

MAPTARGET ?= map_m
export MAPTARGET

APPRULES ?= $(CARTE)/lib/AppRules.make
include $(APPRULES)
