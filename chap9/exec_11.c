#include <stdio.h>
#include <ctype.h>

#define N 10

float compute_gpa(char grades[], int n);

int main(void)
{
    char c, grades[N];
    int i = 0;

    printf("Enter grades: ");
    while ((c = getchar()) != '\n') {
        if (c == ' ') {
            continue;
        }
        grades[i] = toupper(c);
        i++;
    }

    printf("Average grades: %.2f\n", compute_gpa(grades, i));
    return 0;
}

float compute_gpa(char grades[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        switch (toupper(grades[i])) {
            case 'A':
                sum += 4;
                break;
            case 'B':
                sum += 3;
                break;
            case 'C':
                sum += 2;
                break;
            case 'D':
                sum += 1;
                break;
            case 'F':
                sum += 0;
            default:
                break;
        }
    }
    return (float) sum / n;
}