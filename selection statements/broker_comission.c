#include <stdio.h>

int main(void)
{
    float tradeValue, comission;

    printf("Enter the value of trade: ");
    scanf("%f", &tradeValue);

    if (tradeValue < 2500.00f)
        comission = 30.00f + 0.017f * tradeValue;
    else if (tradeValue < 6250.00f)
        comission = 56 + 0.0066f * tradeValue;
    else if (tradeValue < 20000.00f)
        comission = 76 + 0.0034f * tradeValue;
    else if (tradeValue < 50000.00f)
        comission = 100 + 0.0022f * tradeValue;
    else if (tradeValue < 500000.00f)
        comission = 155 + 0.0011f * tradeValue;
    else
        comission = 255 + 0.0009f * tradeValue;

    if (comission < 39.00f)
        comission = 39.00f;

    printf("Comission: %.2f\n", comission);

    return 0;
}