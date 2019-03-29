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
    int fact = 1;
    while (n > 0) {
        fact *= n;
        n--;
    }
    return fact;
}