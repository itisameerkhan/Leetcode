#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto i:m)
        {
            if(i.second==1) return i.first;
        }
        return -1;
    }
};
int main()
{
    vector<int> nums{1,1,1,2,2,2,5};
    Solution sol;
    cout<<sol.singleNumber(nums);
}