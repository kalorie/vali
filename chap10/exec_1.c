#include <stdio.h>

int a;

/* 
    a, b, c
 */
void f(int b)
{
    int c;
}

/* 
    a, d, e
 */
void g(void)
{
    int d;
    {
        int e;
    }
}

/* 
    a, f
 */
int main(void)
{
    int f;
    return 0;
}