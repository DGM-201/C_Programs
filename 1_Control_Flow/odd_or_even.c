// C program to find odd or even number.

#include<stdio.h>

int main()
{
    int number;
    printf("**Enter a positive whole number to find whether its prime or not: ");
    scanf("%d", &number);
    if (number % 2 == 0) printf("Even Number!.");
    else printf("Odd Number!.");
    return 0;
}