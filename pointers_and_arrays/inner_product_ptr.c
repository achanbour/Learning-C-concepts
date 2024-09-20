#include <stdio.h>

double inner_product(const double *, const double *, int);

int main(void)
{
    double a[] = {1.00, 2.00, 3.00};
    double b[] = {4.00, 5.00, 6.00};

    printf("Inner product: %f\n", inner_product(a, b, 3));

    return 0;
}

double inner_product(const double *a, const double *b, int n)
{
    const double *p;
    const double *q;
    double inner_product = 0;

    for (p = a, q = b; p < a + n; ++p, ++q)
    {
        inner_product += *p * *q;
    }

    return inner_product;
}