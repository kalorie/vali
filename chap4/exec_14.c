#include <stdio.h>

int a, b, c, d, e;

void reset()
{
    a = 5;
    b = 4;
    c = 3;
    d = 2;
    e = 1;
}

int main(void)
{
    reset();
    printf("%d %d\n", a * b - c * d + e, (a * b) - (c * d) + e); /* 15 */

    reset();
    printf("%d %d\n", a / b % c / d, ((a / b) % c) / d); /* 0 */

    reset();
    printf("%d %d\n", - a - b + c - + d, ((-a) - b + c - (+d))); /* -8 */

    reset();
    printf("%d %d\n", a * - b / c - d, a * (-b) / c - d); /* -8 */

    return 0;
}