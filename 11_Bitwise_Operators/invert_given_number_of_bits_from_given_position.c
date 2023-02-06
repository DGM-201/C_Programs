/* Write function invert(x,p,n) that returns x with the n bits that begin at postion p inverted
(i,e 1 changed into 0 & viceversa), leaving the other bits unchanged. */

#include <stdio.h>

unsigned int set_bits();
void hexadecimal_to_binary_converter();

int main()
{
    unsigned int number, position, no_of_bits, result;

    printf("Enter the number in hexadecimal format: ");
    scanf("%x", &number);

    printf("Enter how many bits you want to invert: ");
    scanf("%d", &no_of_bits);

    printf("Enter the position from which you want to invert: ");
    scanf("%d", &position);

    printf("Entered hexadecimal number in binary format: ");
    hexadecimal_to_binary_converter(number);

    result = set_bits(number, position, no_of_bits);
    printf("\nResult in Hexadecimal Format is %X.\n", result);
    
    printf("\nResult in binary format is: ");
    hexadecimal_to_binary_converter(result);
    return 0;
}

unsigned int set_bits(unsigned int num, unsigned int pos, unsigned int bits)
{
    return (num ^ ((~(~0 << bits)) << (pos - bits + 1)));
}

void hexadecimal_to_binary_converter(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}