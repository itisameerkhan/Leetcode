#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    vector<vector<int>> fourSum(vector<int> &nums,int target)
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> output;
        map<vector<int>,int> m;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int start = j+1;
                int end = nums.size()-1;

                while(start < end)
                {
                    long long currentSum = nums[start] + nums[end] + nums[i] + nums[j];
                    if(currentSum == target)
                    {
                        vector<int> ans;
                        ans.push_back(nums[i]);
                        ans.push_back(nums[j]);
                        ans.push_back(nums[start]);
                        ans.push_back(nums[end]);
                        if(m[ans]==0)
                        {
                            m[ans] = 1;
                            output.push_back(ans);
                        }
                        start++;
                    }
                    else if(currentSum < target) 
                    start++;
                    else  
                    end--;
                }
            }
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

