/* C Program that gives compound interest as output by taking the values like principal amount,
rate of interest and terms from the user */

#include<stdio.h>
#include<math.h>

void main()
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
	
	// Compound Interest Formula and Calculation
    compound_interest = amount*(pow((1+(rate/100)),term));
	
    printf("Compound Interest is %f.\n",compound_interest);
}