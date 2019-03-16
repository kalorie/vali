#include <stdio.h>

int main(void)
{
    int i = 1, j = 2;
    printf("%d\n", i += j); /* 3 */

    i = 1, j = 2;
    printf("%d\n", i--); /* 1 */

    i = 1, j = 2;
    printf("%d\n", i * j / i); /* 2 */

    i = 1, j = 2;
    printf("%d\n", i % ++j); /* 1 */

    return 0;
}