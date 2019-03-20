#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Enter a command: ");
    char command = getchar();
    printf("Your command is: %c\n", command);
    return 0;
}