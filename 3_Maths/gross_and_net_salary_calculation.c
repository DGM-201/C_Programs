/*
Find net and gross salary

Ex: Assumptions:
Basic pay rate - $12/hr
Overtime (in excess of 40hrs) - $18/hr

Tax rate:
15% of the first $300
20% of the next $150
25% of the rest
*/

#include <stdio.h>

int main()
{
    printf("*************************\n");
    printf("*   SALARY CALCULATOR   *\n");
    printf("*************************\n");

    unsigned int hrs, gross_salary, net_salary, tax_amount;

    printf("Enter the number of hours you worked: ");
    scanf("%d", &hrs);

    if (hrs <= 40)
    {
        gross_salary = 12 * hrs;
    }
	
    else
    {
        gross_salary = 40 * 12;
        gross_salary = gross_salary + ((hrs - 40) * 18);
    }

    printf("Your Gross Salary is Rs.%d\n", gross_salary);

    if (gross_salary <= 300)
    {
        tax_amount = gross_salary * 0.15;
        net_salary = gross_salary - tax_amount;
        printf("Your Net Salary is Rs.%d\n", net_salary);
    }
	
    else if (gross_salary > 300 && gross_salary <= 450)
    {
        tax_amount = 300 * 0.15;
        tax_amount = tax_amount + ((gross_salary - 300) * 0.2);
        net_salary = gross_salary - tax_amount;
        printf("Your Net Salary is Rs.%d\n", net_salary);
    }
	
    else
    {
        tax_amount = 300 * 0.15;
        tax_amount = tax_amount + (150 * 0.2);
        tax_amount = tax_amount + ((gross_salary - 450) * 0.25);
        net_salary = gross_salary - tax_amount;
        printf("Your Net Salary is Rs.%d\n", net_salary);
    }
	
    return 0;
}