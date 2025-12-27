#pragma once
#include "lz4/lz4.h"
#ifdef LZ4_IMPLEMENTATION
#include "lz4/lz4.c"
#endif
// #define LZ4_STATIC_LINKING_ONLY

#if defined(LZ4HC_ENABLE) || defined(LZ4FRAME_ENABLE) || defined(LZ4FILE_ENABLE)
#include "lz4/lz4hc.h"
#ifdef LZ4_IMPLEMENTATION
#include "lz4/lz4hc.c"
#endif
#endif

#if defined(LZ4FRAME_ENABLE) || defined(LZ4FILE_ENABLE)
#define XXH_INLINE_ALL
// #define LZ4F_STATIC_LINKING_ONLY
#include "lz4/lz4frame.h"
#ifdef LZ4_IMPLEMENTATION
#include "lz4/lz4frame.c"
#endif
#endif

#ifdef LZ4FILE_ENABLE
#include <stdio.h>
#include "lz4/lz4file.h"
#ifdef LZ4_IMPLEMENTATION
#include "lz4/lz4file.c"
#endif
#endif
