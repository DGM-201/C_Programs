/*
Program to check the electricity bill
0-200 units = 0.5 per unit
201-400 = Rs 100 plus 0.65 per unit excess of 200
401-600 = Rs 230 plus 0.80 per unit excess of 400
600 above = Rs 390 plus 1 per unit excess of 600
*/

#include <stdio.h>

#define SLAB1(units) ((units) * (0.5))
#define SLAB2(units) ((units) * (0.65))
#define SLAB3(units) ((units) * (0.80))
#define SLAB4(units) ((units) * (1.0))

int main()
{
    float units, amount;
    printf("**Electricity Bill**\n");
    printf("Enter the number of units you consumed: ");
    scanf("%f", &units);

    if (units > 0 && units <= 200)
    {
        amount = SLAB1(units);
    }
	
    else if (units > 200 && units < 400)
    {
        amount = SLAB1(200) + SLAB2(units - 200) + 100;
    }
	
    else if (units > 400 && units < 600)
    {
        amount = SLAB1(200) + SLAB2(200) + SLAB3(units - 400) + 230;
    }
	
    else
    {
        amount = SLAB1(200) + SLAB2(200) + SLAB3(200) + SLAB4(units - 600) + 390;
    }
    
    printf("Your Total Amount is %f", amount);
	
    return 0;
}