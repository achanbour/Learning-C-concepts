#include <stdio.h>

#define N 3

int main(void)
{
    int a[N][N];
    int *p;
    int stored_zeros = 0;

    for (p = a[0]; p < &a[N][N]; ++p)
    {
        if (stored_zeros == 0)
        {
            *p = 1;
            ++stored_zeros;
        }
        else if (stored_zeros < N)
        {
            *p = 0;
            ++stored_zeros;
        }
        else
        {
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}