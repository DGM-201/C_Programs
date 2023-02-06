/*
A library charges a fine for every book returned late
For first 5 days the fine is 50 paise,
for 6-10 days fine is one rupee and
above 10 days fine is 5 rupees.
If you return the book after 30 days your membership will be cancelled.
Write a program to accept the number of days the member is late to return
the book and display the fine or the appropriate message.
*/

#include <stdio.h>

#define SLAB1(days) ((days)*(0.5))
#define SLAB2(days) ((days)*(1.0))
#define SLAB3(days) ((days)*(5.0))

int main()
{
    float days, fine;
    printf("Enter the number of late days: ");
    scanf("%f", &days);

    if (days <= 5)
    {
        fine = SLAB1(days);
        printf("Your fine is %f rupee!.", fine);
    }
	
    else if (days >= 6 && days <= 10)
    {
        fine = SLAB1(5) + SLAB2(days - 5);
        printf("Your fine is %f rupee!.", fine);
    }
	
    else if (days > 10 && days <= 30)
    {
        fine = SLAB1(5) + SLAB2(5) + SLAB3(days - 10);
        printf("Your fine is %f rupees!.", fine);
    }
	
    else
    {
        printf("You have exceeded your limit\n");
        printf("Your Library card will be cancelled!.");
    }
	
    return 0;
}