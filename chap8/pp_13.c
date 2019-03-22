#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 20
#define END '\0'

int main(void)
{
    char c, name[N], first;
    bool head = true, tail = false;
    int i = 0;

    printf("Enter a first and last name: ");
    while ((c = getchar()) != '\n') {
        if (c == ' ') {
            if (!head) {
                tail = true;
            }
            continue;
        }
        if (head) {
            first = toupper(c);
            head = false;
            continue;
        }
        if (tail) {
            name[i] = c;
            i++;
        }
    }
    name[i] = END;

    for (i = 0; i < N; i++) {
        if (name[i] == ' ') {
            continue;
        }
        if (name[i] == END) {
            break;
        }
        printf("%c", name[i]);
    }
    printf(", %c\n", first);

    return 0;
}