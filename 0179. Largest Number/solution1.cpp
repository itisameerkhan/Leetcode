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
        int index=0;
        while(index < nums.size() && nums[index] == 0) index++;
        while(index < nums.size()) {
            result += to_string(nums[index]);
            index++;
        }
        if(result=="") return "0";
        return result; 
    }
};
int main()
{
    vector<int> nums = {3,30,34,5,9};
    Solution sol;
    cout<<sol.largestNumber(nums);
}