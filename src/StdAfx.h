
#ifndef _STDAFX_H_
#define _STDAFX_H_

#ifdef _WIN32
#include <windows.h>
#endif

#ifdef _LINUX
#include <X11/Xlib.h>
#include <X11/Xutil.h>
//#include <X11/extensions/xf86vmode.h>
#include <X11/keysym.h>
#include <dlfcn.h>
#include <stdarg.h>
#include <string.h>
#endif


#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include <hoe_core.h>
#include <hoe_app.h>
#include <hoe_utils.h>
#include <hoe_view.h>
#include <hoe_adventure.h>

#endif // _STDAFX_H_

