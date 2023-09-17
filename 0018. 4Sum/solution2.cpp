#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    vector<vector<int>> fourSum(vector<int> &nums,int target)
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        vector<vector<int>> output;
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int low = j+1;
                int high = n-1;
                while(low < high)
                {
                    if(nums[low] + nums[high] < newTarget)
                    low++;
                    else if(nums[low] + nums[high] > newTarget)
                    high--;
                    else  
                    {
                        s.insert({nums[i],nums[j],nums[low],nums[high]});
                        low++;
                        high--;
                    }
                }
            }
        }
        for(auto i:s)
        {
            output.push_back(i);
        }
        return output;
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
    vector<vector<int>> ans = sol.fourSum(nums,target);
    for(auto i: ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}