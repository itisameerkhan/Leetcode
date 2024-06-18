#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++) map[nums[i]]++;
        for(auto i: map) {
            if(i.second == 1) return i.first; 
        }
        return -1;
    }
};
int main() {
    vector<int> nums = {1,1,2,3,3,4,4,5,5};
    Solution sol;
    cout<<sol.singleNonDuplicate(nums);
}