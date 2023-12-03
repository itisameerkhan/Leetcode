#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int threeSumCloset(vector<int> &nums,int target)
    {
        if(nums.size() < 3) {
            return 0;
        }

        int closet = nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
            int k=nums.size()-1;
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum==target)
                {
                    j++;
                    k--;
                }
                if(abs(target-sum) < abs(target-closet))
                {
                    closet = sum;
                }
                if(sum < target)
                {
                    j++;
                }
                else  
                {
                    k--;
                }
            }
        }
        return closet;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int target;
    cin>>target;
    Solution sol;
    cout<<sol.threeSumCloset(nums,target);
}