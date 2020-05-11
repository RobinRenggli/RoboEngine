#pragma once

#ifdef RE_PLATFORM_WINDOWS
	#ifdef RE_BUILD_DLL
		#define ROBOENGINE_API __declspec(dllexport)
	#else
		#define ROBOENGINE_API __declspec(dllimport)
	#endif
#else
	#error RoboEngine only supports Windows!
#endif
