/* iPhone Open SDK - Free Open Source Anti-Apple SDK
 * Copyright (C) 2008-2009  Jay Freeman (saurik)
*/

/*
 *        Redistribution and use in source and binary
 * forms, with or without modification, are permitted
 * provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the
 *    above copyright notice, this list of conditions
 *    and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the
 *    above copyright notice, this list of conditions
 *    and the following disclaimer in the documentation
 *    and/or other materials provided with the
 *    distribution.
 * 3. The name of the author may not be used to endorse
 *    or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
 * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef GRAPHICSSERVICES_GRAPHICSSERVICS_H_
#define GRAPHICSSERVICES_GRAPHICSSERVICS_H_

#include <mach/port.h>
#import <CoreFoundation/CoreFoundation.h>

#include <GraphicsServices/GSEvent.h>
#include <GraphicsServices/GSFont.h>
#include <GraphicsServices/GSWindow.h>

#ifdef __cplusplus
extern "C" {
#endif

#define _PurpleSystemEventPortName "PurpleSystemEventPort"

float GSDefaultStatusBarHeight(void);
//GSColorRef GSColorForSystemColor(unsigned color);
#if 1
mach_port_name_t GSGetPurpleSystemEventPort(void);
#else
mach_port_name_t GSCopyPurpleSystemEventPort(void);
#endif
mach_port_name_t GSGetPurpleNamedPort(CFStringRef name);

CFArrayRef GSSystemGetCapability(CFStringRef type);
extern CFStringRef const kGSDisplayIdentifiersCapability;

#ifdef __cplusplus
}
#endif

#endif//GRAPHICSSERVICES_GRAPHICSSERVICS_H_
