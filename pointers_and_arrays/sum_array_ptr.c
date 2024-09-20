#include <stdio.h>

int sum_array(const int a[], int n)
{

    int sum = 0;
    for (int *p = a; p < a + n; ++p)
    {
        sum += *p;
    }
    return sum;
}