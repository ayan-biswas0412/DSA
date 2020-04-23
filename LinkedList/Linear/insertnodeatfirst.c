#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data; /* data */
    struct Node* next;
};

void PrintList(struct Node* n);
void InsertatFirst(struct Node** head_ref, int new_data);

int main()
{
   struct Node* head = NULL;
   struct Node* second = NULL;
   struct Node* third = NULL;
   
   /*Creation of the three nodes*/
   head = (struct Node* )malloc(sizeof(struct Node));
   second = (struct Node* )malloc(sizeof(struct Node));
   third = (struct Node* )malloc(sizeof(struct Node));

   /*Data alloction and linking of each node*/

   head->data = 1;
   head->next = second;

   second->data = 2;
   second->next =third;

   third->data = 3;
   third->next  = NULL;

   PrintList(head);

   return 0;


}

/*Funtion for printing the linked list from a given node to the last*/

void PrintList(struct Node* n)
{
   while (n!=NULL)
   {
       printf("%d\n", n->data);/* code */
       n= n->next;
   }
   


}

/*Function to insert a node at the first of the linked list*/

void InsertatFirst(struct Node** head_ref, int new_data)
{
   /*Creation of the new node*/
   struct Node* new_node  = NULL;
   new_node = (struct Node*)malloc(sizeof(struct Node));

   /*Insert data and link the new node to the head*/

   new_node->data = new_data;
   new_node->next = (*head_ref);

   /*Shift the head reference to the new node*/
   *head_ref = new_node;

}

