class Solution {
public:
    void insert(TreeNode* root, set<int> &s)
    {
        if(root==NULL) return;
        insert(root->left,s);
        insert(root->right,s);
        s.insert(root->val);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int> s;
        insert(root,s);
        int l=1;
        int ans;
        if(s.size()==1) return -1;
        for(auto i: s)
        {
            ans = i;
            if(l-- == 0) break;
        }
        return ans;
    }
};