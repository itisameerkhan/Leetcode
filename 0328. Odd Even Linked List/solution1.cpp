#include<bits/stdc++.h>
using namespace std;

typedef struct lnode
{
    int val;
    struct lnode* next;
}ListNode;

ListNode* head = NULL;

ListNode* createNode()
{
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(int val)
{
    if(head == NULL)
    {
        ListNode *newNode = createNode();
        newNode->val = val;
        head = newNode;
        return;
    }
    ListNode *newNode = createNode();
    newNode->val = val;
    newNode->next = head;
    head =  newNode;
}
void insertAtEnd(int val)
{
    ListNode* temp = head;
    if(head==NULL)
    {
        insertAtBeginning(val);
        return;
    }
    ListNode* newNode = createNode();
    newNode->val = val;
    while(temp->next != NULL)
    temp = temp->next;

    temp->next = newNode;
}
void display(ListNode* node)
{
    ListNode* temp = node;
    while(temp !=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        vector<int> odd,even;
        ListNode* temp = head;
        bool flag = true;
        while(temp != NULL) {
            if(flag) odd.push_back(temp->val);
            else even.push_back(temp->val);
            flag = !flag;
            temp = temp->next;
        }
        temp = head;
        int index = 0;
        while(index < odd.size()) {
            temp->val = odd[index++];
            temp = temp->next;
        }
        index=0;
        while(index < even.size()) {
            temp->val = even[index++];
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
    Solution sol;
    head = sol.oddEvenList(head);
    display(head);
}