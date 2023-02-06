/* C program to print the day if the date is given.
Input: 14 Oct
Output: Friday */

#include <stdio.h>

void main()
{
    unsigned int date = 0, remaining_days = 0;

    printf("This works for only October Month (1-31st) only: ");
    printf("Enter the date: ");
    scanf("%d", &date);

    remaining_days = date % 7;

    switch (remaining_days)
    {
    case 0:
        printf("Friday!.");
        break;

    case 1:
        printf("Saturday!.");
        break;

    case 2:
        printf("Sunday!.");
        break;

    case 3:
        printf("Monday!.");
        break;

    case 4:
        printf("Tuesday!.");
        break;

    case 5:
        printf("Wednesday!.");
        break;

    case 6:
        printf("Thursday!.");
        break;
    }

    // if (date % 7 == 0)
    // {
    //     printf("Friday!");
    // }
    // else if (date % 7 == 1)
    // {
    //     printf("Saturday!");
    // }
    // else if (date % 7 == 2)
    // {
    //     printf("Sunday!");
    // }
    // else if (date % 7 == 3)
    // {
    //     printf("Monday!");
    // }
    // else if (date % 7 == 4)
    // {
    //     printf("Tuesday!");
    // }
    // else if (date % 7 == 5)
    // {
    //     printf("Wednesday!");
    // }
    // else
    // {
    //     printf("Thursday!");
    // }
}