#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int i=0;i<nums1.size();i++) {
            for(int j=0;j<nums2.size();j++) {
                if(nums1[i] == nums2[j]) {
                    if(find(result.begin(), result.end(), nums1[i]) == result.end()) {
                        result.push_back(nums1[i]);
                        break;
                    }
                }
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