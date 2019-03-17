#include <stdio.h>

int main(void)
{
    int i = 17;
    printf("%d\n", i >= 0 ? i : -i); /* 17 */

    i = -17;
    printf("%d\n", i >= 0 ? i : -i); /* 17 */

    return 0;
}