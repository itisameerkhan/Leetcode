#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    static bool compare(int a, int b) 
    {
        return to_string(a) + to_string(b) > to_string(b) + to_string(a);
    }
    string largestNumber(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end(), compare);
        string result = "";
        for(int i=0;i<nums.size();i++) result += to_string(nums[i]);
        if(nums[0]==0) return "0";
        return result;
    }
};
int main()
{
    vector<int> nums = {3,30,34,5,9};
    Solution sol;
    cout<<sol.largestNumber(nums);
}