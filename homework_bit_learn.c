//
// Created by lz199 on 2021/5/6.
//
int homework_2_61(int x) { return !(~x) || !x || !(0xff ^ x & 0xff) || !(x >> ((sizeof(int) - 1) << 3)); }
