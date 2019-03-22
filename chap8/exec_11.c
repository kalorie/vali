#include <stdio.h>

#define SIZE 8

int main(void)
{
    char checker_board[SIZE][SIZE];
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if ((i + j) % 2 == 0) {
                checker_board[i][j] = 'B';
            } else {
                checker_board[i][j] = 'R';
            }
        }
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%c ", checker_board[i][j]);
        }
        printf("\n");
    }

    return 0;
}