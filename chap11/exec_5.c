#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
    int hr, min, sec;
    long total_sec;

    printf("Enter the number of seconds since midnight: ");
    scanf("%ld", &total_sec);

    split_time(total_sec, &hr, &min, &sec);
    printf("%.2d:%.2d:%.2d\n", hr, min, sec);

    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 60;

    *min = total_sec - 60 * *hr;
    *min = *min < 0 ? 0 : *min;

    *sec = total_sec - 60 * *hr - 60 * *min;
    *sec = *sec < 0 ? 0 : *sec;
}