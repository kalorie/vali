#include <stdio.h>
#include <math.h>

int main(void)
{
    float x;

    printf("Enter a positive number: ");
    scanf("%f", &x);

    double y1 = 1;
    double q = x / y1;
    double y2 = (y1 + q) / 2;
    while (fabs(y1 - y2) >= y1 * 0.0001) {
        y1 = y2;
        q = x / y1;
        y2 = (y1 + q) / 2;
    }
    
    printf("Square root: %.5f\n", y2);

    return 0;
}