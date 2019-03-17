#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    printf("Largest: ");
    if (i1 > i2 && i1 > i3 && i1 > i4) {
        printf("%d\n", i1);
    } else if (i2 > i1 && i2 > i3 && i2 > i4) {
        printf("%d\n", i2);
    } else if (i3 > i1 && i3 > i2 && i3 > i4) {
        printf("%d\n", i3);
    } else {
        printf("%d\n", i4);
    }

    printf("Smallest: ");
    if (i1 < i2 && i1 < i3 && i1 < i4) {
        printf("%d\n", i1);
    } else if (i2 < i1 && i2 < i3 && i2 < i4) {
        printf("%d\n", i2);
    } else if (i3 < i1 && i3 < i2 && i3 < i4) {
        printf("%d\n", i3);
    } else {
        printf("%d\n", i4);
    }

    return 0;
}