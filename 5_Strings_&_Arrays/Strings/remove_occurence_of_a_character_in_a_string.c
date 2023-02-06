// Write a program to remove a duplicate occurrence of a character.

#include <stdio.h>
#include <string.h>
#include <strings.h>

void main()
{
    unsigned int count = 0, i = 0, j, k;
    char string[200];

    printf("Enter upto 200 characters: ");
    gets(string);

    // Removing Duplicates
    for (i = 0; string[i] != '\0'; i++)
    {
        for (j = i + 1; string[j] != '\0'; j++)
        {
            if (string[i] == string[j])
            {
                for (k = j - 1; string[k] != '\0'; k++)
                {
                    string[k] = string[k + 1];
                }
                j--;
            }
        }
    }

    puts(string);
}