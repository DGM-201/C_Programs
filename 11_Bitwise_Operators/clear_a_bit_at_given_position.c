// Write a function to clear bits of given position.

#include <stdio.h>

void hexadecimal_to_binary_converter();
unsigned int clear_bits();

int main()
{
  unsigned int number, position;
  printf("Enter a number in hexadecimal format: ");
  scanf("%x", &number);

  printf("Entered number in binary format is: \n");
  hexadecimal_to_binary_converter(number);

  printf("\nEnter the position that you want to clear: \n");
  scanf("%u", &position);

  clear_bits(number, position);
}

unsigned int clear_bits(unsigned int num, unsigned int pos)
{
  num = num & (~(1 << pos));
  printf("Number after setting position %u as '0', the output is: \n", pos);
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