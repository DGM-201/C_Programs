/*
   C Program to implementation of Link list with below functions using switch case:
     a.Insert a node at beginning.
     b.Insert a node at end.
     c.Insert a node at middle.
     d.Delete a node from beginning.
     e.Delete a node from Last.
     f.Delete a node from Middle.
     g.Traverse the list (Left to Right) & display.
     h.Traverse the list (Right to Left) & display.
     i.Count number of nodes present in link list.
*/

#include <stdio.h>
#include <stdlib.h>

struct linked_list
{
    int data;
    struct linked_list *next;
};

void options();
void push_on_top();
void push_at_end();
void delete_at_top();
void delete_at_middle();
void delete_at_end();
void display_elements_RtoL();
void display_elements_LtoR();
void count_nodes();
void reverse_linked_list();
void search_in_node();
void swap_adjacent_node();

struct linked_list *head_pointer = NULL;
struct linked_list *tail_pointer = NULL;

unsigned int count = 0;

int main()
{
    struct linked_list *temp = NULL;

    temp = (struct linked_list *)calloc(1, sizeof(struct linked_list));

    printf("Initially enter one node, so that we can enter another node at the top");
    printf(" or bottom or in the middle.\n");

    if (temp == NULL)
    {
        printf("MEMORY INITIALIZATION FAILED!.");
    }
    else
    {
        printf("Enter/PUSH the data!.\n");
        scanf("%d", &temp->data);
        printf("You pushed %d!.\n", temp->data);
        temp->next = NULL;
        head_pointer = temp;
        tail_pointer = temp;

        count++;
    }

    while (1)
    {
        options();
    }

    return 0;
}

void options()
{
    unsigned int choice = 0, position = 0;
    int search = 0;

    printf("\nEnter your choice!\n");
    printf("Press '1' to  INSERT a node at BEGINNING.\n");
    printf("Press '2' to  INSERT a node at END.\n");
    printf("Press '3' to  INSERT a node at MIDDLE. (Work in Progress)\n");
    printf("Press '4' to  DELETE a node at BEGINNING.\n");
    printf("Press '5' to  DELETE a node at LAST.\n");
    printf("Press '6' to  DELETE a node at MIDDLE.\n");
    printf("Press '7' to  TRAVERSE from LEFT to RIGHT and display.\n");
    printf("Press '8' to  TRAVERSE from RIGHT to LEFT / display Reverse.\n");
    printf("Press '9' to  COUNT number of nodes in the linked list.\n");
    printf("Press '10' to SEARCH an element/data in the linked list.\n");
    printf("Press '11' to SWAP Adjacent Nodes in the linked list.\n");
    printf("Press ANY other KEY to EXIT!.\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        push_on_top();
        break;

    case 2:
        push_at_end();
        break;

    case 4:
        delete_at_top();
        break;

    case 5:
        delete_at_end();
        break;

    case 6:
        printf("Enter the position from bottom which you want to delete: ");
        scanf("%d", &position);
        delete_at_middle(position);
        break;

    case 7:
        display_elements_RtoL();
        break;

    case 8:
        reverse_linked_list();
        break;

    case 9:
        count_nodes();
        break;

    case 10:
        printf("Enter the data that you want to search in the linkedlist: ");
        scanf("%d", &search);
        search_in_node(search);
        break;

    case 11:
        swap_adjacent_node();
        break;

    default:
        printf("INVALID ENTRY / EXITING!");
        break;
    }
}

void push_on_top()
{
    struct linked_list *temp = NULL;

    temp = (struct linked_list *)calloc(1, sizeof(struct linked_list));
    if (temp == NULL)
    {
        printf("Error!. Memory allocation failed!.");
    }
    else
    {
        printf("Enter the data to be PUSHED on TOP: ");
        scanf("%d", &temp->data);
        printf("\nYou PUSHED %d.\n", temp->data);
        temp->next = head_pointer;
        head_pointer = temp;

        count++;
    }
}

void push_at_end()
{
    struct linked_list *temp = NULL;

    temp = (struct linked_list *)calloc(1, sizeof(struct linked_list));
    if (temp == NULL)
    {
        printf("Error!. Memory allocation failed!.");
    }
    else
    {
        printf("Enter the data to be PUSHED at the end!: ");
        scanf("%d", &temp->data);
        printf("\nYou PUSHED %d.\n", temp->data);
        temp->next = NULL;

        tail_pointer->next = temp;
        tail_pointer = temp;

        count++;
    }
}

void delete_at_top()
{
    struct linked_list *temp = NULL;

    temp = head_pointer;

    if (temp == NULL)
    {
        printf("List is Empty!. Try to PUSH some elements into the list.\n");
    }
    else
    {
        printf("Deleted top element %d.", temp->data);
        head_pointer = temp->next;

        count--;
    }
}

void delete_at_end()
{
    struct linked_list *previous_to_end;
    struct linked_list *temp;

    if (head_pointer == NULL)
    {
        printf("List is Empty!. Try to PUSH some elements into the list.\n");
    }
    else
    {
        temp = head_pointer;

        while (temp->next != NULL)
        {
            previous_to_end = temp;
            temp = temp->next;
        }

        previous_to_end->next = NULL;

        printf("Deleted bottom element %d.", tail_pointer->data);

        free(tail_pointer);

        tail_pointer = previous_to_end;

        count--;
    }
}

void delete_at_middle(unsigned int pos)
{
    struct linked_list *prev = head_pointer, *next = NULL;
    int counter = 1;

    if (pos == count)
    {
        head_pointer = prev->next;

        printf("Deleted top element %d.", head_pointer->data);

        free(prev);

        count--;
    }
    else if (pos == 1)
    {
        while (prev->next != NULL)
        {
            next = prev;
            prev = prev->next;
        }

        next->next = NULL;

        printf("Deleted bottom element %d.", tail_pointer->data);

        free(tail_pointer);

        tail_pointer = next;

        count--;
    }
    else
    {
        while (counter != (count - pos))
        {
            prev = prev->next;
            counter++;
        }

        next = prev->next;
        prev->next = next->next;

        printf("Deleted %d at position %d from the bottom.", next->data, pos);

        free(next);

        count--;
    }
}

void display_elements_RtoL()
{
    struct linked_list *temp = NULL;

    temp = head_pointer;

    printf("Elements in Linked List are:\n");

    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void count_nodes()
{
    printf("\nNumber of nodes in linked list are %d.", count);
}

void reverse_linked_list()
{
    struct linked_list *prev = NULL, *curr = head_pointer, *next = NULL, *temp = NULL;

    // Actual node swapping

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head_pointer = prev;
    temp = head_pointer;

    printf("Elements in Linked List are:\n");

    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void search_in_node(int search_data)
{
    struct linked_list *temp = head_pointer;

    unsigned int occurence = 0, flag = 0, node_count = 0;

    while (temp != NULL)
    {
        node_count++;

        if (temp->data == search_data)
        {
            occurence++;
            flag = 1;
        }
        else
        {
            flag = 0;
        }

        if (flag == 1)
        {
            printf("Data %d is present at position %d.\n", search_data, node_count);
        }

        temp = temp->next;
    }

    if (occurence == 0)
    {
        printf("Data is not present in this linked list.\n");
    }
    else
    {
        printf("Number of Occurences of the same data is %d times.\n", occurence);
    }
}

void swap_adjacent_node()
{
    struct linked_list *curr = head_pointer, *next = NULL, *temp = NULL;

    while (curr != NULL)
    {
        next = curr->next;

        if (next->next == NULL)
        {
            next->next = curr;
            curr->next = NULL;

            head_pointer = next;

            break;
        }
        else
        {
            curr->next = next->next;

            temp = next->next;
            next->next = curr;

            curr = temp;
        }
    }
}