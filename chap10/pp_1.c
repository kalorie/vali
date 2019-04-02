#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 30

char stack[SIZE];
int top = 0;

bool counteract(char);
void push(char);
char pop(void);
bool parse(void);
bool is_empty(void);

int main(void)
{
    printf("Enter parentheses and/or braces: ");
    bool r = parse();

    if (r) {
        printf("Parentheses/braces are nested properly\n");
    } else {
        printf("Parentheses/braces are not nested properly\n");
    }

    return 0;
}

void push(char e)
{
    if (top == SIZE) {
        exit(-1);
    }
    stack[top] = e;
    top++;
}

char pop(void)
{
    if (top == 0) {
        exit(-2);
    }
    char c = stack[top];
    stack[top] = '\0';
    top--;
    return c;
}

bool is_empty(void)
{
    return top == 0;
}

bool counteract(char e)
{
    if (stack[top - 1] == e) {
        pop();
        return true;
    }
    return false;
}

bool parse(void)
{
    char c;

    while ((c = getchar()) != '\n') {
        switch (c) {
            case '(':
            case '{':
                push(c);
                break;
            case ')':
                if (counteract('(')) {
                    break;
                }
                return false;
            case '}':
                if (counteract('{')) {
                    break;
                }
                return false;
        }
    }

    if (is_empty()) {
        return true;
    }
    return false;
}