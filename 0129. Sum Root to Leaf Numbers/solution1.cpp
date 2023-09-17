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
    int sumNumbers(TreeNode* root, int initVal = 0) {
        if(root == nullptr) return 0;
        if(root->left == nullptr && root->right == nullptr){
            //leaf node
            return initVal + root->data;
        }
        
        //non-leaf node
        //accumulate the score from left and right subtrees
        int sum = 0;
        sum += sumNumbers(root->left, (initVal+root->data)*10) + sumNumbers(root->right, (initVal+root->data)*10);
        
        return sum;
    }
};
int main()
{
    buildTree();
    Solution sol;
    cout<<sol.sumNumbers(root);
}