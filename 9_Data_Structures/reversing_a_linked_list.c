// C Program to implement reversing of a linked list

#include <stdio.h>
#include <stdlib.h>

void push();
void display_reverse();

struct linked_list
{
    int data;
    struct linked_list *next;
};

struct linked_list *top_of_list_pointer = NULL;
// Initializing a structure pointer to Null, next address / represents top of the stack (one on top of one).

int main()
{
    unsigned int options;
    printf("Enter '1' to PUSH elements into linked list.\n");
    printf("Enter '2' to PRINT ALL elements of linked list.\n");
    printf("PRESS ANY KEY TO EXIT!.\n");
    printf("Enter your choice!\n");
    scanf("%d", &options);
    switch (options)
    {
    case 1:
    {
        push();
        break;
    }
    case 2:
    {
        display_reverse();
        break;
    }
    default:
    {
        printf("INVALID ENTRY! / EXITED!");
    }
    }
    return 0;
}

void push()
{
    unsigned int options, no_of_elements, i;
    printf("Enter the number of elements you want to input: ");
    scanf("%d", &no_of_elements);
    for (i = 0; i < no_of_elements; i++)
    {
        struct linked_list *temp = NULL;              // Initializing a structure pointer to Null.
        temp = calloc(1, sizeof(struct linked_list)); // Creating a Dynamic memeory using Calloc function
        if (temp == NULL)
        {
            printf("ERROR!: Memory is not allocated!.");
        }
        else
        {
            // LIFO (Last In First Out)

            printf("Enter the data to push into the linked list: \n");
            scanf("%d", &temp->data);
            printf("You pushed %d!.\n", temp->data);
            temp->next = top_of_list_pointer;
            top_of_list_pointer = temp;
        }
    }
    main();
}

void display_reverse()
{
    struct linked_list *temp;
    temp = top_of_list_pointer;
    printf("Reversed linked list is: \n");
    if (temp == NULL)
    {
        printf("Linked List is EMPTY!.\n");
    }
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    printf("End of Linked List!.");
}