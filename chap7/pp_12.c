#include <stdio.h>
#include <math.h>

int main(void)
{
    char c;
    float sum, next;

    printf("Enter an expression: ");

    scanf("%f", &sum);

    while ((c = getchar()) != '\n') {
        scanf("%f", &next);

        switch (c) {
            case '+':
                sum += next;
                break;
            case '-':
                sum -= next;
                break;
            case '*':
                sum *= next;
                break;
            case '/':
                sum /= next;
                break;
        }
    }

    printf("Value of expression: %f\n", sum);

    return 0;
}