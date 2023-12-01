class Solution {
public:
    int countNodes(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> s;
        TreeNode* currNode = root;
        while(1)
        {
            while(currNode != NULL)
            {
                s.push(currNode);
                currNode = currNode->left;
            }
            if(s.empty()) break;
            TreeNode* temp = s.top();
            s.pop();
            v.push_back(temp->val);
            currNode = temp->right;
        }
        return v.size();
    }
};