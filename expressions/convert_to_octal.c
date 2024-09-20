#include <stdio.h>

int main(void)
{
    int n;

    int q, r1, r2, r3, r4, r5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    r5 = n % 8; // 5th digit of octal number
    q = n / 8;
    r4 = q % 8; // 4th digit of octal number
    q = q / 8;
    r3 = q % 8; // 3rd digit of octal number
    q = q / 8;
    r2 = q % 8; // 2nd digit of octal number
    q = q / 8;
    r1 = q % 8; // 1st digit of octal number

    printf("In octal, your number is: %d%d%d%d%d", r1, r2, r3, r4, r5);

    return 0;
}