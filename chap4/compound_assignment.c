#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 2;
    j = 2;
    k = 3;

    printf("i *= j + k: %d\n", i *= j + k);

    i = 2;
    j = 2;
    k = 3;
    printf("i = i * j + k: %d\n", i = i * j + k);
}