/*
Program for all positive integers  i,j and k and l varies from 1 to the range specified by the user
and prints all the combinations of i, j, k and l such that i+j+k=l and i<j<k<l
*/
// For example : Given input number is 10
// 1+2+3 = 6 where i=1,j=2,k=3 & l=6 and i<j<k<l
// 2+3+4 = 9  where i=2,j=3,k=4 & l=9 and i<j<k<

#include<stdio.h>

void main()
{
    unsigned int i, j, k, sum, input;
    printf("Note: Enter a number that is greater than 6\n");
    printf("Enter the sum of three numbers: ");
    scanf("%d", &input);
    for(i=1;i<input;i++)
    {
        for(j=2;j<input;j++)
        {
            for(k=3;k<input;k++)
            {
                if(j==i+1 && k==j+1)
                {
                    sum = i+j+k;
                    if(sum <= input)
                    {
                        printf("Sum of %d, %d, & %d consecutive number combination gives the sum as %d \n", i,j,k,sum);
                    }
                }
            }
        }
    }
}