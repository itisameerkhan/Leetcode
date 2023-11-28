#include<bits/stdc++.h>
using namespace std;

typedef struct lnode 
{
    int val;
    struct lnode* next;
}ListNode;

ListNode* head = NULL;

ListNode* createNode(int data)
{
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(int data)
{
    if(head==NULL)
    {
        head = createNode(data);
        return;
    }
    ListNode* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

void display()
{
    ListNode* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        typedef ListNode Node;
        if(head==NULL) return head;
        if(head->val == val) 
        {
            Node* temp = head->next;
            delete(head);
            return removeElements(temp,val);
        }
        head->next = removeElements(head->next,val);
        return head;
    }
};

int main() 
{
    /*[1,2,6,3,4,5,6]*/
    insertAtBeginning(6);
    insertAtBeginning(5);
    insertAtBeginning(4);
    insertAtBeginning(3);
    insertAtBeginning(6);
    insertAtBeginning(2);
    insertAtBeginning(1);
    // display();
    int val = 6;
    Solution sol;
    sol.removeElements(head, val);
    display();
}