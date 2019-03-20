#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int i_fact = 1;
    int k = n;
    while (k > 0) {
        i_fact = i_fact * k;
        k--;
    }
    printf("int Factorial of %d: %d\n", n, i_fact); /* 12! */

    k = n;
    short s_fact = 1;
    while (k > 0) {
        s_fact = s_fact * k;
        k--;
    }
    printf("short Factorial of %d: %hd\n", n, s_fact); /* 7! */

    k = n;
    long l_fact = 1;
    while (k > 0) {
        l_fact = l_fact * k;
        k--;
    }
    printf("long Factorial of %d: %ld\n", n, l_fact); /* 25! */

    k = n;
    long long ll_fact = 1;
    while (k > 0) {
        ll_fact = ll_fact * k;
        k--;
    }
    printf("long long Factorial of %d: %lld\n", n, ll_fact); /* 25! */

    k = n;
    float f_fact = 1.0;
    while (k > 0) {
        f_fact = f_fact * k;
        k--;
    }
    printf("float Factorial of %d: %f\n", n, f_fact);

    k = n;
    double d_fact = 1.0;
    while (k > 0) {
        d_fact = d_fact * k;
        k--;
    }
    printf("double Factorial of %d: %f\n", n, d_fact);

    k = n;
    long double ld_fact = 1.0;
    while (k > 0) {
        ld_fact = ld_fact * k;
        k--;
    }
    printf("long double Factorial of %d: %Lf\n", n, ld_fact);

    return 0;
}