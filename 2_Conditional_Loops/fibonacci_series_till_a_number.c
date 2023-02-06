// C program to print Fibonacci series till given occurrence.

#include <stdio.h>

void main()
{
    unsigned int first_number = 0, second_number = 1, number, fibonacci_series = 0;
    printf("** Fibonacci Series **\n");
    printf("** Enter numbers in range of 0 to 4294967295 **\n");
    printf("Enter a number upto which you want to print fibonnaci series: ");
    scanf("%d", &number);
    printf("The fibonnaci series till %d is:\n0\n", number);

    do
    {
        first_number = second_number;
        second_number = fibonacci_series;

        fibonacci_series = first_number + second_number;

        printf("%d\n", fibonacci_series);

    } while (number > fibonacci_series);
}