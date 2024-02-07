#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> map1, map2;
        vector<int> result;
        for(int i=0;i<nums1.size();i++) map1[nums1[i]]++;
        for(int i=0;i<nums2.size();i++) map2[nums2[i]]++;
        for(auto i: map1) {
            if(map2.find(i.first) != map2.end()) {
                result.push_back(i.first);
            }
        }
        return result;
    }
};
int main()
{
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    Solution sol;
    vector<int> result = sol.intersection(nums1, nums2);
    for(int i: result) cout<<i<<" ";
}