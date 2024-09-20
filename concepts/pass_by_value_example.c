#include <stdio.h>

// Attempt 2: swap using pointers

void swap(int *pa, int *pb) // pa -> a: 21 and pb -> b: 17
{
    int t = *pa; // t: 21
    *pa = *pb;   // pa -> a: 17 and pb -> b: 17
    *pb = t;     // pa -> a: 17 and pb -> b: 21
}

void swap(int *, int *);

int main(void)
{
    int a = 21; // a: 21
    int b = 17; // b: 21

    swap(&a, &b);
    printf("main: a = %d, b = %d\n", a, b); // a: 17 and b: 21

    return 0;
}

// Attempt 1: shows the "pass by value" feature of passing data to functions in C

/*
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("swap: a = %d, b = %d\n", a, b);
}
*/
