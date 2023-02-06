// C Program to print fibonacci series.

#include <stdio.h>

void main()

{

    unsigned int first_number = 0, second_number = 1, number, fibonacci_series = 0;

    printf("Enter a number upto which you want to print fibonnaci series: ");

    scanf("%d", &number);

    while (fibonacci_series < number)
    {
        printf("%d\n", fibonacci_series);

        first_number = second_number;

        second_number = fibonacci_series;

        fibonacci_series = first_number + second_number;
    }
}