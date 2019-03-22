#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(void)
{
    int departure_time[N] = {
        8 * 60,
        9 * 60 + 43,
        11 * 60 + 19,
        12 * 60 + 47,
        14 * 60,
        15 * 60 + 45,
        19 * 60,
        21 * 60 + 45
    };
    
    int arrival_time[N] = {
        10 * 60 + 16,
        11 * 60 + 52,
        13 * 60 + 31,
        15 * 60,
        16 * 60 + 8,
        17 * 60 + 55,
        21 * 60 + 20,
        23 * 60 + 58
    };

    int hour, minute, closest = 0;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    int elapsed = hour * 60 + minute;
    int i, nearest = 0;
    for (i = 0; i < N; i++) {
        int diff = abs(elapsed - departure_time[i]);
        if (nearest == 0) {
            nearest = diff;
        } else {
            if (nearest > diff) {
                nearest = diff;
                closest = i;
            }
        }
    }

    int d = departure_time[closest];
    int a = arrival_time[closest];
    
    int dh = d / 60;
    int dm = d % 60;
    int ah = a / 60;
    int am = a % 60;

    printf("Closest departure time is %2d:%.2d, arriving at %2d:%.2d\n", dh, dm, ah, am);
}