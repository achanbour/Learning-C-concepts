#include <stdio.h>

/*
The program assumes that tab stops occur at equal intervals (every 8th character starting
from 0)
Tab stops occur at the 8th, 16th, 24th etc. (multiple of 8) position
A tab stop is defined to be as the next character position to which the cursor jumps when
the user presses the TAB key. It is the multiple of 8 that is closest to the current
position.

pos = 0, jump = 8
pos = 1, jump = 7
pos = 2, jump = 6
pos = 3, jump = 5
pos = 4, jump = 4
pos = 5, jump = 3
pos = 6, jump = 2
pos = 7, jump = 1

Formula for jump: TABSIZE - (pos%TABSIZE)
*/

#define TABSIZE 8

int main()
{

    int c, pos, nspace;

    // track character position - initially 0
    pos = 0;
    // number of spaces to include instead of TAB
    nspace = 0;

    while ((c = getchar()) != EOF)
    {
        // if tab is encountered, compute the jump, enter a space until jump
        if (c == '\t')
        {
            ;
            nspace = TABSIZE - (pos % TABSIZE);
            for (; nspace > 0; --nspace)
            {
                putchar(' ');
                ++pos;
            }
        }
        // if newline encountered, reset the position
        else if (c == '\n')
            pos = 0;

        // print any other character to console
        else
        {
            putchar(c);
            ++pos;
        }
    }

    return 0;
}