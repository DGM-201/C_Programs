// C program to display number of weeks, number of days, no. of hours, number of mins, number of secs
// When input is given in seconds.

#include<stdio.h>

void main()
{
    unsigned int weeks, days, hours, minutes, seconds;
    printf("**Time Converter**\n");
    printf("Enter seconds in range of 60 to 4294967295: ");
    scanf("%d", &seconds);
    printf("%d seconds in weeks, days, hours, minutes and seconds is:\n", seconds);
    minutes = seconds/60;
    seconds = seconds%60;
    hours = minutes/60;
    minutes = minutes%60;
    days = hours/24;
    hours = hours%24;
    weeks = days/7;
    days = days%7; 
    printf("%d weeks\n", weeks);
    printf("%d days\n", days);
    printf("%d hours\n", hours);
    printf("%d minutes\n", minutes);
    printf("%d seconds.\n", seconds);
}