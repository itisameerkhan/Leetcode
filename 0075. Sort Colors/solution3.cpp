#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;
        while(mid <= high) {
            if(nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            } else if(nums[mid] == 1) {
                mid++;
            } else if(nums[mid] == 2) {
                swap(nums[mid], nums[high]);
                high--;
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
2ms
Beats 42.54%of users with C++
Memory
Details
8.54MB
Beats 59.69%of users with C++

Time complexity -> O(N)
Space Complexity -> O(1)
*/