// Write a program to print first ten even multiples of 3.

#include <stdio.h>

int main()
{
    unsigned int i = 0;

    for (i = 1; i < 60; i++)
    {
        if ((i % 3 == 0) && (i % 2 == 0))
        {
            printf("%d\t", i);
        }
    }

    return 0;
}