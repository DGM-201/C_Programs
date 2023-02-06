#include <stdio.h>

int main()
{
    float cp, sp, profit, loss, profitpercent, losspercent;
    printf("Enter your cost price:");
    scanf("%f", &cp);
    printf("Enter the selling price:");
    scanf("%f", &sp);

    if (sp > cp)
    {
        printf("Profit!\n");
        profit = sp - cp;
        printf("You have incurred a profit of %f.\n", profit);
        profitpercent = (profit / cp) * 100;
        printf("Your profit percent is %f.", profitpercent);
    }
    else
    {
        printf("Loss!\n");
        loss = cp - sp;
        printf("You have incurred a loss of Rupees.%f.\n", loss);
        losspercent = (loss / sp) * 100;
        printf("Your loss percent is %f.", losspercent);
    }
}