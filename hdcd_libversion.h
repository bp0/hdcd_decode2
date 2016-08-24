/*
 *  Copyright (C) 2016, Burt P.,
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without modification,
 *  are permitted provided that the following conditions are met:
 *    1. Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *    2. Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *    3. The names of its contributors may not be used to endorse or promote
 *       products derived from this software without specific prior written
 *       permission.
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 *  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 *  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 *  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 *  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 *  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 *  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _HDCD_LIBVERSION_H_
#define _HDCD_LIBVERSION_H_

#ifdef __cplusplus
extern "C" {
#endif

#define HDCDLIB_VER_MAJOR 2  /* used as libtool 'current'  */
#define HDCDLIB_VER_MINOR 1  /* used as libtool 'revision' */
#define HDCDLIB_VER_AGE   0  /* used as libtool 'age'      */
/* age is the difference between the 'current' and whatever
 * old 'current' version the library can still safely link against.
 * https://www.gnu.org/software/libtool/manual/html_node/Libtool-versioning.html */

/** fills major and minor with the version of the built library
 *
 * int major = HDCDLIB_VER_MAJOR, minor = HDCDLIB_VER_MINOR;
 * ver_match = hdcd_lib_version(&major, &minor);
 * */
int hdcd_lib_version(int* major, int* minor);

#ifdef __cplusplus
}
#endif

#endif
