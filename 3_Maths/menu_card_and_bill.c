/*
Write a program for the following output using switch case
    MENU CARD
        1.COFFEE        Rs:15
        2.TEA           Rs:10
        3.COLD COFFEE   Rs:25
        4.MILK SHAKE    Rs:50

    Enter Your choice : 2

    You have selected Tea
    Enter the quantity : 5
    Total amount :50                                             
*/

#include <stdio.h>

// Function Prototypes
void coffee();
void tea();
void cold_coffee();
void milk_shake();
void total_amount_digit_sum();

int main()
{
    unsigned int options;
    printf("WELCOME!...\n");
    printf("****************************************\n");
    printf("*              MENU CARD               *\n");
    printf("* 1. COFFEE....................Rs.15   *\n");
    printf("* 2. TEA.......................Rs.10   *\n");
    printf("* 3. Cold Coffee...............Rs.25   *\n");
    printf("* 4. MILK SHAKE................Rs.50   *\n");
    printf("*          ENTER YOUR CHOICE!          *\n");
    printf("****************************************\n");
    printf("PRESS 1 for Coffee, 2 for Tea, 3 for Cold Coffee and 4 for MilkShake!\n");
    scanf("%d", &options);

    switch (options)
    {
    case 1:
        coffee();
        break;
    case 2:
        tea();
        break;
    case 3:
        cold_coffee();
        break;
    case 4:
        milk_shake();
        break;
    default:
        printf("INVALID ENTRY! / EXITING...");
        break;
    }
	
    return 0;
}

void coffee()
{
	
    unsigned int quantity, total_amount;
    printf("You have selected Coffee!\n");
    printf("Enter the Quantity: ");
    scanf("%d", &quantity);
    printf("**************BILL********************\n");
    printf("   Ordered COFFEE.........Rs.15x%d    \n", quantity);
    total_amount = 15 * quantity;
    printf("      Total Amount is Rs.%d           \n", total_amount);
    printf("**************************************\n");
    total_amount_digit_sum(total_amount);
    printf("**THANK YOU!. COME AGAIN!.**\n");
}

void tea()
{
    unsigned int quantity, total_amount;
	
    printf("You have selected Tea!\n");
    printf("Enter the Quantity: ");
    scanf("%d", &quantity);
    printf("****************BILL*******************\n");
    printf("     Ordered Tea.........Rs.10x%d      \n", quantity);
    total_amount = 10 * quantity;
    printf("        Total Amount is Rs.%d          \n", total_amount);
    printf("***************************************\n");
    total_amount_digit_sum(total_amount);
    printf("**THANK YOU!. COME AGAIN!.**\n");
}

void cold_coffee()
{
    unsigned int quantity, total_amount;
	
    printf("You have selected Cold Coffee!\n");
    printf("Enter the Quantity: ");
    scanf("%d", &quantity);
    printf("****************BILL********************\n");
    printf("  Ordered COLD COFFEE.........Rs.25x%d  \n", quantity);
    total_amount = 25 * quantity;
    printf("         Total Amount is Rs.%d          \n", total_amount);
    printf("****************************************\n");
    total_amount_digit_sum(total_amount);
    printf("**THANK YOU!. COME AGAIN!.**\n");
}

void milk_shake()
{
    unsigned int quantity, total_amount;
	
    printf("You have selected MILK SHAKE!\n");
    printf("Enter the Quantity: ");
    scanf("%d", &quantity);
    printf("******************BILL********************\n");
    printf("    Ordered MILK SHAKE.........Rs.50x%d   \n", quantity);
    total_amount = 50 * quantity;
    printf("         Total Amount is Rs.%d            \n", total_amount);
    printf("******************************************\n");
    total_amount_digit_sum(total_amount);
    printf("**THANK YOU!. COME AGAIN!.**\n");
}

void total_amount_digit_sum(unsigned int total)
{
    unsigned int rem, sum = 0;
	
    while (total != 0)
    {
        rem = total % 10;
        sum = sum + rem;
        total = total / 10;
    }
	
    printf("The sum of individual digits of total amount is %d.\n", sum);
}