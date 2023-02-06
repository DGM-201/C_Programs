// Write a program to swap nibble(4 bits) of variable using bitwise operator.

#include <stdio.h>

unsigned int nibble_swap();

int main()
{
    unsigned int number, result;
    printf("Enter the number in hexadecimal format: ");
    scanf("%x", &number);
    result = nibble_swap(number);
    printf("After swapping nibbles we get: %X.", result);
    return 0;
}

unsigned int nibble_swap(unsigned int num)
{
    return ((num & (0xF0F0F0F0)) >> 4) | ((num & (0x0F0F0F0F)) << 4);
    //            Odd Bits             |         Even Bits
}