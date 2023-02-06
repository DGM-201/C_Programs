// Implement a C program to perform queue data structure.

#include <stdio.h>

#define QUEUE_SIZE 5

void push();
void pop();
void print_queue();

unsigned int queue[QUEUE_SIZE];
unsigned int queue_back = 0;
unsigned int queue_front = 0;

int main()
{
    unsigned int options;

    printf("\nEnter '1' to PUSH the element into the queue.\n");
    printf("Enter '2' to PRINT all the element in the queue.\n");
    printf("Enter '3' to POP a element in the queue.\n");
    printf("Press any other key to exit!.\n");
    printf("Enter your choice!.\n");
    scanf("%d", &options);
    switch (options)
    {
    case 1:
        push();
        break;
    case 2:
        print_queue();
        break;
    case 3:
        pop();
        break;
    default:
        printf("Invalid entry! / Exiting the queue!.\n");
    }
    return 0;
}

void push()
{
    if (queue_back < QUEUE_SIZE)
    {
        printf("Enter the element\n");
        scanf("%d", &queue[queue_back]);
        queue_back++;
    }
    else
    {
        printf("Queue Overflow!.\n");
    }
    main();
}

void pop()
{
    if (queue_back == queue_front)
    {
        printf("Queue is empty!.\n");
        queue_back = 0;
        queue_front = 0;
    }
    else
    {
        printf("You popped %d from the queue!.", queue[queue_front]);
        queue_front++;
    }
    main();
}

void print_queue()
{
    int i;
    printf("Your Queue elements are: ");
    for (i = queue_front; i < queue_back; i++)
    {
        printf("%d\n", queue[i]);
    }
    main();
}