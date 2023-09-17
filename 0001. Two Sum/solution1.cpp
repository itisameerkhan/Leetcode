#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    vector<int> twoSum(vector<int> &nums,int target)
    {
        int n = nums.size();
        int k;
        vector<int> v;
        unordered_map<int,int> m;
        if(n==0) return v;
        for(int i=0;i<n;i++)
        {
            k = target - nums[i];
            if(m.count(k))
            {
                v.push_back(m[k]);
                v.push_back(i);
                return v;
            } 
            m[nums[i]] = i;
        }
        return v;
    }
};
int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 9;
    Solution s;
    vector<int> ans = s.twoSum(nums,target);
    cout<<ans[0]<<" "<<ans[1];
}