#include <stdio.h>

void swap(int a, int b);

int main(void)
{

    int i = 1, j = 2;

    swap(i, j);
    /*
    Arguments are passed by value in C functions, meaning their values get copied into the
    respective function parameters. The execution of the function body only affects parameters
    and not arguments hence the arguments retain their original values after execution
    of the function.
    */
    printf("i = %d, j = %d\n", i, j);
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}