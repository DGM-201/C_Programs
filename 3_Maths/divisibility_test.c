//C program to test divisibility of 3,7 and 10 upto 100

#include<stdio.h>

int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%3!=0 && i%7!=0 && i%10!=0) printf("%d\n",i);
        if(i%3==0) printf("Hi!\n");
        if(i%7==0) printf("Hello!\n");
        if(i%10==0) printf("Bye!\n");
        if(i%3==0 && i%10==0) printf("Hi there!\n");
        if(i%10==0 && i%7==0) printf("Hello there!\n");
        if(i%3==0 && i%7==0) printf("Greetings!\n");
        if(i%3==0 && i%7==0 && i%10==0) printf("I'm great!\n");
    }
}