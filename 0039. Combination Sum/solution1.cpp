#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void findCombinations(int index,vector<int> &candidates,int target,vector<vector<int>> &ans,vector<int> &v)
    {
        if(index==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(v);
            }
            return;
        }
        if(candidates[index]<=target)
        {
            v.push_back(candidates[index]);
            findCombinations(index,candidates,target-candidates[index],ans,v);
            v.pop_back();
        }
        findCombinations(index+1,candidates,target,ans,v);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans;
        vector<int> v;
        findCombinations(0,candidates,target,ans,v);
        return ans;
    }
};
int main()
{
    vector<int> candidates = {2,3,6,7};
    int target = 7;
    Solution s;
    vector<vector<int>> ans = s.combinationSum(candidates,target);
    for(auto i: ans)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}