#include <stdio.h>
#include <stdlib.h>

/*
Below is a program that accepts any number of user-entered dates and returns the earliest date
The program keeps track of a running variable for month, day and year, against which each entry is compared to obtain
the earliest date.

Bugs:
- The program currently assumes that all years are from 2000 onwards.
- The program does not handle negative entries (for days, months or years) while there could
be negative years. (use size_t instead of int for unsigned types)
*/

/*
****************************************************************************************
IMPROVED CODE
****************************************************************************************
*/
int main(void)
{

    int month, day, year;
    int earliest_month = 0, earliest_day = 0, earliest_year = 0;

    do
    {
        printf("Enter a date (mm/dd/yy): ");
        fflush(stdout);

        // Handle the case where the user enters something not in valid date format
        if (scanf("%d/%d/%d", &month, &day, &year) != 3)
        {
            printf("That's not a valid date format !\n");
            return EXIT_FAILURE;
        }

        // User input 0/0/0 exits the loop
        if (month == 0 && day == 0 && year == 0)
        {
            break;
        }

        // Assign the earliest variables, the values of the first user input
        if (earliest_month == 0 && earliest_day == 0 && earliest_year == 0)
        {
            earliest_month = month;
            earliest_day = day;
            earliest_year = year;
        }

        else if (year < earliest_year)
        {
            earliest_month = month;
            earliest_day = day;
            earliest_year = year;
        }
        else if (year == earliest_year && month < earliest_month)
        {
            earliest_month = month;
            earliest_day = day;
        }

        else if (year == earliest_year && month == earliest_month && day < earliest_day)
        {

            earliest_day = day;
        }

    } while (month != 0 && day != 0);

    printf("%d/%d/%.2d is the earliest date", earliest_month, earliest_day, earliest_year);

    return EXIT_SUCCESS;
}

/*
****************************************************************************************
INITIAL ATTEMPT
****************************************************************************************

int main(void)
{

    int month, day, year;
    int earliest_month, earliest_day, earliest_year;

    // Initialisation
    earliest_month = 0;
    earliest_day = 0;
    earliest_year = 0;

    do
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        // Initialisation 2

        if (earliest_month == 0 && earliest_day == 0 && earliest_year == 0)
        {
            earliest_month = month;
            earliest_day = day;
            earliest_year = year;
        }

        // First compare the years
        if (year != 0 && year < earliest_year)
        {
            earliest_year = year;
            earliest_month = month;
            earliest_day = day;
        }
        else if (year == earliest_year)
        {
            // If years are equal, compare months
            if (month != 0 && month < earliest_month)
            {
                earliest_month = month;
                earliest_day = day;
            }
            else if (month == earliest_month)
            {
                // If years and months are the equal, compare days
                if (day != 0 && day < earliest_day)
                {

                    earliest_day = day;
                }
            }
        }
    } while (year != 0);

    printf("%d/%d/%.2d is the earliest date", earliest_month, earliest_day, earliest_year);

    return 0;
}
*/