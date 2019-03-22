#include <stdio.h>
#include <stdbool.h>

/* 
    Modify the repdigit.c program so that it shows which digits were repeated.
 */
int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    bool found = false;
    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            printf("%d ", digit);
            n /= 10;
            found = true;
            continue;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    if (!found) {
        printf("No repeated digit\n");
    } else {
        printf("\n");
    }

    return 0;
}