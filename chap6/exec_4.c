#include <stdio.h>

int main(void)
{
    int i = 0;

    for (i = 0; i < 10; i++) {
        printf("%d ", i);
    }

    printf("\n");

    for (i = 0; i < 10; ++i) {
        printf("%d ", i);
    }

    printf("\n");

    for (i = 0; i++ < 10;) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}