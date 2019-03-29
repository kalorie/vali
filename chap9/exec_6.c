#include <stdio.h>

#define N 10

int digit(int n, int k);

int main(void)
{
    int n, k;

    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("Enter the kth position: ");
    scanf("%d", &k);

    printf("Result: %d\n", digit(n, k));

    return 0;
}

int digit(int n, int k)
{
    if (k <= 0) {
        return -1;
    }
    int num = n;
    int i = 0;
    int digits[N] = {0};
    while (num > 0) {
        digits[i] = num % 10;
        num = num / 10;
        i++;
    }
    int len = i;
    if (k > len) {
        return 0;
    }
    return digits[k - 1];
}