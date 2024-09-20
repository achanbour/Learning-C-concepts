#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXCHAR 80

/*
Assumptions:
- A message has character limit 80
- A message ends with newline character
*/

int main(void)
{
    char c;
    char message[MAXCHAR];
    int shift, count = 0;

    printf("Enter message to be encrypted: ");
    while ((c = getchar()) != '\n')
    {
        if (count > MAXCHAR)
        {
            printf("Error: The entered message exceeded the character limit %d.\n", MAXCHAR);
            return EXIT_FAILURE;
        }

        message[count] = c;
        ++count;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    for (int i = 0; i <= count; ++i)
    {
        if (isalpha(message[i]))
        {
            // Upper case characters
            if (message[i] >= 'A' && message[i] <= 'Z')
            {
                printf("%c", ((message[i] - 'A') + shift) % 26 + 'A');
            }
            // Lower case characters
            // if (message[i] >= 'a' && message[i] <= 'z')
            else
            {
                printf("%c", ((message[i] - 'a') + shift) % 26 + 'a');
            }
        }
        else
        {
            printf("%c", message[i]);
        }
    }

    return 0;
}