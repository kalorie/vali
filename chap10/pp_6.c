#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

#define SIZE 30

int stack[SIZE] = {0};
int top = 0;

void add(void);
void subtract(void);
void multiply(void);
void divide(void);
void compute(char);

int ctoi(char);
void display(void);

void push(int);
int pop(void);
bool is_empty(void);
bool is_full(void);

/* Reverse Polish Calculator */
int main(void)
{
    char ch;

    while (1) {
        printf("Enter an RPN expression: ");
        while (1) {
            scanf(" %c", &ch);
            if (toupper(ch) == 'Q') {
                return 0;
            }
            if (ch == '=') {
                display();
                break;
            }
            compute(ch);
        }
    }
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == SIZE;
}

void push(int c)
{
    if (is_full()) {
        printf("Expression is too complex.\n");
        exit(EXIT_FAILURE);
    }
    stack[top] = c;
    top++;
}

int pop(void)
{
    if (is_empty()) {
        printf("Not enough operands in expression.\n");
        exit(EXIT_FAILURE);
    }
    top--;
    int c = stack[top];
    stack[top] = 0;
    return c;
}

void display(void)
{
    printf("Value of expression: %d\n", pop());
}

void add(void)
{
    int op1 = pop();
    int op2 = pop();
    push(op1 + op2);
}

void subtract(void)
{
    int op1 = pop();
    int op2 = pop();
    push(op2 - op1);
}

void multiply(void)
{
    int op1 = pop();
    int op2 = pop();
    push(op1 * op2);
}

void divide(void)
{
    int op1 = pop();
    int op2 = pop();
    push(op2 / op1);
}

int ctoi(char c)
{
    return c - 48;
}

void compute(char c)
{
    switch (c) {
        case '+':
            add();
            break;
        case '-':
            subtract();
            break;
        case '*':
            multiply();
            break;
        case '/':
            divide();
            break;
        default:
            push(ctoi(c));
    }
}