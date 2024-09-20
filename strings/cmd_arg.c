#include <stdio.h>
#include <string.h>

/*
argc: number of command-line arguments
argv: array of pointers to strings
*argv[] is the same as **argv as a[] is equivalent to *a when passed as parameters to functions
*/

int main(int argc, char *argv[]) {

    char ** p; /* p is a double pointer: pointer to a pointer */ 

    
    /* p is a pointer to a pointer to an array element so pointer arithmetic is defined */
    for (p = &argv[1]; p < argv[argc]; p++) { 
        printf("%s\n", *p); /* *p points to the first character in a string so printing it is defined */
    }

}