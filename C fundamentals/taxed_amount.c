#include <stdio.h>

#define TAX_CONST 1.05f

int main(void)
{
    float amount;
    printf("Enter amount: ");
    scanf("%f", &amount);
    printf("With tax added: %.2f", TAX_CONST * amount);

    return 0;
}