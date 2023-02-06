// C Program to convert alphabets from upper to lower using both array

#include <stdio.h>
char uptolowercase(char *);

char uptolowercase(char *str)
{
    unsigned int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i] + 32; 
        // ASCII value difference between small 'a' and 'A' is 32 and it is same for all alphabets.
    }
    return str[i];
}

void main()
{
    char string[200];
    printf("Enter a character in upper case: ");
    gets(string);
    uptolowercase(string);
    printf("Lowercase letter is : %s\n", string);
}