#include <stdio.h>

#define SIZE 8
#define TRANS ('a' - 'A')

int main(void)
{
    char chess_board[SIZE][SIZE] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    };

    int i, j;
    for (i = 6; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            chess_board[i][j] = chess_board[SIZE - i - 1][j] - TRANS;
        }
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("'%c' ", chess_board[i][j]);
        }
        printf("\n");
    }

    return 0;
}