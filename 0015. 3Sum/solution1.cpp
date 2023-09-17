#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int target=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int j = i+1;
            int k = nums.size()-1;
            while(j < k)
            {
                sum = nums[i]+nums[j]+nums[k];
                if(sum==target)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    //cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                    k--;
                    j++;
                }
                else if(sum < target)
                {
                    j++;
                }
                else 
                {
                    k--;
                }
            }
        }
        for(auto i: s)
        {
            ans.push_back(i);
        }
        return ans;
    }
};
int main()
{
    int n;    
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        nums.push_back(t);
    }
    Solution sol;
    vector<vector<int>> ans = sol.threeSum(nums);
    for(auto i: ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    } 
}