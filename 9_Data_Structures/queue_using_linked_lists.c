// C Program to implement queue using linked list.

#include <stdio.h>
#include <stdlib.h>

struct linked_queue
{
    int data;
    struct linked_queue *next;
};

void push();
void pop();
void display();

struct linked_queue *front_pointer = NULL, *end_pointer = NULL;

int main()
{
    unsigned int options;
    printf("Enter 1 to PUSH the data.\n");
    printf("Enter 2 to POP the data.\n");
    printf("Enter 3 to DISPLAY the data: \n");
    printf("Enter your choice! \n");
    scanf("%d", &options);
    switch (options)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    default:
        printf("EXIT! / Invalid Entry!.");
    }
    return 0;
}

void push()
{
    struct linked_queue *temp;
    temp = calloc(1, sizeof(struct linked_queue));
    
    if (temp == NULL)
    {
        printf("ERROR!: Memory not Initilaized!.\n");
    } 
    else
    {
        printf("Enter the data to be pushed:\n");
        scanf("%d", &temp->data);
        if (front_pointer == NULL)
        {
            front_pointer = temp;
        }
        else
        {
            end_pointer->next = temp;
        }
        end_pointer = temp;
        printf("Data Pushed is %d.\n", temp->data);
    }
    main();
}

void pop()
{
    int data;
    struct linked_queue *temp;
    data = front_pointer->data;
    temp = front_pointer;
    front_pointer = front_pointer->next;
    free(temp);
    printf("Removed Data is %d.\n", data);
    main();
}

void display()
{
    struct linked_queue *temp;
    temp = front_pointer;
    printf("Elements in Queue is:\n");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    main();
}