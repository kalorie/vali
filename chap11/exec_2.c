#include <stdio.h>

int main(void)
{
    int i = 1, *p, *q;

    /* p = i;
    p = &q;
    p = *q; 
    *p = &i;
    p = *&q;  *q is not initialized
    *p = q; */
    p = q;
    *p = *q;
    printf("%d %p\n", *p);

    return 0;
}