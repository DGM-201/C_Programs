// C Program to reverse an array.

#include <stdio.h>

void array_reversal_M1();
void array_reversal_M2();

#define SIZE 5

int main()
{
    int array[SIZE] = {1, 2, 3, 4, 5};

    array_reversal_M1(array);

    array_reversal_M2(array);

    return 0;
}

/* Method 1: Just printing in reverse order */

void array_reversal_M1(int array[])
{
    int i = 0;

    printf("1. Reversed array: ");

    // If you use unsigned int i it will garbage values for the condition i >= 0;
    for (i = (SIZE - 1); i >= 0; i--)
    {
        printf("%d \t", array[i]);
    }
}

/* Method 2: By Swapping last to first, if there are odd number of elements in
array middle one can be ignored, else it needs to be swapped. */

void array_reversal_M2(int array[])
{
    int i = 0;
    int temp = 0;

    // Actual Swapping

    for (i = 0; i < (SIZE / 2); i++)
    {
        temp = array[i];
        array[i] = array[SIZE - 1 - i];
        array[SIZE - 1 - i] = temp;
    }

    printf("\n2. Reversed array: ");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d \t", array[i]);
    }
}