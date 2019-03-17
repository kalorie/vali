#include <stdio.h>

int main(void)
{
    int income;
    float tax;
    printf("Enter your income: ");
    scanf("%d", &income);

    if (income < 750) {
        tax = income * .01f;
    } else if (income >= 750 && income < 2250) {
        tax = 7.5f + (750 - income) * .02f;
    } else if (income >= 2250 && income < 3750) {
        tax = 37.5f + (2250 - income) * .03f;
    } else if (income >= 3750 && income < 5250) {
        tax = 82.5 + (3750 - income) * .04f;
    } else if (income >= 5250 && income < 7000) {
        tax = 142.50 + (5250 - income) * .05f;
    } else {
        tax = 230.00 + (7000 - income) * .06f;
    }

    printf("The tax: $%.2f\n", tax);

    return 0;   
}