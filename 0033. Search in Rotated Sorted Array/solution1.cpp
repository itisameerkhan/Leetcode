#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == target) return i;
        }
        return -1;
    }
};

int main()
{
   vector<int> nums = {4,5,6,7,0,1,2};
   int target = 0;
   Solution sol;
   cout<<sol.search(nums,target);
}