#include <stdio.h>

double inner_product(double a[], double b[], int n);

int main(void)
{
    int n = 3;
    double a[3] = {1, 2, 3};
    double b[3] = {4, 5, 6};

    printf("Inner product of a and b is: %lf\n", inner_product(a, b, n));

    return 0;
}

double inner_product(double a[], double b[], int n)
{

    int inner_product = 0;

    for (int i = 0; i < n; ++i)
    {
        inner_product += (a[i] * b[i]);
    }

    return inner_product;
}