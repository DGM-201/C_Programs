/* Write a C program to calculate add, multiplication, subtraction and division of two number
using function pointers */

#include <stdio.h>

int add();
int sub();
int mul();
int div();

int main()
{
    int num1, num2;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &num1, &num2);
    int (*fp[4])(int,int);
    fp[0] = add;
    fp[1] = sub;
    fp[2] = mul;
    fp[3] = div;
    (*fp[0])(num1,num2);
    (*fp[1])(num1,num2);
    (*fp[2])(num1,num2);
    (*fp[3])(num1,num2);
}

int add(int a, int b)
{
    int result;
    result = a + b;
    printf("%d + %d is %d.\n", a, b, result);
}

int sub(int a, int b)
{
    int result;
    result = a - b;
    printf("%d - %d is %d.\n", a, b, result);
}

int mul(int a, int b)
{
    int result;
    result = a * b;
    printf("%d * %d is %d.\n", a, b, result);
}

int div(int a, int b)
{
    int result;
    result = a / b;
    printf("%d / %d is %d.\n", a, b, result);
}