#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int *top_ptr = stack;

// Stack functions defined in terms of pointers

void make_empty(void);
bool is_empty(void);
bool is_full(void);

void make_empty(void)
{
    top_ptr = stack;
}

bool is_empty(void)
{
    return (top_ptr == stack);
}

bool is_full(void)
{
    return (top_ptr == stack + STACK_SIZE);
}
