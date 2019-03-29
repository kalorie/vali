#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 26

void read_word(int counts[]);
bool equal_array(int counts1[], int counts2[]);

int main(void)
{
    int counts1[SIZE] = {0}, counts2[SIZE] = {0};

    printf("Enter the first words: ");
    read_word(counts1);
    printf("Enter the second words: ");
    read_word(counts2);
    printf("%d\n", equal_array(counts1, counts2));

    return 0;
}

void read_word(int counts[])
{
    char c;

    while ((c = getchar()) != '\n') {
        c = toupper(c);
        counts[(c - 'A') % SIZE] += 1;
    }
}

bool equal_array(int counts1[], int counts2[])
{
    int i;

    for (i = 0; i < SIZE; i++) {
        if (counts1[i] != counts2[i]) {
            return false;
        }
    }
    return true;
}