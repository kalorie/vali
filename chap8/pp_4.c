#include <stdio.h>

#define SIZE (int) (sizeof(a) / sizeof(a[0]))

/* 
    Modify the reverse.c program to use the expression
    (int) (sizeof(a) / sizeof(a[0])) (or a macro with this value)
    for the array length;
 */
int main(void)
{
    int a[10], i;

    printf("Enter %d numbers: ", 10);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    printf("In reverse order:");
    for (i = SIZE - 1; i >= 0; i--) {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}