#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    int maxSubArray(vector<int> &nums)
    {
        int maxValue = INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum = max(nums[i],sum+nums[i]);
            maxValue = max(sum,maxValue);
        }
        return maxValue;
    }
};
int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution s;
    cout<<s.maxSubArray(nums);
}