// C program to find factorial of given number

#include<stdio.h>

int main()
{
    unsigned int number;
    long long int factorial = 1;
    printf("**Factorial of a number**\n");
    printf("Enter a number in range of 0 to 20: ");
    scanf("%i", &number);
    while(number >= 1)
    {
        factorial = factorial * number;
        number = number - 1;
    }
    printf("%lld\n", factorial);
}