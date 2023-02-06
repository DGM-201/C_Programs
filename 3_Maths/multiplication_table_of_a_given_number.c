// Write a program to print multiplication table of given number

#include <stdio.h>

void main()
{
    unsigned int number, i;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &number);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}