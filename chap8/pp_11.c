#include <stdio.h>
#include <ctype.h>

#define N 15
#define END '\0'

int main(void)
{
    int i = 0;
    char c, phone[N];

    printf("Enter phone number: ");
    while ((c = getchar()) != '\n') {
        phone[i] = toupper(c);
        i++;
    }
    phone[i] = END;

    for (i = 0; i < N; i++) {
        if (phone[i] == '\0') {
            break;
        }
        switch (phone[i]) {
            case 'A':
            case 'B':
            case 'C':
                putchar('2');
                break;
            case 'D':
            case 'E':
            case 'F':
                putchar('3');
                break;
            case 'G':
            case 'H':
            case 'I':
                putchar('3');
                break;
            case 'J':
            case 'K':
            case 'L':
                putchar('5');
                break;
            case 'M':
            case 'N':
            case 'O':
                putchar('6');
                break;
            case 'P':
            case 'R':
            case 'S':
                putchar('7');
                break;
            case 'T':
            case 'U':
            case 'V':
                putchar('8');
                break;
            case 'W':
            case 'X':
            case 'Y':
                putchar('9');
                break;
            default:
                putchar(phone[i]);
        }
    }

    return 0;
}