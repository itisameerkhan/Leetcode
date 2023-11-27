class Solution {
public:
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
        typedef ListNode Node;
        stack<Node*> s1;
        stack<Node*> s2;
        Node* temp = NULL;

        while(A != NULL)
        {
            s1.push(A);
            A = A->next;
        }
        while(B != NULL)
        {
            s2.push(B);
            B = B->next;
        }
        while((!s1.empty()) && (!s2.empty()))
        {
            if(s1.top() == s2.top())
            {
                temp = s1.top();
                s1.pop();
                s2.pop();
            }
            else 
            return temp;
        }
        return temp;
    }
};