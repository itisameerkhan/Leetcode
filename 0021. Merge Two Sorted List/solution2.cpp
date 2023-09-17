#include<bits/stdc++.h>
using namespace std;

typedef struct lnode
{
    int data;
    struct lnode* next;
}Node;

Node* A = NULL;
Node* B = NULL;

Node* createNode()
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginningA(int val)
{
    if(A == NULL)
    {
        Node *newNode = createNode();
        newNode->data = val;
        A = newNode;
        return;
    }
    Node *newNode = createNode();
    newNode->data = val;
    newNode->next = A;
    A =  newNode;
}
void insertAtBeginningB(int val)
{
    if(B == NULL)
    {
        Node *newNode = createNode();
        newNode->data = val;
        B = newNode;
        return;
    }
    Node *newNode = createNode();
    newNode->data = val;
    newNode->next = B;
    B =  newNode;
}
void display(Node* head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void insertAtEndA(int val)
{
    Node* temp = A;
    if(A==NULL)
    {
        insertAtBeginningA(val);
        return;
    }
    Node* newNode = createNode();
    newNode->data = val;
    while(temp->next != NULL)
    temp = temp->next;

    temp->next = newNode;
}
void insertAtEndB(int val)
{
    Node* temp = B;
    if(B==NULL)
    {
        insertAtBeginningB(val);
        return;
    }
    Node* newNode = createNode();
    newNode->data = val;
    while(temp->next != NULL)
    temp = temp->next;

    temp->next = newNode;
}
class Solution 
{
    public:
    Node* mergeTwoLists(Node* A,Node* B)
    {
        if(A==NULL) return B;
        if(B==NULL) return A;

        Node* head = NULL;
        Node* tail = NULL;

        if(A->data < B->data)
        {
            head = tail = A;
            A = A->next;
        }
        else 
        {
            head = tail = B;
            B = B->next;
        }
        while(A!=NULL && B!=NULL)
        {
            if(A->data < B->data)
            {
                tail->next = A;
                tail = A;
                A = A->next;
            }
            else 
            {
                tail->next = B;
                tail = B;
                B = B->next;
            }
        }
        if(A==NULL) tail->next = B;
        if(B==NULL) tail->next = A;
        return head;
    }
};
int main()
{
    insertAtEndA(1);
    insertAtEndA(2);
    insertAtEndA(4);

    insertAtEndB(1);
    insertAtEndB(3);
    insertAtEndB(4);

    Solution s;
    Node* head = s.mergeTwoLists(A,B);
    display(head);
}