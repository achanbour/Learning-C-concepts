#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = 0;
bool is_empty(void);
bool is_full(void);
void make_empty(void);
void push(int);
int pop(void);
int stack_overflow(void);
int stack_underflow(void);

int main(void)
{
    char ch;

    printf("Enter an RPN expression: ");
    for (;;)
    {
        scanf(" %c", &ch);

        if (ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' ||
            ch == '8' || ch == '9')
            push(ch - '0');

        else if (ch == '+')
        {
            int right_operand = pop();
            int left_operand = pop();
            push(left_operand + right_operand);
        }
        else if (ch == '-')
        {
            int right_operand = pop();
            int left_operand = pop();
            push(left_operand - right_operand);
        }
        else if (ch == '*')
        {
            int right_operand = pop();
            int left_operand = pop();
            push(left_operand * right_operand);
        }
        else if (ch == '/')
        {
            int right_operand = pop();
            int left_operand = pop();
            push(left_operand / right_operand);
        }
        else if (ch == '=')
        {
            printf("Value of expression: %d\n", stack[--top]);
            make_empty();
            printf("Enter an RPN expression: ");
            // break;
        }
        else
            break;
    }

    return EXIT_SUCCESS;
}

bool is_empty(void)
{
    return (top == 0);
}

bool is_full(void)
{
    return (top == STACK_SIZE);
}

void make_empty(void)
{
    top = 0;
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        stack[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return stack[--top];
}

int stack_overflow(void)
{
    printf("Expression is too complex\n");
    return EXIT_FAILURE;
}

int stack_underflow(void)
{
    printf("Not enough operands in expression\n");
    return EXIT_FAILURE;
}