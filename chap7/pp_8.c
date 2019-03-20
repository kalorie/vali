#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

/* 
    8:00 a.m.   10:16 a.m.
    9:43 a.m.   11:52 a.m.
    11:19 a.m.  1:31 p.m.
    12:47 p.m.  3:00 p.m.
    2:00 p.m.   4:08 p.m.
    3:45 p.m.   5:55 p.m.
    7:00 p.m.   9:20 p.m.
    9:45 p.m.   11:58 p.m.
 */
int main(void)
{
    char c;
    int hour, minute;
    bool is_pm = false;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hour, &minute);

    while ((c = getchar()) != '\n') {
        if (tolower(c) == 'p') {
            is_pm = true;
        }
    }

    int elapsed = 0;
    if (is_pm) {
        if (hour == 12) {
            elapsed = hour * 60 + minute;
        } else {
            elapsed = (hour + 12) * 60 + minute;
        }
    } else {
        elapsed = hour * 60 + minute;
    }

    if (elapsed - 21 * 60 + 45 > 0) {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    } else if (elapsed - 19 * 60 > 0) {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    } else if (elapsed - 15 * 60 + 45 > 0) {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    } else if (elapsed - 14 * 60 > 0) {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    } else if (elapsed - 12 * 60 + 47 > 0) {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    } else if (elapsed - 11 * 60 + 19 > 0) {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    } else if (elapsed - 9 * 60 + 43 > 0) {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    } else if (elapsed - 8 * 60 > 0) {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    }

    return 0;
}