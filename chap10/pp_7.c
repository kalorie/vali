#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10
#define SEGMENTS 7

const int segments[MAX_DIGITS][SEGMENTS] = {
    {1, 1, 1, 1, 1, 1, 0}, /* 0 */
    {1, 1, 0, 0, 0, 0, 0}, /* 1 */
    {1, 0, 1, 1, 0, 1, 1}, /* 2 */
    {1, 1, 1, 0, 0, 1, 1}, /* 3 */
    {1, 1, 0, 0, 1, 0, 1}, /* 4 */
    {0, 1, 1, 0, 1, 1, 1}, /* 5 */
    {0, 1, 1, 1, 1, 1, 1}, /* 6 */
    {1, 1, 0, 0, 0, 1, 0}, /* 7 */
    {1, 1, 1, 1, 1, 1, 1}, /* 8 */
    {1, 1, 1, 0, 1, 1, 1}  /* 9 */
};
char digits[MAX_DIGITS] = {' '};

void process_digit(char digit, int position);
void print_digits_array(void);
int ctoi(char);

int main(void)
{
    char c;
    int i = 0;

    printf("Enter a number: ");
    while ((c = getchar()) != '\n') {
        if (!isalnum(c)) {
            continue;
        }
        process_digit(c, i);
        i++;
        if (i == MAX_DIGITS) {
            break;
        }
    }

    print_digits_array();

    return 0;
}

void process_digit(char digit, int position)
{
    digits[position] = digit;
}

int ctoi(char c)
{
    return c - 48;
}

void print_digits_array(void)
{
    int i;
    for (i = 0; i < MAX_DIGITS; i++) {
        char n = digits[i];
        if (n == ' ') {
            break;
        }
        printf(" %c ", segments[ctoi(n)][5] == 1 ? '_' : ' ');
    }
    printf("\n");

    for (i = 0; i < MAX_DIGITS; i++) {
        char n = digits[i];
        if (n == ' ') {
            break;
        }
        printf("%c", segments[ctoi(n)][4] == 1 ? '|' : ' ');
        printf("%c", segments[ctoi(n)][6] == 1 ? '_' : ' ');
        printf("%c", segments[ctoi(n)][0] == 1 ? '|' : ' ');
    }
    printf("\n");

    for (i = 0; i < MAX_DIGITS; i++) {
        char n = digits[i];
        if (n == ' ') {
            break;
        }
        printf("%c", segments[ctoi(n)][3] == 1 ? '|' : ' ');
        printf("%c", segments[ctoi(n)][2] == 1 ? '_' : ' ');
        printf("%c", segments[ctoi(n)][1] == 1 ? '|' : ' ');
    }
    printf("\n");
}