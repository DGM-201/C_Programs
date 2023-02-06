// C Program to reverse a string.

#include <stdio.h>
#include <string.h>

void main()
{
    unsigned int i = 0, len = 0;
    char name[] = "hello";
    char temp;

    printf("%s\n", name);
    
    len = strlen(name);

    for (i = 0; i < (len / 2); i++)
    {
        // swapping
        temp = name[i];
        name[i] = name[len - i - 1];
        name[len - i - 1] = temp;
    }

    printf("%s\n", name);
}