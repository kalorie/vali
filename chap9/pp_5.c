#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void)
{
    int n;

    printf("Enter the size of the magic square: ");
    scanf("%d", &n);

    int magic_square[n][n];
    create_magic_square(n, magic_square);
    print_magic_square(n, magic_square);

    return 0;
}

void create_magic_square(int n, int magic_square[n][n])
{
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            magic_square[i][j] = 0;
        }
    }

    srand((unsigned) time(NULL));

    int x = rand() % n;
    int y = rand() % n;
    magic_square[x][y] = 1;

    for (i = 2; i <= n * n; i++) {
        x = (x - 1 + n) % n;
        y = (y + 1) % n;
        if (magic_square[x][y] > 0) {
            x = (x + 2) % n;
            y = (y - 1 + n) % n;
        }
        magic_square[x][y] = i;
    }
}

void print_magic_square(int n, int magic_square[n][n])
{
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", magic_square[i][j]);
        }
        printf("\n");
    }
}
