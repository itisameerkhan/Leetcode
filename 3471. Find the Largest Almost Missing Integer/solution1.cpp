#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int start=0;
        int end = nums.size() - 1;
        int count=1;
        int result=-1;
        unordered_map<int, int> map;
        if(k==1) {
            for(int i=0;i<nums.size();i++) {
                map[nums[i]]++;
            }
            for(auto it: map) {
                if(it.second == 1) {
                    result = max(result, it.first);
                }
            }
            return result;
        }
        if(nums.size() == k) {
            for(int i=0;i<nums.size();i++) {
                result = max(result, nums[i]);
            }
            return result;
        }
        while(start <= end) {
            map[nums[start]] += count;
            map[nums[end]] += count;
            count++;
            start++;
            end--;
        }
        for(auto it: map) {
            if(it.second == 1) {
                result = max(result, it.first);
            }
        }
        return result;
    }
};
int main() {
    vector<int> nums = {2,3,7,4,10,7,4};
    int k = 3;
    Solution s;
    cout<<s.largestInteger(nums, k);
}