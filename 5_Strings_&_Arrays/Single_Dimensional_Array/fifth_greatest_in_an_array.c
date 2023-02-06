/* C program to find the 5th highest number in an array of 20 and
display if the number is prime or not. */

#include <stdio.h>

// Function Declaration
void sorting();

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

    sorting(array, size);

    printf("Enter which greatest you want: ");
    scanf("%d", &greatest_place);

    printf("The %dth greatest element in the array is %d.\n", greatest_place, array[greatest_place - 1]);

    // To see whether the number is prime or not
    for (i = 2; i < array[greatest_place - 1]; i++)
    {
        if ((array[greatest_place - 1] % i) == 0)
        {
            printf("The Number is not a prime!.");
        }
        else
        {
            printf("The number is a prime number!.");
        }
    }
    return 0;
}

// Function for Sorting in Descending Order
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