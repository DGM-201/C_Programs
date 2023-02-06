// Write a C Program to change the contents of float datatype using char pointer.

#include <stdio.h>

int main()
{
    unsigned int i;
    float number;

    // // Typecasting the pointer from float to char datatype.
    // Initial address
    // char *point0 = (char *)&number;
    // char *point1 = (char *)&number + 1;
    // char *point2 = (char *)&number + 2;
    // char *point3 = (char *)&number + 3;
    // Total four bytes is assigned to four char variables.

    // // Changing the contents of float using char pointers.
    // *point0 = 0x00;
    // *point1 = 0x00;
    // *point2 = 0x7c;
    // *point3 = 0xc1;

    char *pointer[4];

    for (i = 0; i <= 4; i++)
    {
        pointer[i] = (char *)&number + i;
    }

    *pointer[0] = 0x00;
    *pointer[1] = 0x00;
    *pointer[2] = 0x7c;
    *pointer[3] = 0xc1;

    printf("%f\n", number);
}

// Example: (-15.75000) in binary format is (1100 0001 0111 1100 0000 0000 0000 0000)
//             in hexadecimal format is 0xc17c0000