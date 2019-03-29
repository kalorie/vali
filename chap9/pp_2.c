#include <stdio.h>

float compute_tax_due(int);

/* 
    Income          Amount of tax
    Not over $750   1% of income
    $750-$2,250     $7.50   plus 2% of amount over $750
    $2,250-$3,750   $37.50  plus 3% of amount over $2,250
    $3,750-$5,250   $82.50  plus 4% of amount over $3,750
    $5,250-$7,000   $142.50 plus 5% of amount over $5,250
    Over $7,000     $230.00 plus 6% of amount over $7,000
 */
int main(void)
{
    int income;

    printf("Enter your income: ");
    scanf("%d", &income);
    printf("Your tax due: %.2f\n", compute_tax_due(income));

    return 0;
}

float compute_tax_due(int income)
{
    if (income <= 750) {
        return 750 * .01f;
    } else if (income > 750 && income <= 2250) {
        return 7.50f + (750 - income) * .02f;
    } else if (income > 2250 && income <= 3750) {
        return 37.50f + (2250 - income) * .03f;
    } else if (income > 3750 && income <= 5250) {
        return 82.50f + (3750 - income) * .04f;
    } else if (income > 5250 && income <= 7000) {
        return 142.50f + (5250 - income) * .05f;
    } else {
        return 230.00f + (7000 - income) * .06f;
    }
}