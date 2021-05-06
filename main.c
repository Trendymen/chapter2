#include "homework_bit_learn.h"
#include "is_little_endian.h"
#include "merge_bytes.h"
#include "replace_byte.h"
#include "show_bytes.h"
#include <stdio.h>

int main() {
  show_all_type_bytes();
  printf("Q:Is little endian?\nA:%s\n", is_little_endian() ? "true" : "false");
  size_t x = 18;
  size_t y = 1111111111111111111;
  int i = 2;
  printf("merge_bytes(%#zx, %#zx)=>%#zx\n", x, y, merge_bytes(x, y));
  printf("replace_byte(%#x, %d, %#x)=>%#x\n", (unsigned int) y, 2, (unsigned int) x, replace_byte(y, i, x));
  printf("homework_2_61()=>%i,%i\n", homework_2_61((int) 0xffffffff), 0xffffffff);
  return 0;
}