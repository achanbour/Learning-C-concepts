#include <stdio.h>

int my_strcmp(char *s1, char *s2) {

    int i;

    for (i = 0; s1[i] == s2[i]; i++) 
        if (s1[1] == '\0')
            return 0;

    return s1[i] - s2[i];
}