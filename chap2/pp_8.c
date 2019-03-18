#include <stdio.h>

int main(void)
{
    float loan, interest_rate, payment;

    printf("Enter amount of load: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    float monthly_interest_rate = interest_rate / 100 / 12;

    float first = loan - payment + loan * monthly_interest_rate;
    printf("Balance remaining after first payment: $%.2f\n", first);

    float second = first - payment + first * monthly_interest_rate;
    printf("Balance remaining after second payment: $%.2f\n", second);

    float third = second - payment + second * monthly_interest_rate;
    printf("Balance remaining after third payment: $%.2f\n", third);

    return 0;
}