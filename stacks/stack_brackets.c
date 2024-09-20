#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

int top = 0;
char stack[STACK_SIZE];
bool underflow = false;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
int stack_overflow(void);
void stack_underflow(void);
void push(char);
char pop(void);

int main(void)
{
    char c;
    bool is_nested = true;

    printf("Enter parentheses and/or braces: ");
    while ((c = getchar()) != '\n')
    {
        if (c == '(' || c == '{')
            push(c);
        if (c == ')' && pop() != '(')
            is_nested = false;
        if (c == '}' && pop() != '{')
            is_nested = false;
    }

    if (is_empty() == false || underflow == true)
        is_nested = false;

    if (is_nested)
        printf("Parentheses/braces are nested properly\n");
    else
        printf("Parentheses/braces are not nested properly\n");

    return EXIT_SUCCESS;
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return (top == 0);
}

bool is_full(void)
{
    return (top == STACK_SIZE);
}

int stack_overflow(void)
{

    if (is_full())
    {
        printf("Error: Stack overflow");
        return EXIT_FAILURE;
    }
}

void stack_underflow(void)
{
    underflow = true;
}

void push(char c)
{
    if (is_full())
    {
        stack_overflow();
    }
    else
    {
        stack[top++] = c;
    }
}

char pop(void)
{
    if (is_empty())
    {
        stack_underflow();
    }
    else
    {
        return stack[--top];
    }
}
