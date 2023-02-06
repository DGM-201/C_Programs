// Write a C program to sort given array in ascending order.

#include <stdio.h>

void main()
{
    unsigned int size, i, j, temp = 0;
    printf("**Note: Enter numbers in range of 0 to 4294967295");
    printf(" & Press Enter each time you input a value:\n");
    printf("Enter the size of the array: ");
    scanf("%u", &size);
    unsigned int array[size];
    unsigned int sorted_array[size];

    // Size has to declared first and then the array can be initialized, otherwise it won't work!

    printf("Enter the array elements:\n");
    for (i = 0; i <= size; i++)
    {
        scanf("%u", &array[i]);
    }
    printf("Sorted array is: \n", array[i]);
    for (i = 0; i <= size; i++)
    {
        for (j = 0; j <= size; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
            }
        }
        printf("%d ", array[i]);
    }
}