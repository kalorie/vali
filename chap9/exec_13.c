#include <stdio.h>

#define SIZE 8

int evaluate_position(char board[][SIZE])
{
    int i, j, sum_white = 0, sum_black = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            switch (board[i][j]) {
                case 'Q':
                    sum_white += 9;
                    break;
                case 'R':
                    sum_white += 5;
                    break;
                case 'B':
                case 'N':
                    sum_white += 3;
                    break;
                case 'P':
                    sum_white += 1;
                    break;
                case 'q':
                    sum_black += 9;
                    break;
                case 'r':
                    sum_black += 5;
                    break;
                case 'b':
                case 'n':
                    sum_black += 3;
                    break;
                case 'p':
                    sum_black += 1;
                    break;
                default:
                    break;
            }
        }
    }
    if (sum_black > sum_white) {
        printf("Black wins.\n");
    } else if (sum_black < sum_white) {
        printf("White wins.\n");
    } else {
        printf("Deuce.\n");
    }
}