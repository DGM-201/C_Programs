// C Program to implement stack using linked list.

#include <stdio.h>
#include <stdlib.h>

void push();
void print_stack();
void pop();

struct stack
{
    int data;
    struct stack *next;
};

struct stack *top = NULL;

int main()
{
    unsigned int options;
    printf("\nEnter '1' to PUSH the element into the stack.\n");
    printf("Enter '2' to PRINT all the element in the stack.\n");
    printf("Enter '3' to POP a element in the stack.\n");
    printf("Press any other key to exit!.\n");
    printf("Enter your choice!.\n");
    scanf("%d", &options);
    switch (options)
    {
    case 1:
        push();
        break;
    case 2:
        print_stack();
        break;
    case 3:
        pop();
        break;
    default:
        printf("Invalid entry! / Exiting the stack!.\n");
    }
    return 0;
}

void push()
{
    struct stack *temp;
    temp = calloc(1, sizeof(struct stack));

    if (temp == NULL)
    {
        printf("Memory not created\n");
    }
    else
    {
        int data;
        printf("Enter a element to insert into the stack!.\n");
        scanf("%d", &data);
        temp->data = data;
        temp->next = top;
        top = temp;
    }
    main();
}

void pop()
{
    struct stack *temp;

    if (top == NULL)
    {
        printf("There are no elements in the stack!.\n");
    }
    else
    {
        temp = top;
        printf("You popped %d.\n", temp->data);
        top = top->next;
        free(temp);
    }
    main();
}

void print_stack()
{
    struct stack *temp;
    temp = top;

    printf("Your stack elements are: ");
    while (temp != NULL)
    {
        printf("%d ,", temp->data);
        temp = temp->next;
    }
    main();
}