#include <stdio.h>
#include <stdlib.h>

int gcd(int, int);

int main(void)
{

    int m, n;

    printf("Enter integer m: ");
    scanf("%d", &m);
    printf("Enter integer n: ");
    scanf("%d", &n);

    if (m < 0 || n < 0)
    {
        return EXIT_FAILURE;
    }

    printf("The GCD of %d and %d is %d.\n", m, n, gcd(m, n));

    return EXIT_SUCCESS;
}

int gcd(int m, int n)
{
    int r = INT_MAX;

    if (m == 0 || n == 0)
        return 0;

    while (r > 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    return m;
}