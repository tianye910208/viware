#ifndef _VI3D_SYS_
#define _VI3D_SYS_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
#include <math.h>
#include <float.h>

//PLATFORM
#if defined(_WIN32) || defined(_WINDOWS) || defined(WIN32)
	#define VI3D_SYS_WIN 1
	#define VI3D_SYS "WIN"
#elif defined(__APPLE__) || defined(__APPLE_CC__)
    #import <TargetConditionals.h>
	#if (TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR)
		#define VI3D_SYS_IOS 2
		#define VI3D_SYS "IOS"
	#else
		#define VI3D_SYS_OSX 3
		#define VI3D_SYS "OSX"
	#endif
#elif defined(__ANDROID__)
	#define VI3D_SYS_ANDROID 4
	#define VI3D_SYS "ANDROID"
#elif defined(__linux__)
	#define VI3D_SYS_LINUX 5
	#define VI3D_SYS "LINUX"
#else
	#error VI3D_ERROR_PLATFORM_UNKNOWN
#endif


//ASSERT
#if defined(_DEBUG) || defined(DEBUG)
	#define VI3D_DEBUG
	#include <assert.h>
	#define ASSERT(exp) assert(exp)
#else
	#define ASSERT(exp)
#endif

#ifndef NULL
	#define NULL 0
#endif

//TYPES
typedef signed char         int8;
typedef unsigned char       uint8;
typedef signed short        int16;
typedef unsigned short      uint16;
typedef signed int          int32;
typedef unsigned int        uint32;
typedef signed long long    int64;
typedef unsigned long long  uint64;


#ifdef VI3D_SYS_ANDROID
#include<android/log.h>
#define vi_sys_print(msg) (__android_log_print(ANDROID_LOG_INFO, "VI3D", "%s", msg))
#else
#define vi_sys_print(msg) do{ printf("%s", msg); fflush(stdout); }while(0)
#endif

#ifdef VI3D_SYS_IOS
#include <malloc/malloc.h>
#else
#include <malloc.h>
#endif

#ifdef VI3D_SYS_WIN
#define WIN32_LEAN_AND_MEAN
#define inline __inline
#include <Windows.h>
#endif

#ifdef VI3D_SYS_ANDROID
#include <android/native_activity.h>
void vi_sys_set_activity(ANativeActivity* activity);
ANativeActivity* vi_sys_get_activity();
#endif


#endif 


