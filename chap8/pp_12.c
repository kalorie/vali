#include <stdio.h>

#define SIZE 26

void print(int expected, int words[SIZE])
{
    int i;
    printf("%d: ", expected);
    for (i = 0; i < SIZE; i++) {
        if (words[i] == expected) {
            putchar(i + 'A');
        }
    }
    printf("\n");
}

int main(void)
{
    int words[SIZE] = {
        ['A' - 'A'] = 1,
        ['B' - 'A'] = 3,
        ['C' - 'A'] = 3,
        ['D' - 'A'] = 2,
        ['E' - 'A'] = 1,
        ['F' - 'A'] = 4,
        ['G' - 'A'] = 2,
        ['H' - 'A'] = 4,
        ['I' - 'A'] = 1,
        ['J' - 'A'] = 8,
        ['K' - 'A'] = 5,
        ['L' - 'A'] = 1,
        ['M' - 'A'] = 3,
        ['N' - 'A'] = 1,
        ['O' - 'A'] = 1,
        ['P' - 'A'] = 3,
        ['Q' - 'A'] = 10,
        ['R' - 'A'] = 1,
        ['S' - 'A'] = 1,
        ['T' - 'A'] = 1,
        ['U' - 'A'] = 1,
        ['V' - 'A'] = 4,
        ['W' - 'A'] = 4,
        ['X' - 'A'] = 8,
        ['Y' - 'A'] = 4,
        ['Z' - 'A'] = 10
    };

    print(1, words);
    print(2, words);
    print(3, words);
    print(5, words);
    print(8, words);
    print(10, words);

    return 0;
}