//
// Created by lz199 on 2021/5/6.
//
unsigned replace_byte(unsigned x, int i, unsigned char b) {
  unsigned mask = ~(0xff << (i * 8));
  return (x & mask) | (b << (i * 8));
}