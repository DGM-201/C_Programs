// C program to compute the length of a string without using inbuilt function
// Use function and arrays to calculate.

#include <stdio.h>
#include <string.h>

int string_length(char []);

void main()
{
    unsigned int length;
    char string[300];
    printf("**Finding string length**\n");
    printf("Note: Only 300 characters are allowed including space.\n");
    printf("Enter a string: ");
    gets(string);
    length = string_length(string);
    printf("The length of string is %d.", length);
}

// Note: Arrays and pointers are interchangable

int string_length(char pstring[])
{
    unsigned int i, count_char = 0;
    for(i=0; pstring[i] !='\0'; i++)
    {
        count_char = count_char + 1;
    }
    return count_char;
}