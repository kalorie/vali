#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;
    printf("%d\n", sizeof(i + j - 'a')); /* 4 */
    return 0;
}