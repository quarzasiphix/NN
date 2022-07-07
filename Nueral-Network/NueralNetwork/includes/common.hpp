#pragma once

#ifdef NnOsBuild
#define NnOsAPI __declspec(dllexport) 
#else
#define NnOsAPI __declspec(dllimport) 
#endif
#include "core/nnOsCore.hpp"
/*
#ifdef _WIN64
#define NnOsWindows 
#else
#define NnOsNotFound
#endif
*/
