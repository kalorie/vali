#include <stdio.h>

#define SIZE 5

int main(void)
{
    int i, j;
    int scores[SIZE][SIZE];

    for (i = 0; i < SIZE; i++) {
        printf("Enter score of quiz %d: ", i + 1);
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &scores[i][j]);
        }
    }

    for (j = 0; j < SIZE; j++) {
        int sum = 0;
        for (i = 0; i < SIZE; i++) {
            sum += scores[i][j];
        }
        printf("Student %d: total = %d, average = %.2f\n", j + 1, sum, sum / 5.0f);
    }

    for (i = 0; i < SIZE; i++) {
        int total = 0, high = 0, low = 0;
        for (j = 0; j < SIZE; j++) {
            if (j == 0) {
                high = scores[i][j];
                low = scores[i][j];
            }
            total += scores[i][j];
            if (scores[i][j] > high) {
                high = scores[i][j];
            }
            if (scores[i][j] < low) {
                low = scores[i][j];
            }
        }
        printf("Quiz %d: average = %.2f, high = %d, low = %d\n", i + 1, total / 5.0f, high ,low);
    }

    return 0;
}