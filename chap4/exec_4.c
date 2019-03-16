#include <stdio.h>

int main(void)
{
    /* In C99, the sign of i % j always depends on i */
    printf("%d\n", 8 % 5);
    printf("%d\n", -8 % 5);
    printf("%d\n", 8 % -5);
    printf("%d\n", -8 % -5);

    return 0;
}