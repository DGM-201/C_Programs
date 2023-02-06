// C program to get and display details of credit card bill using structures and pointers

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct credit_card_bill
{
    unsigned int credit_card_number;
    unsigned int bill_no;
    char card_owner_name[32];
    char bank_name[32];
};

void main()
{
    unsigned int user_number, i;
    printf("**Credit Card Bill details**\n");
    printf("Enter the number of users you want to input: ");
    scanf("%d", &user_number);

    struct credit_card_bill details[user_number];
    struct credit_card_bill *struct_pointer[user_number];

    unsigned int cardno;
    unsigned int billno;
    char cardholdername[32];
    char bankname[32];

    for (i = 0; i < user_number; i++)
    {
        struct_pointer[i] = &details[i];

        printf("\nEnter CARD HOLDER NAME: \n");
        fflush(stdin);
        gets(cardholdername);
        strcpy(struct_pointer[i]->card_owner_name,cardholdername);

        printf("Enter CARD No: \n");
        scanf("%d", &cardno);
        struct_pointer[i]->credit_card_number = cardno;

        printf("Enter BILL No: \n");
        scanf("%d", &billno);
        struct_pointer[i]->bill_no = billno;

        printf("Enter BANK NAME: \n");
        fflush(stdin);
        gets(bankname);
        strcpy(struct_pointer[i]->bank_name, bankname);

        printf("\nCredit Card Bill details of User No.%d is: \n", i);
        printf("Card Holder Name: %s\nCard No: %d\nBill No: %d\n", details[i].card_owner_name, details[i].credit_card_number, details[i].bill_no);
        printf("Bank Name: %s\n", details[i].bank_name);
    }
}