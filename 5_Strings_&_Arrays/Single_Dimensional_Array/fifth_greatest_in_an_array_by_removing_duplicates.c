/* C program to find the 5th highest number in an array of 20 by removing the duplicates */

#include <stdio.h>

// Function Declaration
void sorting();
void printing_array();

int main()
{
    unsigned int i, j, size, greatest_place;
    signed int temp;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    signed int array[size];

    printf("Enter the array elements: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    // Making duplicates as zero and then sorting
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                array[j] = 0;
            }
        }
    }

    sorting(array, size);

    printf("\nEnter which greatest you want: \n");
    scanf("%d", &greatest_place);

    if (greatest_place > size)
    {
        printf("You have entered a place that exceeds the array size!.\n");
    }
    else
    {
        printf("The %dth greatest element in the array is %d.\n", greatest_place, array[greatest_place - 1]);
    }
    return 0;
}

// Function for Sorting in Descending Order (Greatest to lowest!).
void sorting(signed int array[], unsigned int size)
{
    unsigned int i, j;
    signed int temp;

    // BUBBLE SORTING ALGORITHM

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