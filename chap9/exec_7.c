#include <stdio.h>
#include <stdlib.h>

int f(int a, int b);

int main(void)
{
    printf("%d\n", f(83, 12));
    printf("%f\n", f(83, 12));
    printf("%d\n", f(3.15, 9.28));
    printf("%f\n", f(3.15, 9.28));
    printf("%d\n", f((int) 3.15, (int) 9.28));
    printf("%f\n", f((int) 3.15, (int) 9.28)); /* Without explicitly cast, the compiler won't be able to correctly convert the double to int */

    return 0;
}

int f(int a, int b) {
    return abs(a - b);
}