// C Program to implement double linked list.

#include <stdio.h>
#include <stdlib.h>

struct double_linked_list
{
    struct double_linked_list *previous;
    int data;
    struct double_linked_list *next;
};

void print_linked_list();
void insert_node();
void delete_node();
void swap_node();
void search();

struct double_linked_list *top = NULL;
struct double_linked_list *bottom = NULL;

unsigned int node_count = 0;

int main()
{
    unsigned int options = 0;
    int data = 0;
    int search_data = 0;
    unsigned int position = 0;
    unsigned int node = 0;

    while (1)
    {

        printf("Enter your choice!\n");
        printf("Enter '1' to display all elements of linked list.\n");
        printf("Enter '2' to insert an element/node into linked list.\n");
        printf("Enter '3' to delete an element/node of linked list.\n");
        printf("Enter '4' to swap the nodes.\n");
        printf("PRESS ANY OTHER KEY TO EXIT!...\n");
        scanf("%d", &options);

        switch (options)
        {
        case 1:
        {
            print_linked_list();

            break;
        }
        case 2:
        {
            struct double_linked_list *temp = NULL;

            temp = calloc(1, sizeof(struct double_linked_list));

            if (top == NULL && bottom == NULL)
            {
                printf("Initially there is no node to insert at top or bottom ");
                printf("so try to enter one element first and then try to insert at top/bottom/middle!\n");
                printf("Enter the data to be pushed to the node: ");
                scanf("%d", &data);

                // Corner Conditions
                if (temp == NULL)
                {
                    printf("MEMORY ALLOCATION FAILED!...");
                }
                else
                {
                    temp->previous = NULL;
                    temp->data = data;
                    printf("You pushed %d!.\n", temp->data);
                    temp->next = NULL;

                    top = temp;
                    bottom = temp;

                    node_count++;

                    main();
                }
            }
            else
            {
                printf("Enter the data to be pushed to the node: ");
                scanf("%d", &data);
                printf("Enter the position after/before which the data needs to be pushed: ");
                scanf("%d", &position);

                insert_node(data, position);
            }
            break;
        }
        case 3:
        {
            printf("Enter which node you want to delete: ");
            scanf("%d", &node);

            delete_node(node);

            break;
        }
        case 4:
        {
            swap_node();

            break;
        }
        case 5:
        {
            printf("Enter the data that you want to find: ");
            scanf("%d", &search_data);
            search(search_data);
            break;
        }
        default:
        {
            printf("INVALID ENTRY / EXITING!.....");
            break;
        }
        }
    }
}

void insert_node(int insert, unsigned int pos)
{
    struct double_linked_list *temp = NULL;
    struct double_linked_list *temp1 = NULL;

    temp = calloc(1, sizeof(struct double_linked_list));

    if (temp == NULL)
    {
        printf("Memory Allocation Failed!.");
    }
    else
    {
        if (pos == 1)
        {
            top->previous = temp;
            temp->previous = NULL;
            temp->data = insert;
            printf("You pushed %d!.\n", temp->data);
            temp->next = top;
            top = temp;

            node_count++;
        }
        else if (pos == node_count + 1)
        {
            bottom->next = temp;
            temp->previous = bottom;
            temp->data = insert;
            printf("You pushed %d!.\n", temp->data);
            temp->next = NULL;
            bottom = temp;

            node_count++;
        }
        else
        {
            unsigned int count = 1;

            temp1 = top;

            while (pos != (count + 1))
            {
                temp1 = temp1->next;
                count++;
            }

            temp->previous = temp1;
            temp->data = insert;
            temp->next = temp1->next;
            temp1->next = temp;

            node_count++;
        }
    }
}

void delete_node(unsigned int delete_node)
{
    struct double_linked_list *temp = NULL;
    struct double_linked_list *temp1 = NULL;

    if (delete_node == 1)
    {
        temp = top;

        top = temp->next;
    }
    else if (delete_node == node_count)
    {
        temp = bottom;

        bottom = temp->previous;
    }
    else
    {
        // Optimizations

        if (delete_node > node_count / 2)
        {
            unsigned int count = node_count;

            temp = bottom;

            while (delete_node != count)
            {
                temp = temp->previous;
                count--;
            }

            temp1 = temp->previous;
            temp1->next = temp->next;

            temp1 = temp->next;
            temp1->previous = temp->previous;
        }
        else
        {
            unsigned int count = 1;

            temp = top;

            while (delete_node != count)
            {
                temp = temp->next;
                count++;
            }

            temp1 = temp->previous;
            temp1->next = temp->next;

            temp1 = temp->next;
            temp1->previous = temp->previous;
        }
    }

    printf("You deleted %d from the linked list!.\n", temp->data);
    node_count = --node_count;

    free(temp);
}

void swap_node()
{
    unsigned int count = 1, pos1 = 0, pos2 = 0;

    struct double_linked_list *temp1 = top;
    struct double_linked_list *temp2 = NULL;
    struct double_linked_list *temp3 = NULL;

    printf("Enter the two positions where you want to swap: ");
    scanf("%d %d", &pos1, &pos2);

    // Swap Adjacent
    if (pos2 == pos1)
    {
        // Traversing to find Position1
        while (count != pos1)
        {
            temp1 = temp1->next;
            count++;
        }
        temp2 = temp1->next; // Finding Position2

        // Actual Node Swapping
        temp3 = temp2->next;
        temp3->previous = temp1;

        temp2->next = temp1;
        temp2->previous = temp1->previous;

        temp1->next = temp3;
        temp3 = temp1->previous;
        temp3->next = temp2;
        temp1->previous = temp2;
    }
}

void search(int data)
{
    unsigned int count = 1;
    struct double_linked_list *temp = top;

    while (temp->data != data)
    {
        temp = temp->next;
    }
}

void print_linked_list()
{
    struct double_linked_list *temp;
    temp = top;

    // Corner conditions
    if (temp == NULL)
    {
        printf("There are no elements in the linked list!.\n");
        printf("Try to PUSH some elements first!.\n");
    }
    else
    {
        printf("Elements in linked list are: \n");
        printf("\nAddress Previous_Address Data Next_Address\n");
        while (temp != NULL)
        {
            printf("\n%d %d %d %d\n", temp, temp->previous, temp->data, temp->next);
            temp = temp->next;
        }
        printf("\nNumber of nodes in Linked list is ' %d '.\n", node_count);
    }
}