#include <stdio.h>
#include <stdbool.h>

bool parse(void);

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

bool parse(void)
{
    char c, a[30] = {'\0'};
    int top = 0;

    bool counteract(char e)
    {
        if (a[top - 1] == e) {
            a[top - 1] = '\0';
            top--;
            return true;
        }
        return false;
    };

    while ((c = getchar()) != '\n') {
        switch (c) {
            case '(':
            case '{':
                a[top] = c;
                top++;
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
            default:
                continue;
        }
    }

    if (top == 0) {
        return true;
    }
    return false;
}