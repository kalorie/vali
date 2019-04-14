#include <stdio.h>

int main(void)
{
    int i = 0, *p;
    p = &i;

    printf("*p: %d\n", *p);
    printf("*&p: %d\n", *&p); /* WRONG */
    /* printf("%d\n", *i); */
    printf("*&i: %d\n", *&i);
    printf("&p: %d\n", &p); /* WRONG */
    printf("&*p: %d\n", &*p); /* WRONG */
    printf("&i: %d\n", &i); /* WRONG */
    /* printf("&*i: %d\n", &*i); */

    return 0;
}