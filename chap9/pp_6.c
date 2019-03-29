#include <stdio.h>
#include <math.h>

int compute(int);

int main(void)
{
    int n;

    printf("Enter the x: ");
    scanf("%d", &n);
    printf("Value: %d\n", compute(n));

    return 0;
}

int compute(int x)
{
    return 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
}