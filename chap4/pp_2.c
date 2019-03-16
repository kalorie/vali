#include <stdio.h>

int main(void)
{
    int i, first, middle, last;

    printf("Enter a three-digit number: ");
    scanf("%d", &i);

    first = i / 100;
    int temp = i % 100;
    middle = temp / 10;
    last = temp % 10;
    printf("The reversal is %d%d%d\n", last, middle, first);

    return 0;
}