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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
        vector<vector<int>> v;
        queue<TreeNode*> q;
        if(root==NULL) return v;
        q.push(root);
        int flag=0;
        while(!q.empty())
        {
            vector<int> v1;
            int count = q.size();
            while(count)
            {
                TreeNode* currNode = q.front();
                q.pop();
                v1.push_back(currNode->data);
                if(currNode->left) q.push(currNode->left);
                if(currNode->right) q.push(currNode->right);
                count--;
            }
            if(flag) reverse(v1.begin(),v1.end());
            v.push_back(v1);
            flag = !flag;
        }
        return v;
    }
};
int main()
{
    Solution s;
    buildTree();
    vector<vector<int>> ans = s.zigzagLevelOrder(root);
    for(auto i:ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}