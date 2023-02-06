// Write a C program to count number of vowels in given string.
// There are 26 letter in english alphabet, out of which 5 are vowels e.g. a, e, i, o, and u.

#include <stdio.h>
#include <string.h>

int count_vowels(char *);

void main()
{
    unsigned int vowels;
    char string[300];
    printf("**Finding number of vowels in a string**\n");
    printf("Note: Only 300 characters are allowed including space.\n");
    printf("Enter a string: ");
    gets(string);
    vowels = count_vowels(string);
    printf("There are %d vowels in the given string.", vowels);
}

int count_vowels(char *pstring)
{
    unsigned int counter = 0;
    while (*pstring != '\0')
    {
        if(*pstring == 'a' || *pstring == 'A')
        {
            counter++;
        }
        else if(*pstring == 'e' || *pstring == 'E')
        {
            counter++;
        }
        else if(*pstring == 'i' || *pstring == 'I')
        {
            counter++;
        }
        else if(*pstring == 'o' || *pstring == 'O')
        {
            counter++;
        }
        else if(*pstring == 'u' || *pstring == 'U')
        {
            counter++;
        }
        pstring++;
    }
    return counter;
}