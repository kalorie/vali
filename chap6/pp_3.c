#include <stdio.h>

int main(void)
{
    int numerator, denominator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    int gcd = 1;
    int n = numerator;
    int d = denominator;
    while (n > 0) {
        int r = d % n;
        if (r == 0) {
            gcd = n;
            break;
        }
        d = n;
        n = r;
        gcd *= r;
    }

    printf("In lowest terms: %d/%d\n", numerator / gcd, denominator / gcd);

    return 0;
}