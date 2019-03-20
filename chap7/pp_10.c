#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    short sum = 0;

    printf("Enter a sentence: ");
    while ((c = tolower(getchar())) != '\n') {
        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                sum += 1;
                break;
            default:
                break;
        }
    }
    printf("Your sentence contains %hd vowels.\n", sum);

    return 0;
}