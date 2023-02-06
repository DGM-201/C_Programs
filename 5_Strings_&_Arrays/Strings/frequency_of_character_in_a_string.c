// Write a C program to find a frequency of a character in a string, without using for loop.

#include <stdio.h>
#include <strings.h>
#include <string.h>

void main()
{
    unsigned int i = 0, count = 0;
    char character;
    char string[200];

    printf("Enter upto 200 characters: ");
    gets(string);

    printf("Enter a character to find its occurences: ");
    scanf("%c", &character);

    while (string[i] != '\0')
    {
        if (string[i] == character)
        {
            count++;
        }
        i++;
    }

    printf("The frequency of character '%c' is '%d'.", character, count);
}