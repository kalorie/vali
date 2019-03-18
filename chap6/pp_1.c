#include <stdio.h>

int main(void)
{
    float i;
    float max = .0f;
    while (1) {
        printf("Enter a number: ");
        scanf("%f", &i);
        if (i > max) {
            max = i;
        }
        if (i == 0.0f || i < 0.0f) {
            printf("The largest number entered was %f\n", max);
            return 0;
        }
    }

    return 0;
}