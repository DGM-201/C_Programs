// Write a C Program to print the maximum and minimum number entered using macro

#include<stdio.h>

#define MAXIMUM(a, b) (a>b)
#define MINIMUM(a, b) (a<b)

int main()
{
    unsigned int num1, num2;
    printf("Enter two numbers a and b: ");
    scanf("%d%d", &num1, &num2);
    if(MAXIMUM(num1, num2))
    {
        printf("a is greater than b");
    }
    if(MINIMUM(num1, num2))
    {
        printf("b is greater than a");
    }
    return 0;
}