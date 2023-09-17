#include<bits/stdc++.h>
using namespace std;
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
class Solution 
{
    public:
    vector<vector<int>> levelOrderTraversal(TreeNode* root)
    {
        vector<vector<int>> v;
        queue<TreeNode*> q;
        if(root==NULL) return v;
        q.push(root);
        while(!q.empty())
        {
            int count=q.size();
            vector<int> v1;
            while(count>0)
            {
                TreeNode* currNode = q.front();
                q.pop();
                v1.push_back(currNode->data);
                if(currNode->left) q.push(currNode->left);
                if(currNode->right) q.push(currNode->right);
                count--;
            }
            v.push_back(v1);
        }
        return v;
    }
};
int main()
{
    buildTree();
    Solution s; 
    vector<vector<int>> ans = s.levelOrderTraversal(root);
    for(auto i: ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}