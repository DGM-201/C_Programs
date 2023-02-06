// Fractions

#include<stdio.h>

void main()
{
    unsigned int i, numerator , denominator, greatest = 0;
    printf("Enter the numerator: ");
    scanf("%d", &numerator);
    printf("Enter the denominator: ");
    scanf("%d", &denominator);
    for(i=2;i<=100;i++)
    {
        if(numerator%i==0 && denominator%i==0)
        {
            printf("%d/%d\n",numerator/i,denominator/i);
        }
    }
}