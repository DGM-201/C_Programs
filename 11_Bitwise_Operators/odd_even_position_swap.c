// Write a program to swap odd and even bits of given variable.

#include <stdio.h>

unsigned int big_or_little_endian();
void hexadecimal_to_binary_converter();

int main()
{
    unsigned int number, result;

    printf("Enter the number in hexadecimal format: ");
    scanf("%x", &number);

    printf("Entered hexadecimal number in binary format: \n");
    hexadecimal_to_binary_converter(number);

    result = big_or_little_endian(number);
    printf("\nAfter swapping odd and even bits we get: %X.", result);
    
    printf("\nResult in binary format is: ");
    hexadecimal_to_binary_converter(result);
    return 0;
}

void hexadecimal_to_binary_converter(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}

unsigned int big_or_little_endian(unsigned int num)
{
    return ((num & (0xAAAAAAAA)) >> 1) | ((num & (0x55555555)) << 1);
    //            Odd Bits             |         Even Bits
}