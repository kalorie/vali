#include <stdio.h>

int main(void)
{
    short days_in_month = 30;
    int days_in_year = 365;
    int min_in_day = 1440;
    long sec_in_day = 86400;

    printf("%hd %d %d %ld\n", days_in_month, days_in_year, min_in_day, sec_in_day);

    return 0;
}