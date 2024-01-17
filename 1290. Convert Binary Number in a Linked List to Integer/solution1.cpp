/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        typedef ListNode Node;
        Node *temp  = head;
        long long int decimal = 0;
        int i=-1;
        stack<int> s;
        while(temp != NULL)
        {
            s.push(temp->val);
            temp = temp->next;
        }
        while(!s.empty())
        {
            decimal = decimal + (s.top() * pow(2,++i));
            s.pop();
        }
        return decimal;
    }
};