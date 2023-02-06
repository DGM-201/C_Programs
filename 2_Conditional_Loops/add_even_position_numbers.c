// C program to add even position number.

#include<stdio.h>

int main()
{
    unsigned int number, sum = 0, count = 0;
    printf("**Note: Enter numbers in range of 0 to 4294967295**\n");
    printf("Enter a positive whole number: ");
    scanf("%u", &number);
    while(number != 0 )
    {
        count = count + 1;
        if (count%2 == 0)
        {
            sum = sum + (number % 10);
        }
        number = number / 10;
    }
    printf("Sum of integers is %d", sum);
    return 0;
}