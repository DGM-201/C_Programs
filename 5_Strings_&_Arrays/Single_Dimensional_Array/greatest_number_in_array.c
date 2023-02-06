// Write a C program to find maximum number in an array.

#include<stdio.h>

void main()
{
    unsigned int size, i, greatest = 0;
    printf("**Note: Enter numbers in range of 0 to 4294967295\n");
    printf("Enter the size of the array: ");
    scanf("%u", &size);
    unsigned int array[size];
    
    // Size has to declared first and then the array can be initialized
    
    printf("Enter the array elements, Note: Press Enter each time you input a value:\n");
    for(i=0; i<=size; i++)
    {
        scanf("%u", &array[i]);
        if(array[i]>greatest)
        {
            greatest = array[i];
        }
    }
    printf("Greatest number in the given array is %u.",greatest);
}