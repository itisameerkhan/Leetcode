#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    vector<vector<int>> fourSum(vector<int> &nums,int target)
    {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        vector<vector<int>> output;
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                for(int k=j+1;k<n-1;k++)
                {
                    for(int l=k+1;l<n;l++)
                    {
                        if(nums[i] + nums[j] + nums[k] + nums[l] == target)
                        {
                            s.insert({nums[i],nums[j],nums[k],nums[l]});
                        }
                    }
                }
            }
        }
        for(auto i:s)
        {
            output.push_back(i);
        }
        return output;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int target;
    cin>>target;
    Solution sol;
    vector<vector<int>> ans = sol.fourSum(nums,target);
    for(auto i: ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}