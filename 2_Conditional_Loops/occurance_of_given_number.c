// C program to find occurance of a given number.

#include<stdio.h>

void main()
{
    unsigned int number, remainder, search;
    unsigned int count = 0;
    printf("**Note: Enter numbers in range of 0 to 4294967295**\n");
    printf("Enter a positive whole number: ");
    scanf("%u", &number);
    printf("Enter a positive whole number to search in: ");
    scanf("%u", &search);
    while(number != 0)
    {
        remainder = number % 10;
        if(remainder == search) count = count + 1;
        number = number / 10;
    }
    if(count==0) printf("Entered Number is not present!");
    else printf("Number %d has occured %d times.\n", search, count);
}