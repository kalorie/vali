#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    /* Swallow the left chars by scanf */
    getchar();

    for (i = 1; i <= n; i++) {
        int d = i - 1;
        if (d > 0 && d % 24 == 0) {
            printf("Press Enter to continue...\n");
            while (getchar() != '\n')
                ;
        }
        printf("%10d%10d\n", i, i * i);
    }
    return 0;
}