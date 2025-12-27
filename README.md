# LZ4 - Fast Compression Library

LZ4 is a lossless compression algorithm offering:
- Compression speed > 500 MB/s per core
- Decompression speed in multiple GB/s per core
- Adjustable compression ratio via "acceleration" factor
- High compression mode (LZ4_HC) for better ratios
- [Dictionary compression](https://github.com/facebook/zstd#the-case-for-small-data-compression) support

<br>

## Installation

Run:

```sh
$ npm i lz4.c
```

And then include `lz4.h` as follows:

```c
// main.c
#define LZ4_IMPLEMENTATION
#define LZ4HC_ENABLE     // Optional: Enable high compression functions
#define LZ4FRAME_ENABLE  // Optional: Enable frame API functions
#define LZ4FILE_ENABLE   // Optional: Enable file I/O functions
#include "node_modules/lz4.c/lz4.h"

int main() { /* ... */ }
```

And then compile with `clang` or `gcc` as usual.

```bash
$ clang main.c  # or, use gcc
$ gcc   main.c
```

You may also use a simpler approach:

```c
// main.c
#define LZ4_IMPLEMENTATION
#define LZ4HC_ENABLE     // Optional: Enable high compression functions
#define LZ4FRAME_ENABLE  // Optional: Enable frame API functions
#define LZ4FILE_ENABLE   // Optional: Enable file I/O functions
#include <lz4.h>

int main() { /* ... */ }
```

If you add the path `node_modules/lz4.c` to your compiler's include paths.

```bash
$ clang -I./node_modules/lz4.c main.c  # or, use gcc
$ gcc   -I./node_modules/lz4.c main.c
```

<br>

## Benchmarks

| Compressor             | Factor  | Compression | Decompression |
|------------------------|---------|-------------|---------------|
| memcpy                 | 1.000   | 13700 MB/s  | 13700 MB/s    |
| **LZ4 default**        | **2.101** | **780 MB/s** | **4970 MB/s** |
| **LZ4 HC -9**          | **2.721** | 41 MB/s     | **4900 MB/s** |
| zlib deflate -1        | 2.730   | 100 MB/s    | 415 MB/s      |

<br>

## Documentation

- [Block format](https://github.com/lz4/lz4/blob/dev/doc/lz4_Block_format.md)
- [Frame format](https://github.com/lz4/lz4/blob/dev/doc/lz4_Frame_format.md)

<br>

## Other Versions

LZ4 is available in multiple languages (Java, C#, Python, etc.). See the [LZ4 Homepage](http://www.lz4.org) for details.

<br>
<br>


[![SRC](https://img.shields.io/badge/src-repo-green?logo=Org)](https://github.com/lz4/lz4)
[![ORG](https://img.shields.io/badge/org-nodef-green?logo=Org)](https://nodef.github.io)
![](https://ga-beacon.deno.dev/G-RC63DPBH3P:SH3Eq-NoQ9mwgYeHWxu7cw/github.com/nodef/lz4.c)
