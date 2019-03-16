#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &i);
    printf("In octal, your number is %05o\n", i);

    int r = 0;
    int n = 0;
    while (i > 0) {
        r = i % 8 * pow(10, n) + r;
        i = i / 8;
        n++;
    }
    printf("Result by another algorithm: %05d\n", r);

    return 0;
}