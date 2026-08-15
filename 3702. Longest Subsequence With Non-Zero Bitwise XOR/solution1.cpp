#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int result=nums[0];
        int flag=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] != 0) {
                flag=1;
                break;
            }
        }
        if(flag==0) return 0;
        for(int i=1;i<nums.size();i++) result ^= nums[i];
        if(result == 0) return nums.size()  - 1;
        return nums.size();
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3};
    cout<<s.longestSubsequence(nums);
}