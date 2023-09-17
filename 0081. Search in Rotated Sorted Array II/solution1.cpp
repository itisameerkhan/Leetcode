#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            if(target == nums[i]) return true;
        }
        return false;
    }
};
int main()
{
    vector<int> nums = {2,5,6,0,0,1,2};
    int target = 0;
    Solution sol;
    cout<<sol.search(nums,target);
}