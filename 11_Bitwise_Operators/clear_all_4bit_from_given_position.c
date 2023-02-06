// Write a function to clear 4bit of given position.

#include <stdio.h>

void hexadecimal_to_binary_converter();
unsigned int set_4bits();

int main()
{
  unsigned int number, position;

  printf("Enter a number in hexadecimal format: ");
  scanf("%X", &number);

  printf("Entered number in binary format is: \n");
  hexadecimal_to_binary_converter(number);

  printf("\nEnter the position from which want to clear: \n");
  scanf("%u", &position);

  set_4bits(number, position);
}

unsigned int set_4bits(unsigned int num, unsigned int pos)
{
  num = num & (~(15 << pos));
  printf("After clearing 4bits from given position the output is:\n");
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