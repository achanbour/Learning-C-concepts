#include <stdio.h>
#include <stdlib.h>

void create_magic_square(int n, char magic_square[][n]);
void print_magic_square(int n, char magic_square[][n]);

int main(void)
{
    int n;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    printf("Enter size of magic square: ");
    scanf("%d", &n);

    char magic_square[n][n];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            magic_square[i][j] = 0;
        }
    }

    // Check user input
    if ((n % 2) != 1 || n < 1 || n > 99)
    {
        printf("Error: The entered size is not an odd number between 1 and 99.\n");
        return EXIT_FAILURE;
    }

    create_magic_square(n, magic_square);

    print_magic_square(n, magic_square);

    return EXIT_SUCCESS;
}

void create_magic_square(int n, char magic_square[][n])
{
    // Initialise the coordinates in the magic square
    int x = 0, y = n / 2;

    // Place 1 in the middle of the first row
    magic_square[x][y] = 1;

    for (int i = 2; i <= (n * n); ++i)
    {
        int old_x = x, old_y = y;

        // Change position: one row above and over one column
        x = (x - 1 + n) % n; // add n to ensure result stays positive
        y = (y + 1) % n;

        // Check if entry is occupied
        if (magic_square[x][y] != 0)
        {
            x = (old_x + 1) % n;
            y = old_y;
        }

        magic_square[x][y] = i;
    }
}

void print_magic_square(int n, char magic_square[][n])
{
    printf("\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%3d ", magic_square[i][j]);
        }
        printf("\n");
    }
}