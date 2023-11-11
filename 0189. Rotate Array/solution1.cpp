#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& v, int k) {
        int n = v.size();
        k = k % n;
        reverse(v.begin(),v.end()-k);
        reverse(v.end()-k,v.end());
        reverse(v.begin(),v.end());
    }
};

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int k; cin>>k;
    Solution sol;
    sol.rotate(nums,k);
    for(auto i: nums) cout<<i<<" ";
}