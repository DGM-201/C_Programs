// C Program to make calculator using Make File.

#include <stdio.h>

#include "makefile_add.c"
#include "makefile_subtract.c"
#include "makefile_multiply.c"
#include "makefile_divide.c"
#include "makefile_mod.c"

int main()
{
    int number1, number2, options, result;

    printf("Enter two numbers to ADD/ MULTIPLY/ SUBTRACT/ DIVIDE/ MOD: ");
    scanf("%d%d", &number1, &number2);

    printf("\nEnter your choice!\n");
    printf("Press '1' to ADD two numbers.\n");
    printf("Press '2' to SUBTRACT two numbers.\n");
    printf("Press '3' to MULTIPLY two numbers.\n");
    printf("Press '4' to DIVIDE two numbers.\n");
    printf("Press '5' to find MOD of two numbers.\n");
    printf("Press any Key to EXIT!.\n");
    scanf("%d", &options);

    switch (options)
    {
    case 1:
    {
        result = sum_function(number1, number2);
        printf("SUM of %d + %d is = %d.", number1, number2, result);
        break;
    }
    case 2:
    {
        result = subtraction_function(number1, number2);
        printf("SUBTRACTION of %d - %d is = %d.", number1, number2, result);
        break;
    }
    case 3:
    {
        result = multiplication_function(number1, number2);
        printf("MULTIPLICATION of %d x %d is = %d.", number1, number2, result);
        break;
    }
    case 4:
    {
        result = division_function(number1, number2);
        printf("DIVISION of %d / %d is = %d.", number1, number2, result);
        break;
    }
    case 5:
    {
        result = mod_function(number1, number2);
        printf("REMAINDER / MOD of %d % %d is = %d.", number1, number2, result);
        break;
    }
    default:
    {
        printf("INVALID INPUT/ EXITING!.");
        break;
    }
    }
    return 0;
}