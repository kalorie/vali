#include <stdio.h>

int main(void)
{
    int x, y;

    /*
    scanf("%d", &x);
    scanf(" %d", &y);
    printf("%d, %d\n", x, y);
    */

    scanf("%d-%d-%d", &x, &x, &x);
    scanf("%d -%d -%d", &y, &y, &y);
    printf("%d, %d\n", x, y);
}
