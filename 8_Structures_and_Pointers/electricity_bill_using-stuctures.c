// C program to get and display details of Electricity Bill using structures.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct electricity_bill
{
    unsigned int bill_number;
    char owner_name[32];
    char address[100];
    unsigned int power_consumed;
    float total_amount;
};

void main()
{
    unsigned int user_number, i;
    printf("**Electricity Bill**\n");
    printf("Enter the number of users you want to input: ");
    scanf("%d", &user_number);

    struct electricity_bill details[user_number];

    unsigned int billnum;
    char ownername[32];
    char address[100];
    unsigned int powerused;
    float amount;

    for (i = 0; i < user_number; i++)
    {
        printf("\nEnter bill number: ");
        scanf("%d", &billnum);
        details[i].bill_number = billnum;

        printf("Enter owner name: \n");
        scanf("%s", &ownername);
        strcpy(details[i].owner_name, ownername);

        printf("Enter address: \n");
        scanf("%s", &address);
        strcpy(details[i].address, address);

        printf("Enter units of power consumed in watts: \n");
        scanf("%d", &powerused);
        details[i].power_consumed = powerused;

        printf("Enter the amount: \n");
        scanf("%f", &amount);
        details[i].total_amount = amount;

        printf("\nElectricity Bill details of User No.%d is: \n", i);
        printf("Bill Number: %d\nOwner Name: %s\nAddress: %s\n", billnum, ownername, address);
        printf("Units of power consumed in watts: %d\nAmount: %f\n", powerused, amount);
    }
}