#include <stdio.h>

int main(void)
{
    char ch;
    /* When scanf is called the next time, it will read the first char on the next input line */
    do {
        scanf("%c", &ch);
    } while (ch != '\n');

    printf("'%c'/%d\n", ch, ch);

    return 0;
}