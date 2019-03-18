#include <stdio.h>

int main(void)
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);

    int r;
    printf("The reversal is: ");
    do {
        r = i % 10;
        printf("%d", r);

        i = i / 10;
    } while (i > 0);

    printf("\n");    

    return 0;
}