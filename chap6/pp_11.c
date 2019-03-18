#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i;
    float r = 1.0f;
    int last;
    for (i = 1; i <= n; i++) {
        int d;
        if (i == 1) {
            d = 1;
        } else {
            d = i * last;
        }
        last = d;
        float item = 1.0f / d;
        r += item;
    }
    printf("The value of e is: %f\n", r);

    return 0;
}