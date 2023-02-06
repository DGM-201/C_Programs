// Check whether the entered number is divisible by 8 using bitwise operation.

#include <stdio.h>

int main()
{
    unsigned int number = 0;
    printf("Enter the number to check if it is divisible by 8: ");
    scanf("%d", &number);

    if ((number & 0x00000002 == 2) || (number & 0x00000004 == 4) || (number & 0x00000008 == 8))
    {
        // printf("Divisible by 8!.");
        printf("Not Divisible by 8!.");
    }
    else
    {
        printf("Divisible by 8!.");
        // printf("Not Divisible by 8!.");
    }

    // Method 2
    if (number & 0x00000007 == 0) // if (number & ~())
    {
        printf("Divisible by 8!.");
    }
    else
    {
        printf("Not Divisible by 8!.");
    }

    return 0;
}