// C program to convert temperature from degree Fahrenheit to Celsius.

#include<stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("**Fahrenheit to Celsius Converter**\nEnter the temperature in fahrenheit:");
    printf("**Note: You can enter decimal values upto 6 digits**");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32.0) * (5.0/9.0);
    printf("Converted value is %f.", celsius);
    return 0;
}