#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool weekend[] = {[0] = true, [6] = true};
    printf("Length of the array: %d\n", (int) (sizeof(weekend) / sizeof(weekend[0])));
    return 0;
}