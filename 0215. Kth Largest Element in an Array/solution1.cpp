#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q(nums.begin(),nums.end());
        while(k > 1)
        {
            q.pop();
            k--;
        }
        return q.top();
    }
};

int main()
{
    vector<int> nums = {3,2,1,5,6,4}; 
    int k = 2;
    Solution sol;
    cout<<sol.findKthLargest(nums,k);
}