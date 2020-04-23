#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node* next;
};

void InsertNodeatlast(struct Node* last_node, int new_data)
{
    /*First Create a node*/
    struct Node* new_node = NULL;
    new_node = (struct Node*)malloc(sizeof(struct Node));

    /*Insert the Data*/
    new_node->data = new_data;
    last_node->next = new_node;

    new_node->next = NULL;



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

    
    InsertNodeatlast(third,4);
    PrintNode(head);


    return 0 ;

}