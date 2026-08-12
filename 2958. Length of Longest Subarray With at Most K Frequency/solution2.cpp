#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left=0,result=0;
        unordered_map<int, int> map;
        for(int right=0;right<nums.size();right++) {
            map[nums[right]]++;

            while(map[nums[right]] > k) {
                map[nums[left]]--;
                left++;
            }

            result = max(result, right - left + 1);
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,2,2};
    int k = 1;
    cout<<s.maxSubarrayLength(nums, k);
}