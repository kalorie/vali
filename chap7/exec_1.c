#include <stdio.h>

int main(void)
{
    printf("%d %d %d\n", 077, 0x77, 0XABC); /* 63 119 2748 */
    return 0;
}