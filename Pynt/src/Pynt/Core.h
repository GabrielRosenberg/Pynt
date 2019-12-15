#pragma once
#ifdef PY_PLATFORM_WINDOWS
	#ifdef PY_BUILD_DLL
		#define PYNT_API __declspec(dllexport)
	#else
		#define PYNT_API __declspec(dllimport)
	#endif
#else
	#error Pynt only supports Windows!
#endif