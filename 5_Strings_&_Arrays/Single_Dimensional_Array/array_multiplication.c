#include <stdio.h>

int main()
{
    unsigned int i, j;
    int array_a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int array_b[3][3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            array_b[i][j] = array_a[i][j] * array_a[j][i];
        }
    }

    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d ", array_b[i][j]);
        }
    }
    return 0;
}