#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void leftLeavesSum(TreeNode* root,bool isleft,int &sum)
    {
        if(root==NULL) return;
        if(!root->left && !root->right && isleft) sum+=root->val;
        leftLeavesSum(root->left,1,sum);
        leftLeavesSum(root->right,0,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        leftLeavesSum(root,0,sum);
        return sum;
    }
};
