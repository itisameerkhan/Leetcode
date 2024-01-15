#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        multiset<int> m;
        for(auto i: nums)
        m.insert(i*i);

        vector<int> v;
        for(auto i: m)
        v.push_back(i);

        return v;
    }
};

int main()
{
    vector<int> nums = {-4,-1,0,3,10};
    Solution sol;
    vector<int> result = sol.sortedSquares(nums);
    for(auto i: result) cout<<i<<" ";
}