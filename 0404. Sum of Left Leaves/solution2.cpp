class Solution {
public:
    int sum=0;
    void findLeftLeaves(TreeNode* root,bool isLeft)
    {
        if(root==NULL) return;
        if(isLeft && root->left==NULL && root->right==NULL)
        {
            sum += root->val;
        }
        findLeftLeaves(root->left,true);
        findLeftLeaves(root->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;
        findLeftLeaves(root,false);
        return sum;
    }
};