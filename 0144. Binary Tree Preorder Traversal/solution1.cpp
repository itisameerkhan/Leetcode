#include<bits/stdc++.h>
#include<stdio.h>
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
    void solve(TreeNode* root,vector<int> &path)
    {
        if(root==NULL) return;
        path.push_back(root->data);
        solve(root->left,path);
        solve(root->right,path);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> path;
        solve(root,path);
        return path;
    }
};
int main()
{
    buildTree();
    Solution sol;
    vector<int> ans = sol.preorderTraversal(root);
    for(auto i:ans) cout<<i<<" ";
}