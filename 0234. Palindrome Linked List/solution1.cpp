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
    bool isPalindrome(ListNode* head) {
        ListNode *temp = head;
        stack<int> s;
        while(temp != NULL)
        {
            s.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(temp != NULL)
        {
            if(s.top() != temp->val) return false;
            temp = temp->next;
            s.pop();
        }
        return true;
    }
};

int main() 
{
    insertAtBeginning(1);
    insertAtBeginning(2);
    insertAtBeginning(2);
    insertAtBeginning(1);
    Solution sol;
    if(sol.isPalindrome(head)) cout<<"TRUE";
    else cout<<"FALSE";
}