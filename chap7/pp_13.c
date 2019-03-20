#include <stdio.h>

int main(void)
{
    int word_count = 0, char_count = 0;
    char c;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n') {
        if (c == ' ') { /* end of a word or using switch to collect all punctuations */
            word_count++;
        } else {
            char_count++;
        }
    }

    word_count++; /* The last word */

    printf("Average word length: %.1f\n", (float) char_count / word_count);

    return 0;
}