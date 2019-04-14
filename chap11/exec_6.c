#include <stdio.h>

#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int i = 0, a[N] = {0}, largest, second_largest;

    printf("Enter the numbers: ");
    do {
        scanf("%d", &a[i]);
        i++;
    } while (getchar() != '\n');

    find_two_largest(a, i, &largest, &second_largest);
    printf("The largest: %d\n", largest);
    printf("The second largest: %d\n", second_largest);

    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i, j;

    for (i = 0; i < n; i++) {
        int max = 0, k = 0;
        for (j = i + 1; j < n; j++) {
            if (a[j] > max) {
                max = a[j];
                k = j;
            }
        }
        int temp = a[0];
        a[0] = a[k];
        a[k] = temp;
    }

    *largest = a[n - 1];
    *second_largest = a[n - 2];
}