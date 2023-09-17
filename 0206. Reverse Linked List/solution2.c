#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;

Node *head = NULL;

Node* createNode(int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(int data)
{
    Node* newNode = createNode(data);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(int data)
{
    if(head==NULL)
    {
        insertAtBeginning(data);
        return;
    }
    Node* newNode = createNode(data);
    Node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    temp->next = newNode;
    newNode->next = NULL;
}
void display(Node* node)
{
    Node* temp = node;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
Node* reverseList(Node* head)
{
    Node* prevNode = NULL;
    Node* currNode = head;
    Node* nextNode = NULL;
    while(currNode!=NULL)
    {
        nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }
    head = prevNode;
    return head;
}
int main()
{
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);
    insertAtEnd(5);
    Node* ans = reverseList(head);
    display(ans);
}