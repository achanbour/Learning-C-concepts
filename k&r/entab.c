#include <stdio.h>

/*
Below is a program that replaces strings of spaces by the minimum number of spaces and 
blanks to achieve the same spacing
*/

#define TABSIZE 8

int main() {
    
    int c, pos, nt, nb;

    /*
    Initialise number of tabs to 0
    Initialise number of blanks (spaces) to 0
    */
    nt = 0;
    nb = 0;

    for (pos = 0; (c = getchar()) != EOF; pos++) {
        // if a space is encountered
        if (c == ' ') {
            /* Check the current position:
            If it is not a multiple of TABSIZE, then increment blank count by 1
            */
            if ((pos % TABSIZE) != 0) 
                ++nb;
            /*
            If current position is a multiple of TABSIZE, then increment tab count by 1
            and set blank count to 0
            */
            else {
                nb = 0;
                ++nt;
            }
        }
        // if any other character is encountered
        else {
            // first print all tabs
            for (; nt > 0; --nt)
                putchar('\t');

            // if character encountered is tab, set the blank count to 0
            if (c == '\t')
                nb = 0;
            else
                // print all the remaining blanks
                for (; nb > 0; --nb)
                    putchar(' ');

            // print the character
            putchar(c);

            // if character encountered is new line, reset the position
            if (c == '\n')
                pos = 0;
            // if character encountered is tab, set next position to be the current pos + jump size
            else if (c == '\t')
                pos = pos + (TABSIZE - (pos % TABSIZE));
        }
    }
}