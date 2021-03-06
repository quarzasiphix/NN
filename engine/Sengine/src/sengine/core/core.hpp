#pragma once
#define DEV

#ifdef DEV
#define WINDOWS
#endif // DEV

#ifdef WINDOWS
	// Export
	#ifdef SE_BUILD
		#define SeApi __declspec(dllexport)
	#else 
		// Import
		#define SeApi __declspec(dllimport)
	#endif // SE_BUILD
#else 
#error windows only
#endif // WINDOWS

