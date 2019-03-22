#include <stdio.h>
#include <ctype.h>

#define SIZE 26

int main(void)
{
    int letters[SIZE] = {0};
    char c;

    printf("Enter first word: ");
    while ((c = getchar()) != '\n') {
        if (!isalpha(c)) {
            continue;
        }
        c = tolower(c) - 'a';
        letters[(int) c]++;
    }

    printf("Enter second word: ");
    while ((c = getchar()) != '\n') {
        if (!isalpha(c)) {
            printf("The words are not anagrams.\n");
            return -1;
        }
        c = tolower(c) - 'a';
        letters[(int) c]--;
    }

    int i;
    for (i = 0; i < SIZE; i++) {
        if (letters[i] != 0) {
            printf("The words are not anagrams.\n");
            return -1;
        }
    }

    printf("The words are anagrams.\n");

    return 0;
}