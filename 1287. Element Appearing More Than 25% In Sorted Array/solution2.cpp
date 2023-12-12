#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++) {
            map[nums[i]]++;
        }
        int maxValue=0,result=0;
        for(auto i: map) {
            if(i.second > maxValue) {
                maxValue = i.second;
                result = i.first;
            }
        }
        return result;
    }
};
int main()
{
    vector<int> nums = {1,2,2,6,6,6,6,7,10};
    Solution sol;
    cout<<sol.findSpecialInteger(nums);
}