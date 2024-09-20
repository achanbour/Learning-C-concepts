#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    printf("Maximum value for signed integer: %d\n", INT_MAX);            // 2147483647
    printf("Maximum size for signed integer: %zu\n", sizeof(signed int)); // 4 bytes <- 32 bits
    printf("Maximum value for unsigned integer: %u\n", UINT_MAX);         // 4294967295

    return EXIT_SUCCESS;
}