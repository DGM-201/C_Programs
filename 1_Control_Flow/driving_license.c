// C program to find whether a person is allowed to get a driving licence or not.

#include<stdio.h>

int main()
{
    int age;
    printf("**Enter positive whole numbers only!**\nEnter your age: ");
    scanf("%d", &age);
    (18 <= age && age <= 65) ? printf("Eligible for D.L!") : printf("Not eligible for D.L!");
    return 0;
}