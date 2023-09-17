#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    void func(int index,vector<int> &nums,vector<int> &path,vector<vector<int>> &ans)
    {
        ans.push_back(path);
        for(int i=index;i<nums.size();i++)
        {
            if(i!=index && nums[i]==nums[i-1]) 
            continue;
            path.push_back(nums[i]);
            func(i+1,nums,path,ans);
            path.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> path;
        func(0,nums,path,ans);
        return ans;
    }
};
int main()
{
    vector<int> nums = {1,2,2};
    Solution s;
    vector<vector<int>> ans = s.subsetsWithDup(nums);
    for(auto i: ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}