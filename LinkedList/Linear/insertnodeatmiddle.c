/*C function to insert a node at middle of a linked list*/
#include<stdio.h>
#include<stdlib.h>

struct Node{
   int data;
   struct Node* next;

};




void InsertAtMiddle(struct Node* prev_node, int new_data)
{
   /*First create a new node*/

   struct Node * new_node = NULL;
   new_node = (struct Node*)malloc(sizeof(struct Node));

   /*Insert the data into the new node*/
   new_node->data = new_data;
   /*Point the new node to the node in which the previous node was pointed*/
   new_node->next = prev_node->next ; 

   /*Point the previous node at the new node*/
   
   prev_node->next = new_node ; 
   
}



void PrintNode(struct Node* n)
{
    while (n!=0)
    {
       printf("%d \n", n->data); /* code */
       n = n->next;
    }
    
}

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL ;

    InsertAtMiddle(second,4);

    PrintNode(head);


    return 0 ;

}