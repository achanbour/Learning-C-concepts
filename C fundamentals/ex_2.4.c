#include <stdio.h>

int main(void)
{

    // Declare several int and floats without initialising them
    int a, b, c, d;
    float e, f, g, h;

    // The values printed for un-initialised variables depend on several factors

    printf("Integers a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);
    printf("Floats d: %f, e: %f, f: %f, g: %f\n", d, e, f, g);

    return 0;
}