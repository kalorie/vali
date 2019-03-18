#include <stdio.h>

int main(void)
{
    float loan, interest_rate, payment;

    printf("Enter amount of load: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    float monthly_interest_rate = interest_rate / 100 / 12;

    while (1) {
        printf("Enter monthly payment: ");
        scanf("%f", &payment);

        float remaining = loan - payment + loan * monthly_interest_rate;
        printf("Balance remaining after payment: $%.2f\n", remaining);

        loan = remaining;
    }
    
    return 0;
}