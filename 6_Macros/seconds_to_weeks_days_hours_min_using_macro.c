// C Program to convert seconds to weeks, days, hours and minutes using macros

#include<stdio.h>

#define WEEKS(days) (days/7)
#define DAYS(hours) (hours/24)
#define HOURS(minutes) (minutes/60)
#define MINUTES(seconds) (seconds/60)

int main()
{
    unsigned int second, week, day, hour, minute;
    printf("Enter the seconds: ");
    scanf("%d", &second);
	
    minute = MINUTES(second);
    second = second % 60;
	
    hour = HOURS(minute);
    minute = minute % 60;
	
    day = DAYS(hour);
    hour = hour % 24;
	
    week = WEEKS(day);
    day = day % 7;
	
    printf("%d days\n", day);
    printf("%d hours\n", hour);
    printf("%d minutes\n", minute);
    printf("%d seconds.\n", second);
	
    return 0;
}