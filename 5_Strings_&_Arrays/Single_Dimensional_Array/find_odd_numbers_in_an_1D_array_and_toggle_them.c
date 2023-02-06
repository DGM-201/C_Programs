/* Program to find the odd numbers in an array and toggle the bits
and sort an array with new values. */

#include <stdio.h>

void sorting();
void printing_array();

int main()
{
    unsigned int i;
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Finding odd numbers in array and toggling them.

    /* Note: This works for only if the maximum element in an integer array is less than 32. */
    for (i = 0; i < 10; i++)
    {
        if (array[i] % 2 != 0)
        {
            array[i] = ((~array[i]) & 0x0000000f);
        }
    }

    printf("Sorted array in descending order is: \n");
    sorting(array, 10);
    printing_array(array, 10);
}

// Function for Sorting in Descending Order (Greatest to lowest!).
void sorting(signed int array[], unsigned int size)
{
    unsigned int i, j;
    signed int temp;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// This function is for printing the array elements.
void printing_array(signed int array[], unsigned int size)
{
    unsigned int i;
    for (i = 0; i < size; i++)
    {
        printf("%d \t", array[i]);
    }
}