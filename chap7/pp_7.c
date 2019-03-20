#include <stdio.h>

int main(void)
{
    float f1, f2, v;
    char op;

    printf("Enter two fractions: ");
    scanf("%f %c %f", &f1, &op, &f2);
    switch (op) {
        case '+':
            v = f1 + f2;
            break;
        case '-':
            v = f1 - f2;
            break;
        case '*':
            v = f1 * f2;
            break;
        case '/':
            v = f1 / f2;
            break;
        default:
            return -1;
    }
    printf("The value is: %f\n", v);

    return 0;
}