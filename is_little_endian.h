//
// Created by lz199 on 2021/5/5.
//
#ifndef CHAPTER2_IS_LITTLE_ENDIAN_H
#define CHAPTER2_IS_LITTLE_ENDIAN_H

#include <stdio.h>
int is_little_endian() {
  unsigned short num = 1;
  unsigned char *start = (unsigned char *) &num;
  if (start[0] == 0) return 0;
  return 1;
}
#endif//CHAPTER2_IS_LITTLE_ENDIAN_H
