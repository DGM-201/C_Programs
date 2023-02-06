/* Program to display the missing number in an array
Ex: arr[5] = {3,6,2,10,8} Missing numbers are: 4,5,7,9 */

#include <stdio.h>

#define SIZE 5

void sorting();

int main()
{
    int array[10] = {3, 0, 1, 100, 8};
    unsigned int i, j;

    sorting(array, SIZE);

    printf("The missing elemnts are: \n");

    for (i = 0; i < SIZE; i++)
    {
        for (j = (array[i] + 1); j < array[i + 1]; j++)
        {
            printf("%d\t", j);
        }
    }
    return 0;
}

// Function for Sorting in Ascending Order (Lowest to Greatest!).
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