/* C program to check if a number is present in an array or not, if present count number of times it
occured */

#include <stdio.h>

int main()
{
    unsigned int size, i, find_number, count = 0;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter the array elements: ");
    for (i = 0; i <= size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter number that you want to find: ");
    scanf("%d", &find_number);

    for (i = 0; i <= size; i++)
    {
        if (array[i] == find_number)
        {
            count = count + 1;
        }
    }

    if (count > 0)
    {
        printf("Number %d is present and it has occured %d times!.", find_number, count);
    }
    else
    {
        printf("Number not found!.");
    }
    return 0;
}