//
// Created by lz199 on 2021/5/6.
//
#include <stdlib.h>

size_t merge_bytes(size_t x, size_t y) { return (size_t)((0xff & x) | (y & ~0xff)); }