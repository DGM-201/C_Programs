// Write a C Program to remove special characters in a string.

#include <stdio.h>

void main()
{
    char string[100];
    int i, j;
    printf("Enter a string containing a special character: ");
    gets(string);
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] < 'a' || string[i] > 'z')
        {
            for (j = i; string[j] != '\0'; j++)
            {
                string[j] = string[j + 1];
            }
            i--;
        }
    }
    puts(string);
}