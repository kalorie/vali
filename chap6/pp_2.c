#include <stdio.h>

int main(void)
{
    int i1, i2;
    printf("Enter two integers: ");
    scanf("%d %d", &i1, &i2);

    int small = i1 > i2 ? i2 : i1;
    int large = i1 > i2 ? i1 : i2;
    int gcd = 1;
    if (large % small == 0) {
        gcd = small;
    } else {
        while (small > 0) {
            int r = large % small;
            if (r == 0) {
                break;
            }
            small = r;
            large = small;
            gcd *= r;
        }
    }

    printf("Greatest common divisor: %d\n", gcd);

    return 0;
}