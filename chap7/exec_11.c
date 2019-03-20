#include <stdio.h>

int main(void)
{
    int i;
    float f;
    double d;
    printf("%d\n", sizeof(i * f / d)); /* 8 */
    return 0;
}