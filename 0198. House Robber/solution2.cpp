#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution 
{
    public:
    int rec(vector<int> &nums,int index,vector<int> &dp)
    {
        if(index==0) return nums[index];
        if(index<0) return 0;
        
        if(dp[index]!=-1) return dp[index];

        int pick = nums[index] + rec(nums,index-2,dp);
        int notpick = 0 + rec(nums,index-1,dp);
        dp[index] = max(pick,notpick);
        return dp[index];
    }
    int maximumNonAdjacentSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n,-1);
        return rec(nums,n-1,dp);
    }
};
int main()
{
    vector<int> nums = {1,2,3,4,5};
    Solution s;
    cout<<s.maximumNonAdjacentSum(nums);
}