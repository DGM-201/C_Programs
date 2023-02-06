// Write a function to reverse given string using pointers.
// Example :  input -> hello  
// output -> olleh

#include<stdio.h>
#include<string.h>

int reverse_string(char *);

void main()
{
    char string[300];
    printf("**Reversing a string**\n");
    printf("Note: Only 300 characters are allowed including space.\n");
    printf("Enter a string: ");
    gets(string);
    reverse_string(string);
}

// Using Recursion
int reverse_string(char *pstring)
{
    if(*pstring != '\0')
    {
        reverse_string(pstring = pstring + 1);
        pstring--;
        putchar(*pstring);
    }
    return 0;
}