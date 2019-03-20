#include <stdio.h>

int main(void)
{
    int i = 0;
    long j = 0;
    unsigned int k = 0;
    printf("%d\n", sizeof(i + (int) j * k)); /* 4 */
    printf("%d\n", sizeof(j));
    printf("%d\n", sizeof(k));
    return 0;
}