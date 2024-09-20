#include <stdio.h>

double pol(double x);

double power(double x, int n);

int main(void)
{
    double x;
    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Polynomial evaluated at x: %f\n", pol(x));

    return 0;
}

double power(double x, int n)
{
    if (n == 0)
        return 1;

    x = x * power(x, n - 1);

    return x;
}
double pol(double x)
{
    // Define the polynomial term-wise
    return 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2) + 7 * x - 6;
}
