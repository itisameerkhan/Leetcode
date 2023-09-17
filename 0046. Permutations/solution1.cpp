#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void recursion(vector<int> &ds,vector<int> &nums,vector<vector<int>> &ans,vector<int> &visited)
    {
        if(ds.size()==nums.size()) 
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(!visited[i])
            {
                ds.push_back(nums[i]);
                visited[i] = 1;
                recursion(ds,nums,ans,visited);
                visited[i] = 0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permutation(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> visited(nums.size(),0);
        recursion(ds,nums,ans,visited);
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = s.permutation(nums);
    for(auto i: ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}