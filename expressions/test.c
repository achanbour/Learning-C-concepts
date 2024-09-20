#include <stdio.h>

int main(void)
{
    int i = 3;
    int j = 4;
    int k = 5;

    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d", i, j, k);

    return 0;
}