/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head){
    typedef struct ListNode Node;
    Node *temp = head;
    int index=0;
    while(temp != NULL)
    {
        index++;
        temp = temp->next;
    }
    temp = head;
    long long int decimal = 0;
    while(temp != NULL)
    {
        decimal = decimal + (temp->val * pow(2,--index));
        temp = temp->next;
    }
    return decimal;
}