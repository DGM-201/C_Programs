// Write a program to identify whether the given string is palindrome or not.

#include <stdio.h>

void main()
{
    unsigned int count = 0, i = 0, flag;
    char string[200];

    printf("Enter upto 200 characters: ");
    gets(string);

    while (string[i] != '\0')
    {
        count++;
        i++;
    }

    for (i = 0; i < (count / 2); i++)
    {
        if (string[i] == string[count - i - 1])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        printf("Entered string is a PALINDROME!.");
    }
    else
    {
        printf("Entered string is NOT A PALINDROME!.");
    }
}