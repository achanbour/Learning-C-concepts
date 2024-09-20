#include <stdio.h>

int check(int, int, int);

int main(void)
{
    int x, y, n;

    printf("Enter x: ");
    scanf(" %d", &x);
    printf("Enter y: ");
    scanf(" %d", &y);
    printf("Enter upper bound n: ");
    scanf(" %d", &n);

    printf("Result of check: %d\n", check(x, y, n));

    return 0;
}

int check(int x, int y, int n)
{
    return ((x >= 0 && x <= n - 1) && (y >= 0 && y <= n - 1)) ? 1 : 0;
}