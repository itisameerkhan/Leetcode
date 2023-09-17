#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxIndex = 0;
        int maxValue = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] > maxValue)
            {
                maxValue = nums[i];
                maxIndex = i;
            }
        }
        return maxIndex;
    }
};

int main()
{
    vector<int> nums = {1,2,3,4,5,6};
    Solution sol;
    cout<<sol.findPeakElement(nums);
}