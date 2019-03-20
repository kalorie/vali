#include <stdio.h>

int main(void)
{
    int i;
    float f;
    double d;
    printf("%d\n", sizeof(d = i + f)); /* 8 */
    return 0;
}