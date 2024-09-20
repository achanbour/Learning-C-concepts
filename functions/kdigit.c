#include <stdio.h>
#include <stdlib.h>

int digit(int, int);

int main(void)
{
    int n, k;

    printf("Enter positive number n: ");
    scanf("%d", &n);
    printf("Enter digit position k: ");
    scanf("%d", &k);

    if (n <= 0 || k <= 0)
        return EXIT_FAILURE;

    printf("Kth digit for k = %d in %d: %d\n", k, n, digit(n, k));

    return EXIT_SUCCESS;
}

int digit(int n, int k)
{
    int d;
    do
    {
        d = n % 10;
        n /= 10;
        --k;
    } while ((k != 0));

    if (n = 0)
        return 0;

    return d;
}