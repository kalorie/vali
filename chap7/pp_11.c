#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c, capital;

    printf("Enter a first and last name: ");

    scanf(" %c", &capital);

    /* Passes the first name */
    while ((c = getchar()) != ' ')
        ;

    /* Prints the last name */
    while ((c = getchar()) != '\n') {
        if (c == ' ') {
            continue;
        }
        printf("%c", c);
        /* putchar(c); */
    }

    printf(", %c.\n", toupper(capital));

    return 0;
}