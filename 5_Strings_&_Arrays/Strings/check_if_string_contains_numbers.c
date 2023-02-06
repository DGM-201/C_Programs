/* Write a program to check if the given string contains numbers or not

ex: Input: "hello 123": Output: Contains numbers;
Input: "hello there!!": Output: Does not numbers; */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

void main()
{
    unsigned int flag = 0, i = 0;

    char string[100];
    printf("Enter the characters or number, upto 100 chracters are allowed: \n");
    gets(string);

    while (string[i] != '\0')
    {
        if (string[i] >= 48 && string[i] <= 57)
        {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 1)
    {
        printf("Numbers Detected!.");
    }
    else
    {
        printf("No numbers detected!.");
    }
}

// unsigned int size;
// printf("Enter the number of characters you want to enter: ");
// scanf("%d", &size);
// char string[size];
// printf("Enter the characters you can include umbers also: \n");
// gets(string);
// puts(string);

// How can I take size of array from user, but not for character array?.