#include <stdio.h>

int main(void)
{
    int dollar;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar);

    int twenty = 0;
    int ten = 0;
    int five = 0;
    int one = 0;

    twenty = dollar / 20;
    ten = (dollar - twenty * 20) / 10;
    five = (dollar - ten * 10 - twenty * 20) / 5;
    one = dollar - ten * 10 - twenty * 20 - five * 5;

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);

    return 0;
}