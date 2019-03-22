#include <stdio.h>

int main(void)
{
    int i, j;
    int temperature_readings[30][24] = {0};

    int sum_temperature = 0;
    for (i = 0; i < 30; i++) {
        for (j = 0; j < 24; j++) {
            sum_temperature += temperature_readings[i][j];
        }
    }

    printf("Average temperature for a month: %f\n", (float) sum_temperature / (30 * 24));

    return 0;
}