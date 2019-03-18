#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i;
    for (i = 2; i * i < n; i++) {
        if (i % 2 != 0) {
            continue;
        }
        printf("%d\n", i * i);
    }

    return 0;
}