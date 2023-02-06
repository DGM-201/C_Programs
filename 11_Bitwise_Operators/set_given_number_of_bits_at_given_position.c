/* Write a function setbits(x,p,n,y) that returns X with the N bits that begin at postion p set to the
rightmost n bits of y, leaving the other bits unchanged. */

#include <stdio.h>

unsigned int set_bits();
void hexadecimal_to_binary_converter();

int main()
{
    unsigned int number, position, no_of_bits, result;

    printf("Enter the number in hexadecimal format: ");
    scanf("%x", &number);

    printf("Enter how many bits you want to set: ");
    scanf("%d", &no_of_bits);

    printf("Enter the position from which you want to set: ");
    scanf("%d", &position);

    printf("Entered hexadecimal number in binary format: ");
    hexadecimal_to_binary_converter(number);
    
    result = set_bits(number, position, no_of_bits);
    printf("\nResult in hexadecimal format is: %x.\n", result);
    
    printf("Result in binary format is: ");
    hexadecimal_to_binary_converter(result);
    return 0;
}

unsigned int set_bits(unsigned int num, unsigned int pos, unsigned int bits)
{
    return num;
}

void hexadecimal_to_binary_converter(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}