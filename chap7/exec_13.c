#include <stdio.h>

int main(void)
{
    char c = '\l';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;

    printf("%d\n", c); /* 108 */
    printf("%d\n", c * i); /* -324 */
    printf("%f\n", f / c); /*  */
    printf("%f\n", f - d); /* -1.0 */
    printf("%ld\n", s + m); /* 7 */
    printf("%f\n", d / s); /* 3.75 */
    printf("%d\n", (int) f); /* 6 */

    return 0;
}