#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    int occurrences[26] = {0};

    printf("Enter first word: ");

    while ((c = getchar()) != '\n')
    {
        if (isalpha(c))
            // Increment entries in occurrences array
            occurrences[toupper(c) - 'A'] += 1;
    }

    printf("Enter second word: ");
    while ((c = getchar()) != '\n')
    {
        if (isalpha(c))
            // Decrement entries in occurrences array
            occurrences[toupper(c) - 'A'] -= 1;
    }

    for (int i = 0; i < 26; ++i)
    {

        if (occurrences[i] != 0)
        {
            printf("The words are not anagrams.\n");
            return -1;
        }
    }
    printf("The words are anagrams.\n");

    return 0;
}