// C Program to set and swap bits using bitwise operator.

#include <stdio.h>

void set_bits();
void swap_bits();

void swap_bits(unsigned int num)
{
    unsigned int number = 0, position1 = 0, position2 = 0, temp = 0;

    printf("Enter two positions that you want to swap: ");
    scanf("%d%d", &position1, &position2);

    // Copying the bits at given positions
    temp = ((1 << (position1 - 1)) | (1 << (position2 - 1))) & num;

    // Swapping (Not Working)
    num = (temp << (position1 + position2));

    printf("After swapping bits at %d and %dth position we get: ", position1, position2);
    printf("%d", num);

}

void set_bits(unsigned int num)
{
    unsigned int number = 0, position1 = 0, position2 = 0;

    printf("Enter two positions that you want to set: ");
    scanf("%d%d", &position1, &position2);

    num = ((1 << (position1 - 1)) | (1 << (position2 - 1))) | num;

    printf("After setting bits at %d and %dth position we get: ", position1, position2);
    printf("%d", num);
}

void main()
{
    unsigned int number = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    set_bits(number);
    swap_bits(number);
}