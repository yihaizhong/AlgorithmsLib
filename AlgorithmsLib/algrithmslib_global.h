#pragma once
#ifdef ALGORITHMSLIB_EXPORTS
#define ALG_API __declspec(dllexport)
#else
#define ALG_API __declspec(dllimport)
#endif