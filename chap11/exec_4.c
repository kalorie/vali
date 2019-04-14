#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int i = 1, j = 2;
    swap(&i, &j);
    printf("i: %d, j: %d\n", i, j);
    return 0;
}

void swap(int *p, int *q)
{
    int temp = *q;
    *q = *p;
    *p = temp;
}