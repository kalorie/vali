#include <stdio.h>
#include <math.h>

int main(void)
{
    int n = 14; /* 16-bit signed */
    int r = 0;
    for (; n >= 0; n--) {
        r += pow(2, n);
    }
    printf("2^14 + ... 2^0 = %d\n", r);

    r = pow(2, 15);
    printf("2^15 - 1: %d\n", r - 1);

    return 0;
}