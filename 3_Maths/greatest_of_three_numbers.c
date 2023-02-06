// C program to find the greatest of three numbers

#include<stdio.h>

void main()
{
    unsigned int a,b,c;
    printf("**Greatest of three number**\n");
    printf("*Note: Enter numbers in range of 0 to 4294967295*\nEnter the numbers: ");
    scanf("%i%i%i",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is the greatest of three!",a);
    }
    if(b>a && b>c)
    {
        printf("%d is the greatest of three!",b);
    }
    if(c>a && c>b)
    {
        printf("%d is the greatest of three!",c);
    }
}