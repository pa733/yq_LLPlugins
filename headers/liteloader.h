#pragma once
#ifdef LITELOADER_EXPORTS
#    define LIAPI __declspec(dllexport)
#else
#    define LIAPI __declspec(dllexport)
#endif
typedef unsigned char uchar;
#define LiteLoaderVersion "1.1.0"
#define LiteLoaderVersionNum (unsigned short)10
