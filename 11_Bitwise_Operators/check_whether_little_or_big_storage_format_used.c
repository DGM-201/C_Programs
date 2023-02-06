// Write a program to check little Indian or big Indian using bitwise operators.

#include <stdio.h>

unsigned int big_or_little_endian();

int main()
{
    unsigned int number, flag;

    printf("Enter the number in hexadecimal format: ");
    scanf("%x", &number);

    flag = big_or_little_endian(number);
    number = number & 0xF;

    if (flag == number)
    {
        printf("This computer uses Little Endian Format to store the data!.");
    }
    else
    {
        printf("This computer uses Big Endian Format to store the data!.");
    }
    return 0;
}

unsigned int big_or_little_endian(unsigned int num)
{
    num = num % 16;
    return num;
}