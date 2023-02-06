// Write a C program to merge two arrays.

#include <stdio.h>

void main()
{
    printf("**Array Merging**\n");

    unsigned int i, j, size_of_a, size_of_b;

    printf("Enter the size of first array : ");
    scanf("%d", &size_of_a);

    printf("Enter the size of second array : ");
    scanf("%d", &size_of_b);

    signed int array_a[size_of_a], array_b[size_of_b];

    printf("Enter the first array a: \n");
    for (i = 0; i < size_of_a; i++)
    {
        scanf("%d", &array_a[i]);
    }

    printf("Enter the second array b: \n");
    for (j = 0; j < size_of_b; j++)
    {
        scanf("%d", &array_b[j]);
    }

    // Merging Array
    signed int array_c[size_of_a + size_of_b];
    
    printf("First Array is: \n");
    for (i = 0; i < size_of_a; i++)
    {
        array_c[i] = array_a[i];
        printf("%d\t", array_a[i]);
    }

    printf("\nSecond Array is: \n");
    for (i = 0; i < size_of_b; i++)
    {
        array_c[size_of_a + i] = array_b[i];
        printf("%d\t", array_b[i]);
    }

    printf("\nMerged Array is: \n");
    for (i = 0; i < (size_of_a + size_of_b); i++)
    {
        printf("%d \t", array_c[i]);
    }
}