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
    ListNode* sortList(ListNode* head) {
        typedef ListNode Node;
        multiset<int> s;
        Node* temp = head;
        while(temp != NULL)
        {
            s.insert(temp->val);
            temp = temp->next;
        }
        temp = head;
        for(auto i: s)
        {
            temp->val = i;
            temp = temp->next;
        }
        return head;
    }
};

int main() 
{
    insertAtBeginning(4);
    insertAtBeginning(2);
    insertAtBeginning(1);
    insertAtBeginning(3);
    Solution sol;
    sol.sortList(head);
    display();
}