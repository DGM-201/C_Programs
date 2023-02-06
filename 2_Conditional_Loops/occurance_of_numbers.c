// C program to find number of occurrences of 0-9 in a given number.

#include<stdio.h>

void main()
{
    unsigned int number, remainder;
    unsigned int count0 = 0, count1 = 0,count2 = 0, count3 = 0, count4 = 0;
    unsigned int count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
    printf("**Note: Enter numbers in range of 0 to 4294967295**\n");
    printf("Enter a positive whole number: ");
    scanf("%u", &number);
    while(number != 0)
    {
        remainder = number % 10;
        if(remainder == 0) count0 = count0 + 1;
        if(remainder == 1) count1 = count1 + 1;
        if(remainder == 2) count2 = count2 + 1;
        if(remainder == 3) count3 = count3 + 1;
        if(remainder == 4) count4 = count4 + 1;
        if(remainder == 5) count5 = count5 + 1;
        if(remainder == 6) count6 = count6 + 1;
        if(remainder == 7) count7 = count7 + 1;
        if(remainder == 8) count8 = count8 + 1;
        if(remainder == 9) count9 = count9 + 1;
        number = number / 10;
    }
    printf("Number 0 as occured %d times.\n", count0);
    printf("Number 1 as occured %d times.\n", count1);
    printf("Number 2 as occured %d times.\n", count2);
    printf("Number 3 as occured %d times.\n", count3);
    printf("Number 4 as occured %d times.\n", count4);
    printf("Number 5 as occured %d times.\n", count5);
    printf("Number 6 as occured %d times.\n", count6);
    printf("Number 7 as occured %d times.\n", count7);
    printf("Number 8 as occured %d times.\n", count8);
    printf("Number 9 as occured %d times.\n", count9);
}