#include <stdio.h>

#define N 50
#define SIZE 26

/* 
    Caesar cipher
 */
int main(void)
{
    int i = 0, end, shift_amount;
    char c, message[N];

    printf("Enter message to be encrypted: ");
    while ((c = getchar()) != '\n') {
        message[i] = c;
        i++;
    }
    end = i;

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);
    if (shift_amount < 1 || shift_amount > 25) {
        printf("Invalid shift amount: %d\n", shift_amount);
        return -1;
    }

    printf("Encrypted message: ");
    for (i = 0; i < end; i++) {
        char ch = message[i];
        char t = ch;
        if (ch >= 'A' && ch <= 'Z') {
            t = (ch - 'A' + shift_amount) % SIZE + 'A';
        } else if (ch >= 'a' && ch <= 'z') {
            t = (ch - 'a' + shift_amount) % SIZE + 'a';
        }
        putchar(t);
    }
    putchar('\n');

    return 0;
}