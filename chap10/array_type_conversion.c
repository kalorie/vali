#include <stdio.h>

/* 
    Verify the conversion from char to int.
 */
int main(void)
{
    int i, j, array[1] = {0};
    char c = '1';

    i = c;
    array[0] = c;
    j = (int) c;

    printf("%d, %d, %d\n", i, array[0], j); /* 49 49 49 */

    return 0;
}