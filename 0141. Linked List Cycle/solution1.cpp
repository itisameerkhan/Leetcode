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
class Solution {
public:
    bool hasCycle(Node *head) {
        Node *fast, *slow;
        fast = slow = head;
        while(fast != NULL)
        {
            fast = fast->next;
            if(fast != NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
            if(fast == slow)
            return true;
        }
        return false;
    }
};
int main()
{
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);
    insertAtEnd(5);
    Solution sol;
    if(sol.hasCycle(head)) cout<<"TRUE";
    else cout<<"FALSE";
}