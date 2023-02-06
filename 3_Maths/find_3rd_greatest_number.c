// C program to print 3rd highest element in an integer array.

#include <stdio.h>

#define SIZE 10

void sorting();

// Function for Sorting in Descending Order (Greatest to lowest!).
void sorting(signed int array[])
{
    unsigned int i, j;
    signed int temp;

    // BUBBLE SORTING ALGORITHM
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
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

int main()
{
    int array[SIZE] = {7, 6, 2, 1, 0, 9, 5, 8};

    unsigned int i = 0, greatest = 0;

    sorting(array); // Calling Function

    printf("Enter the greatest you want: ");
    scanf("%d", &greatest);

    printf("%drd greatest is %d", greatest, array[greatest - 1]);
}