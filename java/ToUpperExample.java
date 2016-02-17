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
//  ToUpperExample.java
//    Java code utilizing the MAP processor function mapToUpper() using 
//    JNI 6.
//
//  This is part of a simple example showing how to create a MAP processor
//  library function in a shared library, callable from Python, Java or C++.
//------------------------------------------------------------------------

import java.nio.charset.Charset;
import java.util.Arrays;

class ToUpperExample {

    public native void toUpper(byte[] buf);    // the MAP processor function library call
    public static final int BUFSZ = 80;        // bytes in the US-ASCII character array

    static { System.loadLibrary("toupper"); }

    //  Create a string of BUFSZ US-ASCII characters and send it to the
    //  MAP processor for conversion to upper case.
    public static void main(String[] args) {
        ToUpperExample toUpperExample = new ToUpperExample();
        String strOriginal = "ThiS is A strinG";
	byte[] buf = Arrays.copyOf(strOriginal.getBytes(Charset.forName("US-ASCII")), BUFSZ);
        toUpperExample.toUpper(buf);
	String strUpperCase = new String(buf, Charset.forName("US-ASCII"));
        System.out.println(strOriginal + " -> " + strUpperCase);
    }

}
