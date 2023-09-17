#include<stdio.h>
#include<stdlib.h>

typedef struct lnode
{
    int data;
    struct lnode* next;
}Node;

Node* head = NULL;

Node* createNode()
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(int val)
{
    if(head == NULL)
    {
        Node *newNode = createNode();
        newNode->data = val;
        head = newNode;
        return;
    }
    Node *newNode = createNode();
    newNode->data = val;
    newNode->next = head;
    head =  newNode;
}
void display()
{
    Node *temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
void insertAtEnd(int val)
{
    Node* temp = head;
    if(head==NULL)
    {
        insertAtBeginning(val);
        return;
    }
    Node* newNode = createNode();
    newNode->data = val;
    while(temp->next != NULL)
    temp = temp->next;

    temp->next = newNode;
}
Node* deleteDuplicates(Node* head)
{
    Node *p1,*p2,*dup;
    p1 = head;
    while(p1 != NULL)
    {
        p2 = p1;
        while(p2->next != NULL)
        {
            if(p1->data == p2->next->data)
            {
                dup = p2->next;
                p2->next = p2->next->next;
                free(dup);
            }
            else  
            p2 = p2->next;
        }
        p1 = p1->next;
    }
    return head;
}
int main()
{
    insertAtEnd(1);
    insertAtEnd(1);
    insertAtEnd(2);

    Node* ans = deleteDuplicates(head);
    display(ans);
}