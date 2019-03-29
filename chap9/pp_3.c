#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 10
#define DIRECTION 4
#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3

void generate_random_walk(char walk[SIZE][SIZE]);
void print_array(char walk[SIZE][SIZE]);

/* Random walk */
int main(void)
{
    char c, walk[SIZE][SIZE];

    while ((c = getchar()) != '0') {
        generate_random_walk(walk);
        print_array(walk);
    }

    return 0;
}

void generate_random_walk(char walk[SIZE][SIZE])
{
    int i, j;
    char c;

    srand((unsigned) time(NULL));

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            walk[i][j] = '.';
        }
    }

    i = j = 0;
    walk[i][j] = 'A';
    for (c = 'B'; c <= 'Z'; c++) {
        bool up, right, down, left, ok = false;
        up = right = down = left = true;
        while (1) {
            int direction = rand() % DIRECTION;
            switch (direction) {
                case UP:
                    i--;
                    if (i < 0 || walk[i][j] != '.') {
                        i++;
                        up = false;
                    } else {
                        walk[i][j] = c;
                        ok = true;
                        break;
                    }
                case RIGHT:
                    j++;
                    if (j > SIZE - 1 || walk[i][j] != '.') {
                        j--;
                        right = false;
                    } else {
                        walk[i][j] = c;
                        ok = true;
                        break;
                    }
                case DOWN:
                    i++;
                    if (i > SIZE - 1 || walk[i][j] != '.') {
                        i--;
                        down = false;
                    } else {
                        walk[i][j] = c;
                        ok = true;
                        break;
                    }
                case LEFT:
                    j--;
                    if (j < 0 || walk[i][j] != '.') {
                        j++;
                        left = false;
                    } else {
                        walk[i][j] = c;
                        ok = true;
                        break;
                    }
            }

            if (!up && !right && !down && !left) {
                return;
            }
            if (ok) {
                break;
            }
        }
    }
}

void print_array(char walk[SIZE][SIZE])
{
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
}