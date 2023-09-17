#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void findCombinations(int index,vector<int> &candidates,int target,vector<vector<int>> &ans,vector<int> &ds)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=index;i<candidates.size();i++)
        {
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if(candidates[i] > target) break;
            ds.push_back(candidates[i]);
            findCombinations(i+1,candidates,target-candidates[i],ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findCombinations(0,candidates,target,ans,ds);
        return ans;
    }
};
int main()
{
    vector<int> candidates = {2,5,2,1,2};
    int target = 5;
    Solution s;
    vector<vector<int>> ans = s.combinationSum2(candidates,target);
    for(auto i: ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}