#include <stdio.h>

int main(void)
{
    int item_number;
    printf("Enter item number: ");
    scanf("%d", &item_number);

    float price;
    printf("Enter unit price: ");
    scanf("%f", &price);

    int year, month, day;
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%d\t$%6.2f\t%d/%d/%d\n", item_number, price, month, day, year);

    return 0;
}