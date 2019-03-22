#include <stdio.h>
#include <ctype.h>

#define SIZE 100
#define NUM_CHARS ((int) (sizeof(a) / sizeof(a[0])))

int main(void)
{
    int i = 0;
    char c, a[SIZE];

    printf("Enter message: ");
    while ((c = getchar()) != '\n') {
        c = toupper(c);
        a[i] = c;
        i++;
    }
    a[i] = '\0';

    printf("In B1FF-speak: ");
    for (i = 0; i < NUM_CHARS; i++) {
        if (a[i] == '\0') {
            break;
        }
        switch (a[i]) {
            case 'A':
                printf("%d", 4);
                break;
            case 'B':
                printf("%d", 8);
                break;
            case 'E':
                printf("%d", 3);
                break;
            case 'I':
                printf("%d", 1);
                break;
            case 'O':
                printf("%d", 0);
                break;
            case 'S':
                printf("%d", 5);
                break;
            default:
                printf("%c", a[i]);
                break;
        }
    }
    printf("!!!!!!!!!!\n");

    return 0;
}