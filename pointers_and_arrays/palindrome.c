#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_CHAR 50

int main(void)
{
    char c;
    char a[MAX_CHAR];
    char *p = &a[0];
    bool is_palindrome = true;

    printf("Enter a message: ");

    // Store the message in an array
    while ((c = getchar()) != '\n')
    {
        if (p == &a[MAX_CHAR])
            break;

        if (isalpha(c) == false)
            continue;

        *p++ = c;
    }

    // Check if palindrome: letters from left to right are the same as from right to left
    for (char *q = &a[0]; q <= p; q++)
    {
        if (tolower(*q) != tolower(*--p))
        {
            is_palindrome = false;
            break;
        }
        else
            continue;
    }

    if (is_palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}