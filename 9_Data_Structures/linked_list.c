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
void delete_at_end();
void display_elements_RtoL();
void count_nodes();

struct linked_list *head_pointer = NULL;
struct linked_list *tail_pointer = NULL;

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
  }
  options();

  return 0;
}

void options()
{
  unsigned int choice = 0;

  printf("\nEnter your choice!\n");
  printf("Press '1' to  INSERT a node at BEGINNING.\n");
  printf("Press '2' to  INSERT a node at END.\n");
  printf("Press '3' to  INSERT a node at MIDDLE. (Work in Progress)\n");
  printf("Press '4' to  DELETE a node at BEGINNING.\n");
  printf("Press '5' to  DELETE a node at LAST.\n");
  printf("Press '6' to  DELETE a node at MIDDLE. (Work in Progress)\n");
  printf("Press '7' to  TRAVERSE from LEFT to RIGHT and display.\n");
  printf("Press '8' to  TRAVERSE from RIGHT to LEFT and display.(Work in Progress)\n");
  printf("Press '9' to  COUNT number of nodes in the linked list.\n");
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

  case 7:
    display_elements_RtoL();
    break;

  case 9:
    count_nodes();
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
  }
  options();
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
  }
  options();
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
  }
  options();
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
  }
  options();
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

  options();
}

void count_nodes()
{
  unsigned int count = 0;
  struct linked_list *temp = NULL;

  temp = head_pointer;

  while (temp != NULL)
  {
    temp = temp->next;
    count = count + 1;
  }

  printf("\nNumber of nodes in linked list are %d.", count);
  options();
}