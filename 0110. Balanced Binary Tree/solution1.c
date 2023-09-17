#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct treenode
{
    int data;
    struct treenode* left;
    struct treenode* right;
}TreeNode;

TreeNode* root = NULL;

TreeNode* createNode(int data)
{
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
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
int max(int a,int b)
{
    return a>b?a:b;
}
int height(TreeNode* root)
{
    if(root==NULL) return 0;
    return 1+max(height(root->left),height(root->right));
}
bool isBalanced(TreeNode* root)
{
    if(root==NULL) return true;
    int rh=0,lh=0;
    lh = height(root->left);
    rh = height(root->right);
    if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right)) return true;
    return false;
}
int main()
{
    buildTree();
    if(isBalanced(root)) printf("Balanced");
    else printf("Not balanced");
}