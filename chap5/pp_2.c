#include <stdio.h>

int main(void)
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (minute >= 60) {
        printf("Invalid min: %d\n", minute);
    }

    printf("Equivalent 12-hour time: ");
    if (hour >=0 && hour < 12) {
        printf("%02d:%02d AM\n", hour, minute);
    } else if (hour == 24) {
        printf("00:%02d AM", minute);
    } else if (hour >= 12 && hour < 24) {
        hour = hour - 12;
        printf("%02d:%02d PM", hour, minute);
    }

    return 0;
}