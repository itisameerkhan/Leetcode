#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        map[0] = 1;
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++) {
            sum += nums[i];
            int remove = sum - k;
            count += map[remove];
            map[sum]++;
        }
        return count;
    }
};

int main()
{
    vector<int> nums = {1,1,1};
    int k = 2;
    Solution sol;
    cout<<sol.subarraySum(nums,k);
}