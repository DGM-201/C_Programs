// Write a function to set bits of given position.

#include <stdio.h>

void hexadecimal_to_binary_converter();
unsigned int set_bits();

int main()
{
  unsigned int number, position;

  printf("Enter a number in hexadecimal: ");
  scanf("%u", &number);

  printf("Entered number in binary format is: \n");
  hexadecimal_to_binary_converter(number);

  printf("\nEnter the position that you want to set: \n");
  scanf("%u", &position);

  set_bits(number, position);
}

unsigned int set_bits(unsigned int num, unsigned int pos)
{
  num = num | (1 << pos);
  printf("Number after setting position %u as '1', the output is %d.\n", pos, num);
  printf("In Hexadecimal format %X\n", num);
  
  printf("In Binary Format: ");
  hexadecimal_to_binary_converter(num);
}

void hexadecimal_to_binary_converter(unsigned n)
{
  unsigned i;
  for (i = 1 << 31; i > 0; i = i / 2)
    (n & i) ? printf("1") : printf("0");
}