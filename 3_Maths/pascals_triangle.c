// C program to print pascals triangle.

#include <stdio.h>
void main()
{
    int n, i, j;
	
    printf("Enter the number of lines you want to print: ");
    scanf("%d", &n);
	
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
		
        int k = 1;
		
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k = k * (i - j) / j;
        }
		
        printf("\n");
    }
}