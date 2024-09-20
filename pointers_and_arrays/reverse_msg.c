#include <stdio.h>

#define MAX_CHAR 50

int main(void)
{

    char c;
    char a[MAX_CHAR];
    char *p = &a[0];

    printf("Enter a message: ");
    while ((c = getchar()) != '\n')
    {
        if (p == &a[MAX_CHAR])
            break;

        *p++ = c;
    }

    printf("Reversal is: ");
    for (char *q = p - 1; q >= &a[0]; --q)
    {
        printf("%c", *q);
    }

    printf("\n");

    return 0;
}