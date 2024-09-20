#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    printf("Enter size of magic square: ");
    scanf("%d", &n);

    // Check user input
    if ((n % 2) != 1 || n < 1 || n > 99)
    {
        printf("Error: The entered size is not an odd number between 1 and 99.\n");
        return EXIT_FAILURE;
    }

    // Initiliase the two dimensional array corresponding to the nxn magic square
    int square[n][n];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            square[i][j] = 0;
        }
    }

    // Initialise the coordinates in the magic square
    int x = 0, y = n / 2;

    square[x][y] = 1;

    for (int i = 2; i <= (n * n); ++i)
    {
        int old_x = x, old_y = y;

        // Change position: one row above and over one column
        x = (x - 1) % n;
        if (x < 0)
            x += n;
        y = (y + 1) % n;

        // Check if entry is occupied
        if (square[x][y] != 0)
        {
            x = (old_x + 1) % n;
            y = old_y;
        }

        square[x][y] = i;
    }

    // Display the magic square
    printf("\n\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%2d ", square[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}