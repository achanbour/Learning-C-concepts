#include <stdio.h>

int main(void)
{
    int d1, d2;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &d1, &d2);

    printf("The reversal is: %d%d\n", d2, d1);

    return 0;
}