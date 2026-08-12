#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left=0,right=1;
        int result=0;
        if(nums.size() <= 1) return 1;
        if(nums.size() == 2) {
            if(nums[0] == nums[1]) return 1;
        }
        unordered_map<int, int> mp;
        mp[nums[left]]++;
        mp[nums[right]]++;
        result = right - left + 1;

        while(right < nums.size()-1 && left < nums.size()-1) {
            if(mp[nums[left]] > k) {
                mp[nums[left]]--;
                left++;
            } else if(mp[nums[right]] > k) {
                mp[nums[left]]--;
                left++;
            } else {
                right++;
                mp[nums[right]]++;
            }
            while(mp[nums[left]] > k || mp[nums[right]] > k) {
                mp[nums[left]]--;
                left++;
            }
            if(right - left + 1 > result) result = right - left + 1;
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