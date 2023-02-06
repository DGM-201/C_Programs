// Write a C program to reverse all bits using bitwise operators.

#include <stdio.h>

int reverse();

int main()
{
    unsigned number, a = 31;
    printf("Enter the number in hexadecimal format: ");
    scanf("%x", &number);
    printf("After reversing the final value is %x.\n", reverse(number, a));
}

int reverse(unsigned num, unsigned a)
{
    unsigned b, c, number = num, number1 = 0;
    for (c = 0; c < 31; c++, a--)
    {
        b = number & 1;
        if (b == 1)
        {
            number = (number >> 1);
            number1 = number1 | (1 << a);
        }
        else
        {
            number = (number >> 1);
            number1 = number1 & ~(1 << a);
        }
    }
    return number1;
}