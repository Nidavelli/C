#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Node structure
typedef struct node{
    int num;
    struct node* next;
}node;

node* createNode(int num);
void insertAtBeginning(node** head, int num);
void printList(node* head);

int main(int argc, char* argv[]){//Insert values at the terminal
    node* head = NULL;

    for (int i=1 ; i<argc ; i++){
        insertAtBeginning(&head, atoi(argv[i]));
        printList(head);
    }    
}

//Function to create a new node
node* createNode(int num){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->num = num;
    newNode->next = NULL;
    return newNode;
}

//Function to insert node at the beggining
void insertAtBeginning(node** head, int num){
    node* newNode = createNode(num);
    newNode->next = *head;
    *head = newNode;
}

//Printing the linked list
void printList(node* head){
    node *n = head;
    while(n != NULL){
        printf("%d ", n->num);
        n = n->next;
    }
    printf("NULL\n");
}


