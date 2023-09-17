#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m;
        int j=-1;
        while(i<m+n)
        {
            nums1[i++] = nums2[++j];
        }
        sort(nums1.begin(),nums1.end());
    }
};
int main()
{
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;
    Solution sol;
    sol.merge(nums1,m,nums2,n);
    for(auto i: nums1) cout<<i<<" ";
}