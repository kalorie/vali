#include <stdio.h>

int main(void)
{
    int high, low;
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &high, &low);

    printf("You entered the number ");
    switch (high) {
        case 1:
            switch (low) {
                case 0:
                    printf("ten\n");
                    return 0;
                case 1:
                    printf("eleven\n");
                    return 0;
                case 2:
                    printf("twelve\n");
                    return 0;
                case 3:
                    printf("thirteen\n");
                    return 0;
                case 4:
                    printf("fourteen\n");
                    return 0;
                case 5:
                    printf("fifteen\n");
                    return 0;
                case 6:
                    printf("sixteen\n");
                    return 0;
                case 7:
                    printf("seventeen\n");
                    return 0;
                case 8:
                    printf("eighteen\n");
                    return 0;
                case 9:
                    printf("nineteen\n");
                    return 0;
            }
        case 2:
            printf("twenty-");
            break;
        case 3:
            printf("thirty-");
            break;
        case 4:
            printf("forty-");
            break;
        case 5:
            printf("fifty-");
            break;
        case 6:
            printf("sixty-");
            break;
        case 7:
            printf("seventy-");
            break;
        case 8:
            printf("eighty-");
            break;
        case 9:
            printf("ninety-");
        default:
            break; 
    }

    switch (low) {
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine\n");
        default:
            break; 
    }

    return 0;
}