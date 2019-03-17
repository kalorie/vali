#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    bool teenager = age >= 13 ? (age <= 19 ? true : false) : false;
    printf("Single assignment: %d\n", teenager);

    if (age >= 13) {
        if (age <= 19) {
            teenager = true;
        } else {
            teenager = false;
        }
    } else if (age < 13) {
        teenager = false;
    }
    printf("Standard conditional: %d", teenager);

    return 0;   
}