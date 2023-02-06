// C Program to calculate simple ad compound interest using functions

#include<stdio.h>
#include<math.h>

void main()
{
    unsigned int option;
    printf("Enter '1' to calculate simple interest\n");
    printf("OR\nEnter '2' to calculate compound interest\n");
    scanf("%u",&option);
    switch (option)
    {
    case 1:
    {
        simpleinterest();
        break;
    }
    case 2:
    {
        compoundinterest();
        break;
    }
    default:
    {
        printf("Invalid number!");
    }
    }
}

void simpleinterest()
{
    float amount, rate, term;
    float simple_interest;
    printf("**Simple Interest Calulator**\n");
    printf("Enter the principal amount: ");
    scanf("%f", &amount);
    printf("Enter the interest rate per annum in percent: ");
    scanf("%f", &rate);
    printf("Enter the term in year: ");
    scanf("%f", &term);
    simple_interest = (amount*rate*term)/100;
    printf("Simple Interest is %f.\n",simple_interest);
}

void compoundinterest()
{
    float amount, rate, term, num;
    float compound_interest;
    printf("\n**Compound Interest Calulator**\n");
    printf("Enter the principal amount: ");
    scanf("%f", &amount);
    printf("Enter the interest rate per annum in percent: ");
    scanf("%f", &rate);
    printf("Enter the term in year: ");
    scanf("%f", &term);
    printf("Enter number of times interest is applied per time period: ");
    scanf("%f", &num);
    compound_interest = amount*(pow((1+(rate/100)),term));
    printf("Compound Interest is %f.\n",compound_interest);
}