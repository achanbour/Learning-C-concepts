#include <stdio.h>

#define CUBE(x) ((x) * (x))

#define REMAINDER_BY_FOUR(x) ((x) % 4)

#define CHECK_PRODUCT(x,y) (((x) * (y)) < 100 ? 1 : 0)

int main(void) {

    int n;
    int x,y;

    #if 0
    printf("Enter a number n: ");
    scanf("%d", &n);
    #endif

    printf("Enter a number x: ");
    scanf("%d", &x);
    printf("Enter a number y: ");
    scanf("%d", &y);

    printf("Product of x and y is less than 100: %d\n", CHECK_PRODUCT(x,y));

    #if 0
    printf("Cube of n: %d\n", CUBE(n));
    printf("Remainder of n by four: %d\n", REMAINDER_BY_FOUR(n));
    #endif

    return 0;
}