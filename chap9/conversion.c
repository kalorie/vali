#include <stdio.h>

int main(void)
{
    char c = '0' + 3 % 2;
    putchar(c); /* 1 */
    putchar('\n');
    putchar('0' + 3 % 2); /* 1 */
    putchar('\n');
    printf("%c %d\n", c, sizeof(c)); /* 1 1 */
    return 0;
}