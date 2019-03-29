#include <stdio.h>

/* Decimal to binary */
void pb(int);

int main(void)
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    pb(n);

    return 0;
}

void pb(int n)
{
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}