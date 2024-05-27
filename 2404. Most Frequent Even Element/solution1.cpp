#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> m;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] % 2 == 0) {
                m[nums[i]]++;
            }
        }
        int result = -1;
        int resultValue = -1;
        for(auto i: m) {
            if(i.second > resultValue) {
                result = i.first;
                resultValue = i.second;
            }
          cout<<"result: "<<result<<endl; 
        }
        return result;
    }
};
int main() {
    int n = 10;
    vector<int> nums = {0,1,2,0,0,0,2,4,4,1};
    Solution sol;
    cout<<sol.mostFrequentEven(nums);
}