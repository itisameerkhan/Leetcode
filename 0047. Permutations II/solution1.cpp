#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findPermutation(vector<int> &nums,int start,int end,vector<vector<int>> &output)
    {
        if(start == end)
        {
            output.push_back(nums);
            return;
        }
        for(int i=start;i<=end;i++)
        {
            swap(nums[start],nums[i]);
            findPermutation(nums,start+1,end,output);
            swap(nums[start],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<vector<int>> output;
        findPermutation(nums,0,nums.size()-1,output);
        set<vector<int>> outputSet;
        for(auto i: output)
        {
            vector<int> temp;
            for(auto j: i)
            {
                temp.push_back(j);
            }
            outputSet.insert(temp);
        }
        vector<vector<int>> result;
        for(auto i: outputSet)
        {
            vector<int> t;
            for(auto j: i)
            {
                t.push_back(j);
            }
            result.push_back(t);
        }
        return result;
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {1,1,2};
    vector<vector<int>> result = sol.permuteUnique(nums);
    for(auto i:  result)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}