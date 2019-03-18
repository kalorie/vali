#include <stdio.h>

/* Prints a table of squares using an odd method */
int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%10d", i);
        int square = 0;
        int k = 0;
        while (k < i) {
            square += i;
            k++;
        }
        printf("%10d\n", square);
    }

    return 0;
}