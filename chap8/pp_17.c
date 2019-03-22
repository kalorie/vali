#include <stdio.h>

int main(void)
{
    int size;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);
    if (size % 2 == 0) {
        printf("Odd number is required.\n");
        return -1;
    }

    int i, j, n, plane[size][size];

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            plane[i][j] = 0;
        }
    }

    i = j = 0;
    for (n = 1; n <= size * size; n++) {
        if (n == 1) {
            i = 0;
            j = size / 2;
            plane[i][j] = 1;
            continue;
        }
        i = (i - 1 + size) % size;
        j = (j + 1) % size;
        if (plane[i][j] != 0) {
            /* restore */
            i = (i + 2) % size;
            j = (j - 1 + size) % size;
        }
        plane[i][j] = n;
    }

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%2d ", plane[i][j]);
        }
        printf("\n");
    }

    return 0;
}