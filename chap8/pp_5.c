#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
    int i, low_rate, num_months, month;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of months: ");
    scanf("%d", &num_months);

    printf("\nMonths");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%6.2f%%", low_rate / 12.0f + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (month = 1; month <= num_months; month++) {
        printf("%3d    ", month);
        for (i = 0; i < NUM_RATES; i++) {
            value[i] += (low_rate + i) / 100.0 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}