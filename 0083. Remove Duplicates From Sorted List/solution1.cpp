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
void display(Node* head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
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
class Solution 
{
    public:
    Node* deleteDuplicates(Node* head)
    {
        Node* temp = head;
        if(temp == NULL) return NULL;
        set<int> s;
        while(temp != NULL)
        {
            s.insert(temp->data);
            temp = temp->next;
        }
        temp = head;
        int count=0;
        for(auto i:s)
        {
            temp->data = i;
            if(s.size() == ++count) break;
            temp = temp->next;
        }
        temp->next = NULL;
        return head;
    }
};
int main()
{
    insertAtEnd(1);
    insertAtEnd(1);
    insertAtEnd(2);

    Solution s;
    Node* ans = s.deleteDuplicates(head);
    display(ans);
}