#include <stdio.h>

int main(void)
{
    float e = 1.0f;
    float epsilon;

    printf("Enter the lower bound sum term epsilon: ");
    scanf("%f", &epsilon);

    float factorial = 1.0f;
    float sum_term = 1.0f;
    int i = 1;

    while (sum_term >= epsilon)
    {
        factorial *= i;
        sum_term = (1.0f / factorial);
        if (sum_term < epsilon)
        {
            break;
        }
        else
        {
            e += sum_term;
            ++i;
        }
    }

    printf("e approximation obtained: %.10f\n", e);
}