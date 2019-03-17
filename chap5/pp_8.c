#include <stdio.h>

int main(void)
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    int elapsed = hour * 60 + minute;

    if (elapsed - 21 * 60 + 45 > 0) {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
    } else if (elapsed - 19 * 60 > 0) {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    } else if (elapsed - 15 * 60 + 45 > 0) {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    } else if (elapsed - 14 * 60 > 0 > 0) {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    } else if (elapsed - 12 * 60 + 47 > 0) {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
    } else if (elapsed - 11 * 60 + 19 > 0) {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    } else if (elapsed - 9 * 60 + 43 > 0) {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    } else if (elapsed - 8 * 60 > 0) {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    }

    return 0;
}