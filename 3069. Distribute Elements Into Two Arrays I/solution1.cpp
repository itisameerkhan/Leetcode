#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        vector<int> result;
        for(int i=0;i<nums.size();i++) {
            if(i==0) arr1.push_back(nums[i]);
            else if(i==1) arr2.push_back(nums[i]);
            else if(arr1[arr1.size()-1] > arr2[arr2.size()-1]) arr1.push_back(nums[i]);
            else arr2.push_back(nums[i]);
        }
        for(int i=0;i<arr1.size();i++) result.push_back(arr1[i]);
        for(int i=0;i<arr2.size();i++) result.push_back(arr2[i]);
        return result;
    }
};