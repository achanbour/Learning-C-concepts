#include <stdio.h>
#include <limits.h>

#define N 10

void find_two_largest(const int *, int, int *, int *);

int main(void)
{

    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int largest;
    int second_largest;

    find_two_largest(a, N, &largest, &second_largest);
    printf("Largest: %d,  second largest: %d\n", largest, second_largest);

    return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{

    const int *p;

    *largest = INT_MIN;
    *second_largest = INT_MIN;

    for (p = a; p < a + n; ++p)
    {
        if (*p > *largest)
        {
            *second_largest = *largest;
            *largest = *p;
        }
        else if (*p > *second_largest)
            *second_largest = *p;
    }
}