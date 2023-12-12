#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currentMax = nums[0];
        int secondMax = 0;
        for(int i=1;i<nums.size();i++) {
            if(nums[i] >= currentMax) {
                secondMax = currentMax;
                currentMax = nums[i];
            } else if(nums[i] >= secondMax) {
                secondMax = nums[i];
            }
        }
        return (currentMax - 1) * (secondMax - 1);
    }
};

int main()
{
    vector<int> nums = {3,4,5,2};
    Solution sol;
    cout<<sol.maxProduct(nums);
}

/*
Runtime
7
ms
Beats
38.88%
of users with C++


Memory
10.34
MB
Beats
38.51%
of users with C++
*/