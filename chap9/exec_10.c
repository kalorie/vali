#include <stdio.h>

#define N 10

int max(int n, int a[]);
float avg(int n, int a[]);
int num_positive(int n, int a[]);

int main(void)
{
    int i = 0, prev, a[N];
    int c;

    printf("Enter array numbers one by one: ");
    do {
        scanf("%d", c);
        a[i] = c;
        i++;
    } while (c != (int) '\n');

    int len = i;
    printf("Max: %d\n", max(len, a));
    printf("Avg: %.2f\n", avg(len, a));
    printf("Num of positive: %d\n", num_positive(len, a));

    return 0;
}

int max(int n, int a[])
{
    int i = 0, max = 0;
    for (i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

float avg(int n, int a[])
{
    int i, sum = 0;
    float avg = .0f;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum / n;
}

int num_positive(int n, int a[])
{
    int r = 0, i;
    for (i = 0; i < n; i++) {
        if (a[i] > 0) {
            r++;
        }
    }
    return r;
}