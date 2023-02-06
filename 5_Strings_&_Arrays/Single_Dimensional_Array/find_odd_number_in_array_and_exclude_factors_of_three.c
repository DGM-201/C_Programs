/* C program to find only the odd numbers in an array and display the factors
and should exclude those odd numbers which have 3 as its factor */

#include <stdio.h>

void main()
{
    unsigned int i, j, size;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    signed int array[size];

    printf("Enter the array elements: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Odd numbers in an array excluding the multiples of 3 are: \n");
    for (i = 0; i < size; i++)
    {
        if (((array[i] % 2) != 0) && ((array[i] % 3) != 0))
        {
            printf("%d \t", array[i]);
        }
    }
}