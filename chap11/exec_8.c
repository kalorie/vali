#include <stdio.h>

#define N 10

int *find_largest(int a[], int n);

int main(void)
{
    int a[N] = {0}, i = 0, *p;
    char c;

    printf("Enter numbers into the array: ");
    do {
        scanf("%d", &a[i]);
        i++;
    } while (getchar() != '\n' && i < N);

    p = find_largest(a, N);
    printf("The largest value: %d\n", *p);

    return 0;
}

int *find_largest(int a[], int n)
{
    int i, k = 0, largest = 0;

    for (i = 0; i < n; i++) {
        if (largest < a[i]) {
            k = i;
            largest = a[i];
        }
    }

    return &a[k];
}