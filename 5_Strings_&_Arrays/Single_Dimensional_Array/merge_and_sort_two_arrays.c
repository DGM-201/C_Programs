// Write a C program to merge two arrays.

#include <stdio.h>

void sorting();
void printing_array();

void main()
{
    printf("\n**Array Merging**\n");

    unsigned int i, j, size_of_a, size_of_b;
    signed int temp;

    printf("Enter the size of first array : ");
    scanf("%d", &size_of_a);

    signed int array_a[size_of_a];

    printf("Enter the first array elements: \n");
    for (i = 0; i < size_of_a; i++)
    {
        scanf("%d", &array_a[i]);
    }

    printf("Sorted first array is: \n");
    sorting(array_a, size_of_a);        // Calling Function
    printing_array(array_a, size_of_a); // Calling Function

    printf("\nEnter the size of second array : ");
    scanf("%d", &size_of_b);

    signed int array_b[size_of_b];

    printf("Enter the second array elements: \n");
    for (j = 0; j < size_of_b; j++)
    {
        scanf("%d", &array_b[j]);
    }

    printf("Sorted second array is: \n");
    sorting(array_b, size_of_b);        // Calling Function
    printing_array(array_b, size_of_b); // Calling Function

    // Merging Array
    signed int array_c[size_of_a + size_of_b];

    for (i = 0; i < size_of_a; i++)
    {
        array_c[i] = array_a[i];
    }
    for (i = 0; i < size_of_b; i++)
    {
        array_c[size_of_a + i] = array_b[i];
    }

    printf("\nThe merged array is: \n");
    printing_array(array_c, (size_of_a + size_of_b)); // Calling Function
    sorting(array_c, (size_of_a + size_of_b));        // Calling Function
    printf("\nThe merged sorted array is: \n");
    printing_array(array_c, (size_of_a + size_of_b)); // Calling Function
}

// Function for Sorting in Ascending Order
void sorting(signed int array[], unsigned int size)
{
    unsigned int i, j;
    signed int temp;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// Function for printing the array elements
void printing_array(signed int array[], unsigned int size)
{
    unsigned int i;
    for (i = 0; i < size; i++)
    {
        printf("%d \t", array[i]);
    }
}