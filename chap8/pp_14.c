#include <stdio.h>

#define SIZE 100

int main(void)
{
    char c, terminator, sentence[SIZE];
    int i = 0, end, start, len = 0;

    printf("Enter a sentence: ");
    while (1) {
        c = getchar();
        if (c == '!' || c == '?' || c == '.') {
            terminator = c;
            break;
        }
        sentence[i] = c;
        i++;
    }
    len = i;
    end = len;

    printf("Reversal of sentence: ");
    for (i = len - 1; i >= 0; i--) {
        if (sentence[i] == ' ') {
            int j;
            for (j = i + 1; j < end; j++) {
                putchar(sentence[j]);
            }
            putchar(' ');
            end = i;
        }
        if (i == 0) {
            while (i < end) {
                putchar(sentence[i]);
                i++;
            }
            i = 0;
        }
    }
    printf("%c\n", terminator);

    return 0;
}