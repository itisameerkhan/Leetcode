#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0,count1=0,count2=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==0) count0++;
            else if(nums[i]==1) count1++;
            else if(nums[i]==2) count2++;
        } 
        int index=0;
        while(index < nums.size()) {
            if(count0 != 0) {
                nums[index++] = 0;
                count0--;
            } 
            else if(count1 != 0) {
                nums[index++] = 1;
                count1--;
            } 
            else if(count2 != 0) {
                nums[index++] = 2;
                count2--;
            } 
        }
    }
};

int main() 
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    Solution sol;
    sol.sortColors(nums);
    for(auto i: nums) cout<<i<<" ";
}

/*
Runtime
Details
4ms
Beats 33.34%of users with C++
Memory
Details
8.62MB
Beats 27.53%of users with C++

Time complexity -> O(2N) -> O(N)
Space Complexity -> O(N)
*/