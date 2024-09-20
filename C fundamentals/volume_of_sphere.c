#include <stdio.h>

#define VOL_CONST (4.0f / 3.0f)
#define PI (3.14150f)

int main(void)
{
    int r;

    printf("Enter radius of sphere: ");
    scanf("%d", &r);

    printf("Volume of sphere: %.5f", VOL_CONST * PI * r * r * r);

    return 0;
}