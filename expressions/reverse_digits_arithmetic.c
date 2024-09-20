#include <stdio.h>

int main(void)
{
    int n;
    int a, b, c, d;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    a = n / 100; // gives the first digit only
    b = n % 100; // gives the second and third digit
    c = b / 10;  // gives the second digit only
    d = b % 10;  // gives the third digit only

    printf("The reversal is: %d%d%d\n", d, c, a);

    return 0;
}