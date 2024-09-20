#include <stdio.h>
#include <ctype.h>

#define LASTNAMEMAX 20
int main(void)
{

    char firstInitial, c;
    char lastName[LASTNAMEMAX];
    int state = 0, i = 0, count = 0;

    printf("Enter a first and last name: ");
    scanf(" %c", &firstInitial);

    while ((c = getchar()) != '\n')
    {
        // Skip the remaining letters of the first name
        if ((c != ' ') && (state == 0))
            continue;
        else
            state = 1;

        // Skip the space between first and last name
        if ((c == ' ') && (state == 1))
            continue;
        // Store last name in array
        else
        {
            lastName[i] = c;
            ++i;
            ++count;
        }
    }

    // Display the name'
    printf("You entered the name: ");
    for (i = 0; i < count; ++i)
        printf("%c", lastName[i]);
    printf(", %c.\n", toupper(firstInitial));

    return 0;
}