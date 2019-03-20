#include <stdio.h>

int main(void)
{
    printf("%o %x\n", '\b', '\b');
    printf("%o %x\n", '\n', '\n');
    printf("%o %x\n", '\r', '\r');
    printf("%o %x\n", '\t', '\t');

    return 0;
}