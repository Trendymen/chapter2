//
// Created by lz199 on 2021/5/6.
//
int is_little_endian() {
  unsigned short num = 1;
  unsigned char *start = (unsigned char *) &num;
  if (start[0] == 0) return 0;
  return 1;
}
