#include <stdio.h>

int main(void)
{
    int first, middle, last;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &first, &middle, &last);

    printf("The reversal is: %d%d%d\n", last, middle, first);

    return 0;
}