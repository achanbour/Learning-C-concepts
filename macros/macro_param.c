#include <stdio.h>

#define TOUPPER(c) ('a' <= (c) && c <='z' ? (c) - 'a' + 'A' : (c))

#define NELEMS(a) (sizeof(a) / sizeof(*a)) /* cast int type | replace *a by a[0] */

#define CUBE(x) ((x) * (x) * (x))

#define MEDIAN(x,y,z) (((x>y && x<z) || (x>z && x<y))? x: ((y>x && y<z) || (y>z && y<x)) ? y : z)

#define REMAINDER_BY_FOUR(x) ((x) % 4)

#define CHECK_PRODUCT(x,y) (((x) * (y)) < 100 ? 1 : 0)

#define DISP(f, x) (printf("%s(%d) = %d\n", #f, x, f(x)))

#define ERROR(fstr, index) (fprintf(stderr, #fstr, index))

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}

/* 

(a) Show the preprocessor's expansion of GENERIC_MAX(long)
GENERIC_MAX(long) expands into:

long long_max(long x, long y) {
    return x > y ? x: y;
}

NOTE: the preprocessor would actually expand all the tokens on one line

(b) Explain why GENERCIC_MAX doesn't work for basic types such as unsigned long

Solution: basic types such as unsigned long would not work with the ## operator due to spacing which
prevents GENERIC_MAX from creating the desired function name.

(c) Describe a technique that would allow us to use GENERIC_MAX with basic types such as unsigned long

Solution: define a simple macro for the basic type and use that macro in GENERIC_MAX

#define ULONG unsigned long

call GENERIC_MAX(ULONG)
*/

/*
We want a macro that expands into a string containing the current line number and file name

const char *str = LINE_FILE;

expanded into const char *str = "Line 10 of file foo.c"

where foo.c is the file containing the program and 10 is the line on which the invocation of LINE_FILE appears

Page 343 of chapter 14
*/

#define STRINGIZE(x) #x /* converts its argument to a string | NOTE: if x is a macro the call of STRINGIZE(x) doesn't expand the macro x */

#define TOSTRING(x) STRINGIZE(x) /* expands macro before passing to the STRINGIZE */

#define LINE_FILE "Line " TOSTRING(__LINE__) "of file " TOSTRING(__FILE__)

int is_even(int);
int square(int);


int main(void) {

    const char *str = LINE_FILE;

    // printf("%s\n", str);

    // printf("%d\n", MEDIAN(8, 23, 19));

    int index = 1;

    ERROR("Range error: index = %d\n", index);

    /*
    int x = 13;

    DISP(is_even, x);
    DISP(square, x);

    */

    return 0;
}

int is_even(int x) {

    return (x % 2);
}

int square(int x) {

    return (x * x);
}

