#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v;
        for(auto i: nums)
        v.push_back(i);
        for(auto i: v)
        nums.push_back(i);
        return nums;
    }
};

int main()
{
    vector<int> nums = {1,2,1};
    Solution sol;
    vector<int> result = sol.getConcatenation(nums);
    for(auto i: result) cout<<i<<" ";
}