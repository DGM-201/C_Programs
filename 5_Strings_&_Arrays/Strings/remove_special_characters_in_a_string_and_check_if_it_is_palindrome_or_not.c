/* C Program to remove special character from a string and check whether the
resultant string is palindrome or not*/

#include <stdio.h>
#include <string.h>

void remove_special_characters();

void uptolowercase();

void check_palindrome();

void main()
{
    char str[100];

    printf("Enter a string containing a special character: ");
    gets(str);

    // Calling Functions

    remove_special_characters(str);

    uptolowercase(str);

    check_palindrome(str);
}

void remove_special_characters(char string[])
{
    unsigned int i = 0, j = 0;

    for (i = 0; string[i] != '\0'; i++)
    {
        if ((string[i] < 'a' || string[i] > 'z') && (string[i] < 'A' || string[i] > 'Z') && (string[i] < '0' || string[i] > '9'))
        {
            for (j = i; string[j] != '\0'; j++)
            {
                string[j] = string[j + 1];
            }
            i--;
        }
    }

    printf("After removing special characters inside a string: \n");
    puts(string);
}

void uptolowercase(char str[])
{
    unsigned int i = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
            // ASCII value difference between small 'a' and 'A' is 32 and it is same for all alphabets.
        }
    }

    printf("After converting upper case characters to lower case characters: \n");
    puts(str);
}

void check_palindrome(char string[])
{

    unsigned int length = 0, i = 0, flag = 0;

    length = strlen(string);

    for (i = 0; i < (length / 2); i++)
    {
        if (string[i] == string[length - i - 1])
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