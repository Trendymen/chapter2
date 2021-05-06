//
// Created by lz199 on 2021/5/5.
//

#ifndef CHAPTER2_SHOW_BYTES_H
#define CHAPTER2_SHOW_BYTES_H
#include <stdio.h>
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
  size_t i;
  for (i = 0; i < len; ++i) printf("[%zu]%#4.2x%c", i, start[i], i != len - 1 ? *" " : *"\n");
}

void show_void(void *x) { show_bytes((byte_pointer) &x, sizeof(void *)); }
void show_int(int x) { show_bytes((byte_pointer) &x, sizeof(int)); }
void show_float(float x) { show_bytes((byte_pointer) &x, sizeof(float)); }
void show_short(short x) { show_bytes((byte_pointer) &x, sizeof(short)); }
void show_long(long x) { show_bytes((byte_pointer) &x, sizeof(long)); }
void show_double(double x) { show_bytes((byte_pointer) &x, sizeof(double)); }

void show_all_type_bytes() {
  for (int i = 0; i < 10; i++) {
    int val = -257 + i;
    //0011 0000 0011 1001
    //2^13+2^12+2^5+2^4+2^3+1
    show_short((short) val);
    show_int(val);
    show_long((long) val);
    //0 10001100 100 0000 1110 0100
    //E = 2^7+2^3+2^2 - (2^7 - 1) = 13
    //M=1.5069580078125
    //2^E*M =8192*(12345/8192)
    show_float((float) val);
    show_double((float) val);
    show_void(&val);
    printf("\n");
  }
}

#endif//CHAPTER2_SHOW_BYTES_H
