#include <stdio.h>

int main(void)
{
    int score;
    printf("Enter the score: ");
    scanf("%d", &score);

    printf("Left: ");
    if (score >= 90) {
        printf("A");
    } else if (score >= 80) {
        printf("B");
    } else if (score >= 70) {
        printf("C");
    } else if (score >= 60) {
        printf("D");
    } else {
        printf("F");
    }

    printf("\n");

    printf("Right: ");
    if (score < 60) {
        printf("F");
    } else if (score < 70) {
        printf("D");
    } else if (score < 80) {
        printf("C");
    } else if (score < 90) {
        printf("B");
    } else {
        printf("A");
    }
    printf("\n");
}