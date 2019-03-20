#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

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

    if (is_pm && hour != 12) {
        hour += 12;
    }

    printf("Equivalent 24-hour time: %d:%d\n", hour, minute);

    return 0;
}