#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 12

int month_day[12]; /* Fib */

bool is_leap_year(int year);
void split_date(int day_of_year, int year, int *month, int *day);
void build_month_day(int year);

int main(void)
{
    int day_of_year, year, month, day;

    printf("Enter the day of year between 1 and 366: ");
    scanf("%d", &day_of_year);
    if (day_of_year < 1 || day_of_year > 366) {
        printf("Invalid input\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter the year: ");
    scanf("%d", &year);

    build_month_day(year);

    split_date(day_of_year, year, &month, &day);
    printf("%.2d/%.2d\n", month, day);

    return 0;
}

bool is_leap_year(int year)
{
    return year % 400 == 0 || year % 4 == 0 && year % 100 != 0;
}

void build_month_day(int year)
{
    bool is_leap = is_leap_year(year);
    int i;
    month_day[0] = 31;
    month_day[1] = month_day[0] + (is_leap ? 29 : 28);
    for (i = 2; i < N; i++) {
        switch (i) {
            case 2: case 4: case 6: case 7: case 9: case 11:
                month_day[i] = month_day[i - 1] + 31;
                break;
            case 3: case 5: case 8: case 10:
                month_day[i] = month_day[i - 1] + 30;
                break;
        }
    }
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    int i;
    for (i = 0; i < N; i++) {
        if (day_of_year <= month_day[i]) {
            break;
        }
    }
    *month = i + 1;
    *day = day_of_year - month_day[i - 1];
}