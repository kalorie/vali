#include <stdio.h>

int main(void)
{
    int i = 2, j = 3;
    printf("%d\n", i * j == 6);

    i = 5, j = 10;
    int k = 1;
    printf("%d\n", k > i < j);

    i = 3, j = 2, k = 1;
    printf("%d\n", i < j == j < k); /* 1 */

    i = 3, j = 4, k = 5;
    printf("%d\n", i % j + i < k); /* 0 */

    return 0;
}