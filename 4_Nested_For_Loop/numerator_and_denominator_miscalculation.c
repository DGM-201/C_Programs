/*  Mary was sleepy while solving one division problem, she just cancelled
    common digit present in numerator and denominator, but surprisingly
    the result was correct.
    Can you write a program to find such combinations of numerator and
    denominator within 100, whose result is correct if we cancel common digit
    from numerator and denominator.
    Ex: 16/64 = 1/4, where '6' is cancelled from both numerator and denominator.  */

#include<stdio.h>

void main()
{
    unsigned int i, j;
    for(i=10;i<100;i++)
    {
        for(j=11;j<=100;j++)
        {
            if(j%i == 0 && i%10 == j/10  && j/i == j%10)
            {
                printf("%d/%d\n",i,j);
            }
        }
    }
}