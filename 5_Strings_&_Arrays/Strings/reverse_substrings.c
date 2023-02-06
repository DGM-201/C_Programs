// C Program to reverse substrings in a string.

#include <stdio.h>
#include <strings.h>
#include <string.h>

unsigned int count = 0;

void main()
{
    unsigned int i = 0;
    char str[100];

    printf("Enter the String: \n");
    gets(str);
    puts(str);

    while (str[i] != 32)
    {
        count++;
        i++;
    }

    for (i = (count + 1); str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    printf("%c", 32);

    for (i = 0; i < count; i++)
    {
        printf("%c", str[i]);
    }
}