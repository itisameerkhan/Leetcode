#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    int jump(vector<int> &nums)
    {
        for(int i=1;i<nums.size();i++)
        {
            nums[i] = max(nums[i] + i,nums[i-1]);
        }
        int index = 0;
        int ans = 0;

        while(index < nums.size()-1)
        {
            ans++;
            index = nums[index];
        }
        return ans;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    Solution sol;
    cout<<sol.jump(nums);
}