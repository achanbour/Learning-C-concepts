#include <stdio.h>
#include <stdlib.h>

#define MAXCHAR 50

/*
Assumptions:
- A sentence contains up to 50 characters (including whitespaces and punctation)
- Sentence ends with either . OR ? OR !
*/

int main(void)
{
    char c, lastchar;
    char sentence[MAXCHAR];
    int count = 0;

    printf("Enter a sentence: ");

    // Store sentence in array
    while ((c = getchar()) != '.' && c != '?' && c != '!')
    {
        if (count < MAXCHAR)
        {
            sentence[count] = c;
            ++count;
        }
        else
            break;
    }

    // Store last character
    if (c == '.' || c == '?' || c == '!')
        lastchar = c;
    else
    { // Last character non terminating
        printf("Error: The entered sentence exceeded the character limit %d.\n", MAXCHAR);
        return EXIT_FAILURE;
    }

    printf("Reversal of sentence: ");
    // Search backward through array
    for (int i = count; i >= 0; --i)
    {

        if (sentence[i - 1] != ' ' && (i - 1) != -1)
            continue;
        else
        {
            int j = i;
            while (j != (count + 1) && sentence[j] != ' ')
            {
                printf("%c", sentence[j]);
                ++j;
            }
        }
        printf("%c", sentence[i - 1]);
    }

    return EXIT_SUCCESS;
}