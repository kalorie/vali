#include <stdio.h>

int main(void)
{
    int i, sum = 0;
    for (i = 0; i < 10; i++) {
        if (i % 2) {
            continue;
        }
        sum += i;
    }
    printf("%d\n", sum);

    /* 0+2+4+6+8=20 */

    return 0;
}