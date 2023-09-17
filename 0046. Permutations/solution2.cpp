#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void func(int start,int end,vector<int> &nums,vector<vector<int>> &ans)
    {
        if(start==end)
        {
            ans.push_back(nums);
            return;
        }
        else 
        {
            for(int i=start;i<=end;i++)
            {
                swap(nums[start],nums[i]);
                func(start+1,end,nums,ans);
                swap(nums[start],nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<vector<int>> ans;
        func(0,nums.size()-1,nums,ans);
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = s.permute(nums);
    for(auto i: ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}