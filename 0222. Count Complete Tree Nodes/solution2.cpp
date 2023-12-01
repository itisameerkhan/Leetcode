class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;

        int leftPart = countNodes(root->left);
        int rightPart = countNodes(root->right);
        return leftPart + rightPart + 1;
    }
};