#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    void func(int index,vector<int> &nums,vector<int> &path,vector<vector<int>> &ans)
    {
        if(index==nums.size())
        {
            ans.push_back(path);
            return;
        }
        path.push_back(nums[index]);
        func(index+1,nums,path,ans);
        path.pop_back();
        func(index+1,nums,path,ans);
    }
    vector<vector<int>> Subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> path;
        func(0,nums,path,ans);
        return ans;
    }
};
int main()
{
    vector<int> nums = {1,2,3};
    Solution s;
    vector<vector<int>> ans = s.Subsets(nums);
    for(auto i: ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}