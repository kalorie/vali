#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
    int numerator, denominator;

    printf("Enter denominator and numerator: ");
    scanf("%d %d", &denominator, &numerator);
    printf("GCD: %d\n", gcd(denominator, numerator));
    
    return 0;
}

int gcd(int m, int n)
{
    int gcd = 1;
    if (m % n == 0) {
        return n;
    }
    while (n > 0) {
        int r = m % n;
        if (r == 0) {
            break;
        }
        m = n;
        n = r;
        gcd *= r;
    }
    return gcd;
}