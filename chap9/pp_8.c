#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define N 6

int roll_dice(void);
bool play_game(void);

int main(void)
{
    char c;
    int sum_wins = 0, sum_loses = 0;
    srand((unsigned) time(NULL));

    do {
        bool win = play_game();
        if (win) {
            sum_wins++;
        } else {
            sum_loses++;
        }
        printf("\n");
        printf("Play again? ");
        c = toupper(getchar());
        getchar(); /* Trim the newline */
        printf("\n");
    } while (c != 'N');

    printf("Wins: %d Loses: %d\n", sum_wins, sum_loses);

    return 0;
}

int roll_dice(void)
{
    int n = 0;
    while (1) {
        n = rand() % (N + 1);
        if (n > 0) {
            break;
        }
    }

    return n;
}

bool play_game(void)
{
    int sum = roll_dice() + roll_dice();
    printf("You rolled: %d\n", sum);
    switch (sum) {
        case 7:
        case 11:
            printf("You win!\n");
            return true;
        case 2:
        case 3:
        case 12:
            printf("You lose!\n");
            return false;
        default:
            printf("Your point is %d\n", sum);
            break;
    }

    while (1) {
        sum = roll_dice() + roll_dice();
        printf("You rolled: %d\n", sum);
        switch (sum) {
            case 7:
                printf("You lose!\n");
                return false;
            case 1:
            case 4:
            case 5:
            case 6:
            case 8:
            case 9:
            case 10:
                printf("You win!\n");
                return true;
        }
    }
}