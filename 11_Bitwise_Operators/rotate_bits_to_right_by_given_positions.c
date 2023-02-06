/* Write a function rightrot(x,n) that returns the value of the integer x rotated
to the right by n bit postions. */

#include <stdio.h>

void rotate_right();
void hexadecimal_to_binary_converter();

int main()
{
    unsigned int number, n_bits;

    printf("Enter the number: ");
    scanf("%x", &number);
    
    printf("Enter the number of bits to rotate: ");
    scanf("%d", &n_bits);

    rotate_right(number, n_bits);

    return 0;
}

void rotate_right(unsigned int num, unsigned int bits)
{
    hexadecimal_to_binary_converter(num);
    printf("\n");
    num = (num & ~(~0 << bits));
    printf("Converted: \n");
    hexadecimal_to_binary_converter(num);
}

void hexadecimal_to_binary_converter(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}