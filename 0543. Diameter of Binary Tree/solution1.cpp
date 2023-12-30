class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        int diameter = 0;
        dfs(root, diameter);
        return diameter;
    }
    int dfs(TreeNode* node, int& diameter) {
        if (node == NULL) {
            return 0;
        }
        int left = dfs(node->left, diameter);
        int right = dfs(node->right, diameter);
        diameter = max(diameter, left + right);
        return max(left, right) + 1;
    }
};