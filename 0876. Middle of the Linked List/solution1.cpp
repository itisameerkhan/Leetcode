class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        typedef ListNode Node;
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
        }
        return slow;
    }
};