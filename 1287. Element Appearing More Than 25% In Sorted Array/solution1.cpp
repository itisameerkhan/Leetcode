#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int>& nums) {
        int maxValue = -1;
        int count=1,max=nums[0];
        for(int i=0;i<nums.size()-1;i++) {
            int current = nums[i];
            int next = nums[i+1];
            if(current == next) count++;
            int value = (count*100/nums.size());
            if(value > maxValue) {
                maxValue = value;
                max = nums[i];
            }
            if(current != next) count = 1;
        }
        return max;
    }
};
int main()
{
    vector<int> nums = {1,2,2,6,6,6,6,7,10};
    Solution sol;
    cout<<sol.findSpecialInteger(nums);
}