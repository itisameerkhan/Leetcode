#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}TreeNode;
TreeNode *root = NULL;


TreeNode* createNode(int data)
{
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
void buildTree()
{
    root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->right->left = createNode(60);
    root->right->right = createNode(70);
}

class Solution {
public:
    bool isMirror(TreeNode* root1,TreeNode* root2)
    {
        if(!root1 && !root2) return true;
        if(root1 && root2 && root1->data == root2->data)
        return isMirror(root1->left,root2->right) && isMirror(root1->right,root2->left);
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return isMirror(root->left,root->right);
    }
};
int main()
{
    buildTree();
    Solution sol;
    if(sol.isSymmetric(root)) cout<<"TRUE";
    else cout<<"FALSE";
}