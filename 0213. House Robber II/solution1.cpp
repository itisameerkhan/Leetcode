#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumNonAdjacentSum(vector<int> &nums)
    {
        int n = nums.size();
        int prev = nums[0];
        int prev2 = 0;
        for(int i=1;i<n;i++)
        {
            int take = nums[i];
            if(i>1) 
            take += prev2;

            int notTake = prev;

            int curIndex  = max(take,notTake);
            prev2 = prev;
            prev = curIndex;
        }
        return prev;
    }
    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> arr1,arr2;
        for(int i=0;i<n;i++)
        {
            if(i!=0) arr1.push_back(nums[i]);
            if(i!=n-1) arr2.push_back(nums[i]);
        }
        return max(maximumNonAdjacentSum(arr1),maximumNonAdjacentSum(arr2));
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2,3,2};
    cout<<s.rob(nums);
}