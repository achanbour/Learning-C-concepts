#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/*
roll_dice generates two random numbers between 1 and 6 and returns their sum.
play_game simulates one game of craps and returns true if the user win, false if the user looses.
*/
int roll_dice(void);

bool play_game(void);

int main(void)
{
    char c;
    bool outcome;
    int num_wins = 0, num_losses = 0;

    for (;;)
    {
        outcome = play_game();

        if (outcome == true)
        {
            num_wins += 1;
            printf("You win!\n\n");
        }
        else
        {
            printf("You lose!\n\n");
            num_losses += 1;
        }
        printf("Play again? ");
        scanf(" %c", &c);
        if (toupper(c) != 'Y')
            break;
    }

    printf("Wins: %d Losses: %d\n", num_wins, num_losses);

    return 0;
}

int roll_dice(void)
{
    int d1, d2;

    srand((unsigned)time(NULL));

    d1 = (rand() % 6) + 1;
    d2 = (rand() % 6) + 1;

    return d1 + d2;
}

bool play_game(void)
{
    int roll = roll_dice();
    printf("You rolled: %d\n", roll);
    int point;

    if (roll == 7 || roll == 11)
        return true;
    else if (roll == 2 || roll == 3 || roll == 12)
        return false;
    else
    {
        point = roll;
        printf("Your point is %d\n", point);
        for (;;)
        {
            // Roll again
            roll = roll_dice();
            printf("You rolled: %d\n", roll);
            if (roll == point)
            {
                return true;
            }
            else if (roll == 7)
            {
                return false;
            }
        }
    }
}