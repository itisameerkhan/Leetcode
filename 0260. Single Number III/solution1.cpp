#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        for(auto i: m)
        {
            if(i.second==1)
            ans.push_back(i.first);
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> nums{1,2,1,3,2,5};
    vector<int> ans = sol.singleNumber(nums);
    for(auto i: ans) cout<<i<<" ";
}