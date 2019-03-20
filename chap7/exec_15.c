#include <stdio.h>

typedef char Int8;
typedef short Int16;
typedef int Int32;

int main(void)
{
    char c;
    short s;
    printf("%d %d\n", sizeof(c), sizeof(s));
    return 0;
}