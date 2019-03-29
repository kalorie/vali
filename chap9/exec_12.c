#include <stdio.h>

#define N 5

double inner_product(double a[], double b[], int n);

int main(void)
{
    int i, n;
    double d, a[n], b[n];

    printf("Enter the number of array: ");
    scanf("%d", &n);

    printf("Enter %d doubles of the first array: ", n);
    for (i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%lf", &d);
        a[i] = d;
    }

    printf("Enter %d doubles of the second array: ", n);
    for (i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%lf", &d);
        b[i] = d;
    }

    printf("The inner product: %f\n", inner_product(a, b, n));

    return 0;
}

double inner_product(double a[], double b[], int n)
{
    int i;
    double sum = .0;
    for (i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }
    return sum;
}