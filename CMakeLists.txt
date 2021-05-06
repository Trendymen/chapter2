cmake_minimum_required(VERSION 3.19)
project(chapter2 C)

set(CMAKE_C_STANDARD 11)

add_executable(chapter2
        main.c
        is_little_endian.c
        merge_bytes.c
        replace_byte.c
        homework_bit_learn.c)