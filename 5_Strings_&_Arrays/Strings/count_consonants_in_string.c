// Write a C program to count number of vowels in given string.
/* There are 26 letter in english alphabet, out of which 5 are vowels e.g. a, e, i, o, and u remainig
 are consonants*/

#include <stdio.h>
#include <string.h>

int count_vowels(char *);

void main()
{
    unsigned int consonants;
    char string[300];
    printf("**Finding number of consonants in a string**\n");
    printf("Note: Only 300 characters containing 0-9 and A-Z are allowed, not including space.\n");
    printf("Enter a string: ");
    gets(string);
    consonants = count_vowels(string);
    printf("There are %d consonants in the given string.", consonants);
}

int count_vowels(char *pstring)
{
    unsigned int counter = 0;
    while (*pstring != '\0')
    {
        if(*pstring == 'a' || *pstring == 'e' || *pstring == 'i' || *pstring == 'o' || *pstring == 'u')
        {
            counter = counter + 0;
        }
        else
        {
            counter++;
        }
        pstring++;
    }
    return counter;
}