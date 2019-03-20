#include <stdio.h>

int main(void)
{
    int i;
    short s;
    long l;
    float f;
    double d;
    long double ld;

    printf("int: %d\n", sizeof(i));
    printf("short: %d\n", sizeof(s));
    printf("long: %d\n", sizeof(l));
    printf("float: %d\n", sizeof(f));
    printf("double: %d\n", sizeof(d));
    printf("long double: %d\n", sizeof(ld));

    return 0;
}