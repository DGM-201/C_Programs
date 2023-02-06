/* Write a program to reverse the integer array

ex: Input: array = [3,2,5,1]; Output: array = [1,5,2,3] */

#include <stdio.h>

int main()
{
    unsigned int i, j, size, temp;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    signed int array[size];

    printf("Enter the array elements: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    // Swapping
    for (i = 0; i < (size / 2); i++)
    {
        temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }

    for (i = 0; i < size; i++)
    {
        printf("%d \t", array[i]);
    }
    return 0;
}