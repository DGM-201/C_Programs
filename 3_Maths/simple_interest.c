/* C Program that gives simple interest as output by taking the values like principal amount, 
rate of interest and term from the user */

#include<stdio.h>
#include<math.h>

void main()
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
	
	// Simple Interest Formula and Calulation
    simple_interest = (amount*rate*term)/100;
	
    printf("Simple Interest is %f.\n",simple_interest);
}