// C Program to count the numbers of odd and even numbers in an array.

#include <stdio.h>

int main()
{
    unsigned int size, i, count_even = 0, count_odd = 0;
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the array elements: ");
    for (i = 0; i <= size; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i <= size; i++)
    {
        if (array[i] % 2 == 0)
        {
            count_even = count_even + 1;
        }

        else
        {
            count_odd = count_odd + 1;
        }
    }

    // Method 2: count_odd = size - count_even;

    printf("Count of Even is %d.\n", count_even);
    printf("Count of Odd is %d.", count_odd);
    return 0;
}