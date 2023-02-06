/* Write a C program to implement macro for add, sub, mul, dic and mod using switch case to
 call each macro */

#include <stdio.h>

#define ADD(a, b) (a + b)
#define MUL(a, b) (a * b)
#define SUB(a, b) (a - b)
#define DIV(a, b) (a / b)
#define MOD(a, b) (a % b)

int main()
{
    unsigned int number1, number2, result;
    char option;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &number1, &number2);
    printf("Press 'a' to add numbers,\n");
    printf("Press 'm' to multiply numbers,\n");
    printf("Press 's' to subtract numbers,\n");
    printf("Press 'q' to divide numbers,\n");
    printf("Press 'r' to find modulus of numbers.\n");
    scanf(" %c", &option);
    switch (option)
    {
        case 'a':
        {
            result = ADD(number1, number2);
            printf("The Addition of two numbers is %d.", result);
        }
        break;
        case 'm':
        {
            result = MUL(number1, number2);
            printf("The Multiplication of two numbers is %d.", result);
        }
        break;
        case 's':
        {
            result = SUB(number1, number2);
            printf("The Subtraction of two numbers is %d.", result);
        }
        break;
        case 'q':
        {
            result = DIV(number1, number2);
            printf("The Division of two numbers is %d.", result);
        }
        break;
        case 'r':
        {
            result = MOD(number1, number2);
            printf("The Modulus of two numbers is %d.", result);
        }
        break;
        default:
        {
            printf("Invalid Charcater");
        }
    }
    return 0;
}