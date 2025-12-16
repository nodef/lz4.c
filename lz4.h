#pragma once
#include "lz4/lz4.h"
#ifdef LZ4_IMPLEMENTATION
#include "lz4/lz4.c"
#endif
// #define LZ4_STATIC_LINKING_ONLY

#ifdef LZ4HC_ENABLE
#include "lz4/lz4hc.h"
#ifdef LZ4_IMPLEMENTATION
#include "lz4/lz4hc.c"
#endif
#endif

#ifdef LZ4FRAME_ENABLE
#include "lz4/xxhash.h"
#include "lz4/lz4frame.h"
#ifdef LZ4_IMPLEMENTATION
#include "lz4/xxhash.c"
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
