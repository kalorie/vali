#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 10
#define DIRECTION 4
#define RIGHT 0
#define DOWN 1
#define LEFT 2
#define UP 3

int main(void)
{
    char c, map[SIZE][SIZE];
    int i = 0, j = 0, direction;
    bool next = false;

    srand((unsigned) time(NULL));

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (i == 0 && j == 0) {
                map[i][j] = 'A';
            } else {
                map[i][j] = '.';
            }
        }
    }

    i = j = 0;
    for (c = 'B'; c <= 'Z'; c++) {
        while (1) {
            direction = rand() % DIRECTION;
            switch (direction) {
                case RIGHT:
                    j++;
                    if (j > SIZE || map[i][j] != '.') {
                        j--;
                    } else {
                        map[i][j] = c;
                        next = true;
                        break;
                    }
                case DOWN:
                    i++;
                    if (i > SIZE || map[i][j] != '.') {
                        i--;
                    } else {
                        map[i][j] = c;
                        next = true;
                        break;
                    }
                case LEFT:
                    j--;
                    if (j < 0 || map[i][j] != '.') {
                        j++;
                    } else {
                        map[i][j] = c;
                        next = true;
                        break;
                    }
                case UP:
                    i--;
                    if (i < 0 || map[i][j] != '.') {
                        i++;
                    } else {
                        map[i][j] = c;
                        next = true;
                        break;
                    }
            }
            if (map[i + 1][j] != '.' && map[i - 1][j] != '.' && map[i][j + 1] != '.' && map[i][j - 1] != '.') {
                for (i = 0; i < SIZE; i++) {
                    for (j = 0; j < SIZE; j++) {
                        printf("%c ", map[i][j]);
                    }
                    printf("\n");
                }
                return 0;
            }
            if (next) {
                next = false;
                break;
            }
        }
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }

    return 0;
}