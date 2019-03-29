#include <stdio.h>

int day_of_year(int month, int day, int year);

int main(void)
{
    int year, month, day;

    printf("Enter year, month, day: ");
    scanf("%d %d %d", &year, &month, &day);
    printf("%d\n", day_of_year(month, day, year));

    return 0;
}

int day_of_year(int month, int day, int year)
{
    int days = (month - 1) * 30;
    int m = 1;
    while (m < month) {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) {
            days++;
        }
        if (m == 2) {
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
                days -= 1;
            } else {
                days -= 2;
            }
        }
        m++;
    }
    
    days += day;

    return  days;
}