#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxValue = 0;
        for(int i=0;i<nums.size()-1;i++) {
            for(int j=i+1;j<nums.size();j++) {
                int temp = (nums[i] - 1) * (nums[j] - 1);
                if(temp > maxValue) maxValue = temp;
            }
        }
        return maxValue;
    }
};

int main()
{
    vector<int> nums = {3,4,5,2};
    Solution sol;
    cout<<sol.maxProduct(nums);
}