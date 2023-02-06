// C program to compute the length of a string without using inbuilt function
// Use function and array to calculate.

#include <stdio.h>
#include <string.h>

int string_length(char *);

void main()
{
    unsigned int length;
    char string_array[300];
    printf("**Finding string length**\n");
    printf("Note: Only 300 characters are allowed including space.\n");
    printf("Enter a string: ");
    gets(string_array);
    length = string_length(string_array);
    printf("The length of string is %d.", length);
}

// Note: String is also an array with data type of a character.

int string_length(char *pstring)
{
    unsigned int count_char = 0;
    while (*pstring != '\0')
    {
        count_char = count_char + 1;
        pstring = pstring + 1;
    }
    return count_char;
}