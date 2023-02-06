// C program to get and display details of Grocery Bill using structures.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct market_store
{
    char shop_name[32];
    unsigned int bill_number;
    char consumer_name[32];
    char item_list[200];
    char quantity[20];
    float total_amount;
};

void main()
{
    unsigned int user_number, i;
    printf("**Grocery Bill**\n");
    printf("Enter the number of users you want to input: ");
    scanf("%d", &user_number);

    struct market_store details[user_number];

    char shopname[32];
    unsigned int billno;
    char consumername[32];
    char grocery_list[200];
    char quantity[20];
    float amount;

    for (i = 0; i < user_number; i++)
    {
        printf("\nEnter shop name: \n");
        fflush(stdin);
        gets(shopname);
        strcpy(details[i].shop_name, shopname);

        printf("Enter bill number : \n");
        scanf("%d", &billno);
        details[i].bill_number = billno;

        printf("Enter consumer name: \n");
        fflush(stdin);
        gets(consumername);
        strcpy(details[i].consumer_name, consumername);

        printf("Enter grocery list: \n");
        gets(grocery_list);
        strcpy(details[i].item_list, grocery_list);

        printf("Enter quantity in KG: \n");
        gets(quantity);
        strcpy(details[i].quantity, quantity);

        printf("Enter amount: \n");
        scanf("%f", &amount);
        details[i].total_amount = amount;

        printf("\nGrocery Bill details of Customer No.%d is: \n", i);
        printf("Shop Name: %s\nBill No: %d\nConsumer Name: %s\n", details[i].shop_name, details[i].bill_number, details[i].consumer_name);
        printf("Grocery List: %s\nQuantity: %s\nAmount: %f\n", details[i].item_list, details[i].quantity, details[i].total_amount);
    }
}