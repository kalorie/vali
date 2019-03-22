#include <stdio.h>

/* 
    Modify the repdigit.c program so that it prints a table
    showing how many times each digit appears in the number.
 */
int main(void)
{
    /* Illegal for an initializer to be completely empty */
    int digit_seen[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_seen[digit] += 1;
        n /= 10;
    }

    printf("Digit: ");
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\nOccurrences: ");

    for (i = 0; i < 10; i++) {
        printf("%d ", digit_seen[i]);
    }
    printf("\n");

    return 0;
}