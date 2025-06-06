#pragma once

#pragma GCC diagnostic ignored "-Wmissing-field-initializers" 
#pragma GCC diagnostic warning "-Wunused-function"
#pragma GCC diagnostic warning "-Wunused-variable"
#pragma GCC diagnostic warning "-Wunused-but-set-variable"

#include <stdint.h>

// TODO: Convert to uint8
#define UNUSED(x) (void)x
#define RGBA_ALPHA(x) ((uint8_t)x << 24)
#define RGBA_RED(x) ((uint8_t)x << 16)
#define RGBA_GREEN(x) ((uint8_t)x << 8)
#define RGBA_BLUE(x) ((uint8_t)x << 0)
#define RGBA(r, g, b, a) (RGBA_RED(r) | RGBA_GREEN(g) | RGBA_BLUE(b) | RGBA_ALPHA(a))

#define COLOR_WHITE RGBA(255,255,255,0)
#define COLOR_BLACK RGBA(0,0,0,0)
#define COLOR_GREEN RGBA(0,255,0,0)
#define COLOR_RED RGBA(255,0,0,0)

#define DEFAULT_WINDOW_W 1280
#define DEFAULT_WINDOW_H 720
#define WINDOW_TITLE "Handmade Space Invaders"

#define PI 3.14159265359

#define STATUS_SUCCESS 0
#define STATUS_FAILURE -1

#define UINT32_MAXIMUM 0xFFFFFFFF

using uint64  = uint64_t;
using uint32  = uint32_t;
using uint16  = uint16_t;
using uint8   = uint8_t;
using int64   = int64_t;
using int32   = int32_t;
using int16   = int16_t;
using int8    = int8_t;
using float32 = float;
using float64 = double;
using status  = int32;
