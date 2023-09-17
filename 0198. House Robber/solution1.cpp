#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution 
{
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
};
int main()
{
    vector<int> nums = {1,2,3,4,5};
    Solution s;
    cout<<s.maximumNonAdjacentSum(nums);
}