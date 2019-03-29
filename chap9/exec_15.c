#include <stdio.h>

double median(double, double, double);

int main(void)
{
    double x, y, z;

    printf("Enter three doubles: ");
    scanf("%lf %lf %lf", &x, &y, &z);
    printf("The median value: %f\n", median(x, y, z));

    return 0;
}

double median(double x, double y, double z)
{
    return x >= y ? (y >= z ? y : (x >= z ? z : x)) : (x >= z ? x : (y >= z ? z : y));
}