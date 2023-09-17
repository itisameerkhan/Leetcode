#include<bits/stdc++.h>
using namespace std;

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
void display(Node* node)
{
    Node* temp = node;
    while(temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
class Solution 
{
    public:
    Node* rotateRight(Node* head,int k)
    {
        if(head==NULL || head->next == NULL) return head;
        Node* temp = head;
        Node* prev;
        if(k==0) return head;
        while(k%10==0 && k>100)
        {
            k/=10;
        }
        while(k--)
        {
            while(temp->next != NULL)
            {
                prev = temp;
                temp = temp->next;
            }
            temp->next = head;
            head = temp;
            prev->next = NULL;
        }
        return head;
    }
};
int main()
{
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);
    insertAtEnd(5);
    Solution s;
    Node* ans = s.rotateRight(head,2);
    display(ans);
}