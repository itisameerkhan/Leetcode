#include<stdio.h>
#include<stdlib.h>

typedef struct ListNode
{
    int data;
    struct ListNode *next;
}ListNode;

ListNode *head = NULL;

Node* createNode(int data)
{
    ListNode* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(int data)
{
    ListNode* newNode = createNode(data);
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
    ListNode* newNode = createNode(data);
    ListNode* temp = head;
    while(temp->next != NULL) temp = temp->next;
    temp->next = newNode;
    newNode->next = NULL;
}