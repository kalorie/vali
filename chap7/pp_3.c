#include <stdio.h>

int main(void)
{
    double d, sum = .0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0.0 to terminate): ");

    scanf("%lf", &d);
    while (d != 0.0) {
        sum += d;
        scanf("%lf", &d);
    }
    printf("The sum is: %f\n", sum);

    return 0;
}