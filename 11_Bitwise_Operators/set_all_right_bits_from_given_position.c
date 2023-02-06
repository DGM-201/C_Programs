// Write a program to set all right bits from given position.
// Example :  X= 0x2000000, pos= 26, o/p:  X=0xFA000000

#include <stdio.h>

void hexadecimal_to_binary_converter();
unsigned int set_all_right_bits();

int main()
{
    unsigned int number, position;

    printf("Enter a number in hexadecimal format: ");
    scanf("%X", &number);

    printf("Entered number in binary format is: \n");
    hexadecimal_to_binary_converter(number);

    printf("\nEnter the position that you want to set: \n");
    scanf("%u", &position);

    set_all_right_bits(number, position);
}

unsigned int set_all_right_bits(unsigned int num, unsigned int pos)
{
    num = num | (~0 << (pos+1));
    printf("After setting 4bits from given position the output is:\n");
    printf("In Hexadecimal format %X.\n", num);
    
    printf("In Binary Format: ");
    hexadecimal_to_binary_converter(num);
}

void hexadecimal_to_binary_converter(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}