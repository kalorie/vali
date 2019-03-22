#include <stdio.h>

#define SIZE 5

int main(void)
{
    int i, j, table[SIZE][SIZE];

    for (i = 0; i < SIZE; i++) {
        printf("Enter row %d: ", i + 1);
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &table[i][j]);
        }
    }

    printf("Row totals: ");
    for (i = 0; i < SIZE; i++) {
        int sum = 0;
        for (j = 0; j < SIZE; j++) {
            sum += table[i][j];
        }
        printf("%d ", sum);
    }
    printf("\nColumn totals: ");
    for (j = 0; j < SIZE; j++) {
        int sum = 0;
        for (i = 0; i < SIZE; i++) {
            sum += table[i][j];
        }
        printf("%d ", sum);
    }
    printf("\n");

    return 0;
}