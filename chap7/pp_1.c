#include <stdio.h>

/* short: 32767 */
int main(void)
{
    short s = 0; /* 32767 */
    int i = 0; /*  */
    long l = 0;

    printf("This program prints the largest value of each type.\n");

    while (1) {
        if (s + 1 < 0) {
            printf("%hd\n", s - 1);
            break;
        }
        s++;
    }

    while (1) {
        if (i + 1 < 0) {
            printf("%d\n", i - 1);
            break;
        }
        i++;
    }

    /* while (1) {
        if (l + 1 < 0) {
            printf("%ld\n", l - 1);
            break;
        }
        l++;
    } */

    return 0;
}