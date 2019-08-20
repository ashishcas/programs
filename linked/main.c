
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Link list node */
struct node
{
        char data[40];
        struct node* next;
};
/* Function to push a node */
void push(struct node** head_ref, char* new_data)
{
        /* allocate node */
        struct node* new_node = malloc(sizeof(struct node));
        /* put in the data  */
        strcpy(new_node->data, new_data);

        /* link the old list off the new node */
        new_node->next = (*head_ref);
        /* move the head to point to the new node */
        (*head_ref) = new_node;
}
/* Function to print linked list */
void printList(struct node *head)
{
        struct node *temp = head;
        while (temp != NULL)
        {
                printf("%s  ", temp->data);
                temp = temp->next;
        }
}
/* Function to count the number of elements in the linked list */
int listCount(struct node *head){ int count = 0; return count;}

/* Function to reverse the linked list */
/**/
void reverseList(struct node** head_ref){}
/*Function to delete all elements in a Linked List */
/**/
void listAllDelete(struct node **currP){}
/***Function to delete a particular element in alinked list**/
void deleteElement(struct node **currP, char *value){}

int main()
{
        /* Start with the empty list */
        struct node* head = NULL;
        push(&head, "Tom");
        push(&head, "Dick");
        push(&head, "Harry");
        push(&head, "Paul");
        push(&head, "Chris");
        push(&head, "Stuart");
        push(&head, "Rob");
        printf("Linked list after insertion: \n");
        printList(head);
        printf("\n");
}
