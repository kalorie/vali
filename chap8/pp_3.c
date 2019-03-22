#include <stdio.h>

/* 
    Modify the repdigit.c program so that the user can enter
    more than one number to be tested for repeated digits. The
    program should terminate when the user enters a number that's
    less than or equal to 0.
 */
int main(void)
{
    /* Illegal for an initializer to be completely empty */
    int digit_seen[10] = {0};
    int digit;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &digit);
        if (digit <= 0) {
            break;
        }
        digit_seen[digit]++;
    }
    
    int i;
    printf("Repeated digits: ");
    for (i = 0; i < 10; i++) {
        if (digit_seen[i] > 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}