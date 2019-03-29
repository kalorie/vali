#include <stdio.h>

int num_digits(long n);

int main(void)
{
    long d;
    printf("Enter an integer: ");
    scanf("%ld", &d);
    printf("Number of digit: %d\n", num_digits(d));
    return 0;
}

int num_digits(long n)
{
    int i = 0;
    while (n > 0) {
        i++;
        n = n / 10;
    }
    return i;
}