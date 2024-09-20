#include <stdio.h>

/*
The value of the mathematical constant e can be expressed as an infinite series.

Below is a program that approximates the constant e by a fixed sum based on n (integer
input by user).
*/

int main(void)
{

    int n;
    float e = 1.0f;

    printf("Enter an integer n: ");
    scanf("%d", &n);

    int i;

    /*
    factorial data type has to be set to float as for large values of n, the factorial
    value may lead to integer overflow.
    For even larger values, consider using the double data type to avoid overflow issues.
    */
    float factorial = 1.0f;

    for (i = 1; i <= n; ++i)
    {
        factorial *= i;
        e += (1.0f / factorial);
    }

    printf("%.10f\n", e);

    return 0;
}

/*
int main(void)
{

    int n;
    float e = 1.0f;

    printf("Enter an integer n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        float factorial = 1.0f;

        for (int j = 1; j <= i; ++j)
        {
            factorial *= j;
        }
        e += (1.0f / factorial);
    }

    printf("An approximation of e using an %d term sum is: %.10f", n, e);
}
*/