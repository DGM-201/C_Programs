/* Write a program to store integer data type using "char" array
    ex: input: int a = 0xaabbccdd; output: b[]={0xaa,0xbb,0xcc,0xdd} */

#include <stdio.h>

int main()
{
    unsigned int integer, i;
    printf("Enter the value in hexadecimal format: ");
    scanf("%x", &integer);

    char *string = (char *)&integer;

    for (i = 0; i < 4; i++)
    {
        printf("%x \t", string[3 - i]);
    }
}