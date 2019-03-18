#include <stdio.h>

int main(void)
{
    int days;
    printf("Enter number of days in month: ");
    scanf("%d", &days);

    int start;
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    int i;
    for (i = 1; i <= days + start - 1; i++) {
        if (i < start) {
            printf("  ");
            continue;
        }
        int day = i - start + 1;
        printf("%2d ", day);
        if (i % 7 == 0) {
            printf("\n");
        }
    }

    return 0;
}