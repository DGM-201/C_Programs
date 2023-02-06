// C program to find maximum & minimum number.

#include<stdio.h>

int main()
{
    signed long int number_one, number_two;
    printf("Enter two numbers to find which is greater:-\n**Note: Enter only whole numbers, both +ve and -ve are compatible**\n");
    scanf("%ld%ld", &number_one, &number_two);
    if (number_one > number_two) printf("a is grater than b.");
    else printf("b is greater than a.");
    return 0;
}