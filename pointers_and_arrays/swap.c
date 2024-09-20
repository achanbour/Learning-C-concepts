#include <stdio.h>

void swap(int *, int *);

int main(void)
{
    int i = 1;
    int j = 2;

    swap(&i, &j);

    printf("i: %d\n", i);
    printf("j: %d\n", j);

    return 0;
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}