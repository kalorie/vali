#include <stdio.h>

int main(void)
{
    int i, j;
    printf("Enter i and j: ");
    scanf("%d %d", &i, &j);
    printf("%d\n", i <= j ? (i == j ? 0 : -1) : 1);
    return 0;
}