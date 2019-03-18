#include <stdio.h>

int main(void)
{
    int month, day, year;

    int m = 0, d = 0, y = 0;
    while (1) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &month, &day, &year);
        if (month == 0 && day == 0 && year == 0) {
            break;
        }
        if (m == 0 && d == 0 && y == 0) {
            m = month;
            d = day;
            y = year;
            continue;
        }

        if (year < y) {
            m = month;
            y = year;
            d = day;
        } else if (year == y) {
            if (month < m) {
                m = month;
                y = year;
                d = day;
            } else if (month == m) {
                if (day < d) {
                    m = month;
                    y = year;
                    d = day;
                }
            }
        }
    }

    printf("%d/%d/%02d is the earliest date\n", m, d, y);

    return 0;
}