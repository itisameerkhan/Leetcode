class Solution {
public:
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
        typedef ListNode Node;
        Node *tempA,*tempB;
        tempA = A;
        tempB = B;
        while(tempA != NULL)
        {
            tempB = B;
            while(tempB != NULL)
            {
                if(tempA == tempB)
                return tempA;

                tempB = tempB->next;
            }
            tempA = tempA->next;
        }
        return NULL;
    }
};