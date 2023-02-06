/* Write Link list program to perform below operations
a. Insert a element previous to the given element
Example : if  list contains 3,4 & 6 and given element is 5 than you need to insert element before 6.
After insertion  list will be displayed as  3 4 5 6.

b. Insert a element next to given element
Example : if  list contains 3,4 & 6 and given element is 5 than you need to insert element after 6.
After insertion  list will be displayed as  3 4  6 5.

c. Delete the next element  of given element
Example : if  list contains 3,4 & 6 and given element is 6 than you need to delete element before 6.
After deletion list will be displayed as  3  6 .

d. Delete the previous element of given element
Example : if  list contains 3,4 & 6 and given element is 4 than you need to delete element after 4.
After deletion list will be displayed as  3  6 . */

#include <stdio.h>
#include <stdlib.h>

struct linked_list
{
    int data;
    struct linked_list *next;
};

void options();
void insert_previous();
void print_linked_list();

struct linked_list *head_pointer = NULL;

int main()
{
    unsigned int i, no_of_push_elements = 0;
    struct linked_list *temp = NULL;

    printf("Initially push some elements!\n");

    printf("Enter how many elements you want to PUSH: ");
    scanf("%d", &no_of_push_elements);

    for (i = 0; i < no_of_push_elements; i++)
    {
        temp = (struct linked_list *)calloc(1, sizeof(struct linked_list));
        if (temp == NULL)
        {
            printf("MEMORY ALLOCATION FAILED!.");
        }
        else
        {
            printf("Enter/PUSH the data!.\n");
            scanf("%d", &temp->data);
            printf("You pushed %d!.\n", temp->data);
            temp->next = head_pointer;
            head_pointer = temp;
        }
    }
    options();
    return 0;
}

void options()
{
    unsigned int choice;
    printf("Enter your choice!\n");
    printf("Enter '1' to display all elements of linked list.\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        print_linked_list();
        break;

    case 2:
        insert_previous();
        break;

    default:
        printf("INVALID ENTRY! / EXITING!.");
        break;
    }
}

void insert_previous()
{
    struct linked_list *temp;
    int number;
    print_linked_list();
    printf("Enter the number previous to which you need to insert another node.");
    scanf("%d", &number);
    temp = head_pointer;
    while(temp!=NULL)
    {
        if(temp->data == number);
        {

        }
        
    }
}

void print_linked_list()
{
    struct linked_list *temp;
    temp = head_pointer;

    printf("Elements in linked_list are: \n");
    while (temp != NULL)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }
}