#include<bits/stdc++.h>
using namespace std;
typedef struct treenode
{
    int data;
    struct treenode* left;
    struct treenode* right;
}TreeNode;

TreeNode* root1 = NULL;
TreeNode* root2 = NULL;

TreeNode* createNode(int data)
{
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void buildTree1()
{
    root1 = createNode(10);
    root1->left = createNode(20);
    root1->right = createNode(30);
    root1->left->left = createNode(40);
    root1->left->right = createNode(50);
    root1->right->left = createNode(60);
    root1->right->right = createNode(70);
}
void buildTree2()
{
    root2 = createNode(10);
    root2->left = createNode(20);
    root2->right = createNode(30);
    root2->left->left = createNode(40);
    root2->left->right = createNode(50);
    root2->right->left = createNode(60);
    root2->right->right = createNode(70);
}
class Solution 
{
    public:
    bool checkTree(TreeNode* root1,TreeNode* root2)
    {
        if(root1==NULL && root2==NULL) return true;
        if(root1 && root2 && root1->data == root2->data) 
        return ( checkTree(root1->left,root2->left) && checkTree(root1->right,root2->right));
        return false;
    }
    bool isSameTree(TreeNode* root1,TreeNode* root2)
    {
        return checkTree(root1,root2);
    }
};
int main()
{
    buildTree1();
    buildTree2();
    Solution s; 
    if(s.isSameTree(root1,root2)) cout<<"TRUE";
    else cout<<"FALSE";
}