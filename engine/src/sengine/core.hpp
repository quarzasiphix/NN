#pragma once
#include <iostream>

#define DEV

#ifdef DEV
#define WINDOWS
#endif // DEV

#ifdef WINDOWS
	#ifdef SE_BUILD
			#define SeApi __declspec(dllexport)
	#else 
		#define SeApi __declspec(dllimport)
	#endif // SE_BUILD
#else 
#error windows only
#endif // WINDOWS

