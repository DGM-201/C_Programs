// C Program to find greatest number in an array

#include <stdio.h>

int main()
{
    unsigned int size, greatest, i;
    unsigned int first_greatest = 0, second_greatest = 0;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    unsigned int array[size];
    printf("Enter the array: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < size; i++)
    {
        // unsigned int greatest = 0;

        if (array[i] > first_greatest)
        {
            second_greatest = first_greatest;
            first_greatest = array[i];
        }
        else if (array[i] > second_greatest && array[i] < first_greatest)
        {
            second_greatest = array[i];
        }
    }
    printf("First greatest is %d, Second greatest is %d", first_greatest, second_greatest);
    return 0;
}