// Program to display a string in zig zag pattern.

#include <stdio.h>
int main()
{
    char str[100];
    int r = 0, c = 0, i, j;
    int zigzag[5][100], dir;

    printf("Enter the string\n");
    scanf("%s", str);

    for (r = 0; r < 5; r++)
    {
        for (c = 0; c < 100; c++)
        {
            zigzag[r][c] = ' ';
        }
    }

    r = 0;
    c = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        zigzag[r][c] = str[i];
        if (r == 0)
        {
            dir = 1;
        }
        if (r == 4)
        {
            dir = -1;
        }
        r = r + dir;
        c++;
    }

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j < 100; j++)
        {
            printf("%c", zigzag[i][j]);
        }
        printf("\n");
    }
}