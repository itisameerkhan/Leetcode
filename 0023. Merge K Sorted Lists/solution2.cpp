#include<bits/stdc++.h>
using namespace std;

typedef struct lnode
{
    int data;
    struct lnode* next;
}Node;

Node* A = NULL;
Node* B = NULL;
Node* C = NULL;

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
void insertAtBeginningC(int val)
{
    if(C == NULL)
    {
        Node *newNode = createNode();
        newNode->data = val;
        C = newNode;
        return;
    }
    Node *newNode = createNode();
    newNode->data = val;
    newNode->next = C;
    C =  newNode;
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
void insertAtEndC(int val)
{
    Node* temp = C;
    if(C==NULL)
    {
        insertAtBeginningC(val);
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
    Node* mergeNodes(Node* B,Node* A)
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
    Node* mergeKLists(vector<Node*> Nodes)
    {
        Node* head = NULL;
        for(auto NodeIterator: Nodes)
        {
            head = mergeNodes(head,NodeIterator);
        }
        return head;
    }
};
int main()
{
    insertAtEndA(1);
    insertAtEndA(4);
    insertAtEndA(5);

    insertAtEndB(1);
    insertAtEndB(3);
    insertAtEndB(4);

    insertAtEndC(2);
    insertAtEndC(6);

    Solution s;
    vector<Node*> Nodes = {A,B,C};
    Node* ans = s.mergeKLists(Nodes);
    display(ans);

}