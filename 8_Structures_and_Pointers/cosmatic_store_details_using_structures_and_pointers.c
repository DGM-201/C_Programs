/* C program to get and display details of Cosmetics product/store using structures and pointers
and dynamic memory allocation */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cosmatic_store
{
    unsigned int total_amount;
    unsigned int bill_no;
    unsigned int water_used;
    char owner_name[32];
    char address[200];
};

void main()
{
    unsigned int user_number, i;
    printf("**Cosmetics store details**\n");
    printf("Enter the number of users you want to input: ");
    scanf("%d", &user_number);

    struct cosmatic_store details[user_number];
    struct cosmatic_store *struct_pointer[user_number];

    unsigned int waterconsumed = calloc(1,sizeof(int));
    unsigned int billno;
    unsigned int amount;
    char name[32];
    char address[200];

    for (i = 0; i < user_number; i++)
    {
        struct_pointer[i] = &details[i];

        printf("\nEnter owner name: \n");
        fflush(stdin);
        gets(name);
        strcpy(struct_pointer[i]->owner_name,name);

        printf("Enter Bill No: \n");
        scanf("%d", &billno);
        struct_pointer[i]->bill_no = billno;
        
        printf("Enter water consumed: \n");
        scanf("%d", &waterconsumed);
        struct_pointer[i]->water_used = waterconsumed;

        printf("Enter address: \n");
        fflush(stdin);
        gets(address);
        strcpy(struct_pointer[i]->address, address);

        printf("Enter total amount: \n");
        scanf("%d", &amount);
        struct_pointer[i]->total_amount = amount;

        printf("\nCosmetic Store details of User No.%d is: \n", i);
        printf("Owner Name: %s\nBill No: %d\nAddress: %s\n", details[i].owner_name, details[i].bill_no, details[i].address);
        printf("Water Consumed in litres: %d\nTotal Amount: %d\n", details[i].water_used, details[i].total_amount);
    }
}