#include <stdio.h>
#include <stdalign.h>

/*
zu is a format specifier for size_t type (return type of sizeof() and alignof() functions)

----------------------------------------------------------------------------------------
int types in C:

> unsigned int is an unsigned integer of a system defined size but probably 32 bits.

> uint32_t is an unsigned integer of 32 bits. Probably the same as unsigned int but not guaranteed to be so.

> size_t is the type used to specify the size of memory allocations and the underlying type for indexes in the standard library. uint32_t is used when you must have a 32 bit unsigned. int or unsigned int for general purposes when you don't need a guaranteed size and unsigned only if you can ensure that you won't have negative numbers.
*/

int main()
{
    printf("Size of size_t: %zu\n", sizeof(size_t));   // 8 bytes -> 64 bits
    printf("Alignment of char: %zu\n", alignof(char)); // 1 byte -> 8 bit
}