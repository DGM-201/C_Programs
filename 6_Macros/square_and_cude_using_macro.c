// Write a C program to square and cube a number.

#include<stdio.h>

#define SQUARE(x) (x*x)
#define CUBE(x) (x*x*x)

void main()
{
    unsigned int x;
    printf("Enter a number to print its square and cude: ");
    scanf("%d", &x);
    printf("Square of %d is %d\n", x, SQUARE(x));
    printf("Cube of %d is %d", x, CUBE(x));
}