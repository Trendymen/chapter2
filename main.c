#include "is_little_endian.h"
#include "show_bytes.h"
#include <stdio.h>

int main() {
  show_all_type_bytes();
  printf("Q:Is little endian?\nA:%s", is_little_endian() ? "true" : "false");
  return 0;
}