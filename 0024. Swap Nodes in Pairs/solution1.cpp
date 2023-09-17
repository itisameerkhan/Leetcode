#include<bits/stdc++.h>
using namespace std;

typedef struct lnode 
{
    int data;
    struct lnode* next;
}ListNode;

ListNode* head = NULL;

ListNode* createNode(int data)
{
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->data = data;
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
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

class Solution 
{
    public:
    ListNode* swapPairs(ListNode* head)
    {
        if(!head || !head->next) return head;

        ListNode* tempNode = new ListNode();

        ListNode* prevNode = tempNode;
        ListNode* currNode = head;

        while(currNode && currNode->next)
        {
            prevNode->next = currNode->next;
            currNode->next = prevNode->next->next;
            prevNode->next->next = currNode;

            prevNode = currNode;
            currNode = currNode->next;
        }
        return tempNode;
    }
};
int main()
{
    insertAtBeginning(4);
    insertAtBeginning(3);
    insertAtBeginning(2);
    insertAtBeginning(1);
    Solution sol;
    display();
    cout<<endl;
    sol.swapPairs(head);
    display();
}