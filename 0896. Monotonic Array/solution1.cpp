#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int increase=1,decrease=1, prev = nums[0];
        for(int i=1;i<nums.size();i++) {
            if(prev < nums[i]) {
                increase++;
                prev = nums[i];
            }
            else if(prev > nums[i]){
                decrease++;
                prev = nums[i];
            }
            else {
                increase++;
                decrease++;
                prev = nums[i];
            }
        }
        return increase == nums.size() || decrease == nums.size();
    }
};
int main()
{
    vector<int> nums = {1,3,2};
    Solution sol;
    if(sol.isMonotonic(nums)) cout<<"TRUE";
    else cout<<"FALSE";
}