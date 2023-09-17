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
    Node* reverseBetween(Node* head,int left,int right)
    {
        Node* temp = head;
        stack<int> s;
        bool b = false;
        int index=0;
        while(temp != NULL)
        {
            index++;
            if(index==left) b = true;
            if(index==right) 
            {
                s.push(temp->data);
                break;
            }
            if(b)
            {
                s.push(temp->data);
            }
            temp = temp->next;
        }
        b=false;
        temp = head;
        index=0;
        while(temp != NULL)
        {
            index++;
            if(index==left) b=  true;
            if(index==right)
            {
                temp->data = s.top();
                s.pop();
                break;
            }
            if(b)
            {
                temp->data = s.top();
                s.pop();
            }
            temp = temp->next;
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
    int left=2;
    int right = 4;
    Node* ans = s.reverseBetween(head,left,right);
    display(ans);
}