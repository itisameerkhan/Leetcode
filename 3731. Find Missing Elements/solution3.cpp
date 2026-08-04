#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min=INT_MAX,max=INT_MIN;
        for(int x: nums) {
            if(x < min) min = x;
            if(x > max) max = x;
        }
        vector<bool> present(max-min+1, false);
        int it=0;
        for(int i: nums) present[i-min] =  true;
        vector<int> result;
        for(int i=0;i<=max-min;i++) {
            if(!present[i]) result.push_back(min + i);
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> input = {5,1};
    vector<int> result = s.findMissingElements(input);
    for(int i=0;i<result.size();i++) cout<<result[i]<<" ";
}