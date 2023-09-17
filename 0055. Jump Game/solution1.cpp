#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public:
    bool canJump(vector<int> &nums)
    {
        vector<int> v(nums.size(),-1);
        v[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(v[i-1]>0) v[i] = max(v[i-1]-1,nums[i]);
            else v[i]=-1;
        } 
        if(v[nums.size()-1]!=-1) return true;
        return false;
    }
};
int main()
{
    vector<int> v = {2,5,0,0};
    Solution s;
    if(s.canJump(v)) cout<<"TRUE";
    else cout<<"FALSE";
}