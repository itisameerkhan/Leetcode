class Solution {
public:
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
        typedef ListNode Node;
        unordered_set<Node*> s;
        while(A != NULL)
        {
            s.insert(A);
            A = A->next;
        }
        while(B != NULL)
        {
            if(s.insert(B).second == false)
            return B;

            B = B->next;
        }
        return NULL;
    }
};
