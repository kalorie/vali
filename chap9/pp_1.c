#include <stdio.h>

#define N 10

void selection_sort(int n, int a[]);
int find_largest(int n, int a[]);

/* Selection sort: recursive implementation */
int main(void)
{
    int i, a[N];

    printf("Enter %d numbers: \n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    selection_sort(N, a);

    printf("After selection sort: ");
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int n, int a[])
{
    if (n == 1) {
        return;
    } else {
        int i, largest = 0;
        /* swap */
        int largest_index = find_largest(n, a);
        int temp = a[largest_index];
        a[largest_index] = a[n - 1];
        a[n - 1] = temp;
        /* recursive */
        selection_sort(n - 1, a);
    }
}

int find_largest(int n, int a[])
{
    int i, largest = 0, index = 0;
    for (i = 0; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
            index = i;
        }
    }
    return index;
}