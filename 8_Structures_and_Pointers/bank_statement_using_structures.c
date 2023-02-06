// C program to get and display details of Bank Statement using structures.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bank_statement
{
    unsigned int account_number;
    unsigned int transaction_id;
    unsigned int last_transaction_amount;
    char accountholder_name[32];
    char bank_name[20];
    char address[200];
    char date[20];
};

void main()
{
    unsigned int user_number, i;
    printf("**Bank Statement**\n");
    printf("Enter the number of users you want to input: ");
    scanf("%d", &user_number);

    struct bank_statement details[user_number];

    unsigned int accountno;
    unsigned int transactionid; 
    unsigned int last_trans_amount;
    char accountname[32];
    char bankname[20];
    char address[200];
    char date[20];

    for (i = 0; i < user_number; i++)
    {
        printf("\nEnter Account number: \n");
        fflush(stdin);
        scanf("%d", &accountno);
        details[i].account_number = accountno;

        printf("Enter Transaction ID: \n");
        fflush(stdin);
        scanf("%d", &transactionid);
        details[i].transaction_id = transactionid;

        printf("Enter last Transaction Amount: \n");
        fflush(stdin);
        scanf("%d", &last_trans_amount);
        details[i].last_transaction_amount = last_trans_amount;

        printf("Enter Account Name : \n");
        fflush(stdin);
        gets(accountname);
        strcpy(details[i].accountholder_name, accountname);

        printf("Enter Bank Name : \n");
        fflush(stdin);
        gets(bankname);
        strcpy(details[i].bank_name, bankname);

        printf("Enter address: \n");
        fflush(stdin);
        gets(address);
        strcpy(details[i].address, address);

        printf("Enter date: \n");
        fflush(stdin);
        gets(date);
        strcpy(details[i].date, date);

        printf("\nBank Statement details of User No.%d is: \n", i);
        printf("Account Number: %d\nTransaction ID: %d\nAccount Holder Name: %s\n", details[i].account_number, details[i].transaction_id, details[i].accountholder_name);
        printf("Last Transaction Amount: %d\nBank Name: %s\nAddress: %s\n", details[i].last_transaction_amount , details[i].bank_name, details[i].address);
        printf("Date: %s\n", details[i].date);
    }
}