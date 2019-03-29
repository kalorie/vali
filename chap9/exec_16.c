#include <stdio.h>

int fact(int);

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d: %d\n", n, fact(n));

    return 0;
}

int fact(int n)
{
    return n == 1 ? 1 : n * fact(n - 1);
}