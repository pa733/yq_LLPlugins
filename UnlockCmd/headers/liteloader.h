#pragma once
#ifdef LITELOADER_EXPORTS
#    define LIAPI __declspec(dllexport)
#else
#    define LIAPI __declspec(dllexport)
#endif
typedef unsigned char uchar;
#define LiteLoaderVersion "1.0.2"
#define LiteLoaderVersionNum (unsigned short)8

#define LiteLoaderVersionGithub LiteLoaderVersion"-Ci-8baa443_1622373144"
