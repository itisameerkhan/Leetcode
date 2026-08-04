#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) {
            for(int j=0;j<nums.size()-i-1;j++) {
                if(nums[j] > nums[j+1]) {
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
        vector<int> result;
        set<int> s;
        for(int i=nums.size()-1;i>=0;i--) {
            s.insert(nums[i]);
        }
        int pivot=nums[0],i=0;
        while(!s.empty()) {
            if(pivot + i == *s.begin()) s.erase(s.begin());
            else {
                result.push_back(pivot + i);
            }
            i++;
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> input = {1,5,2};
    vector<int> result = s.findMissingElements(input);
    for(int i=0;i<result.size();i++) cout<<result[i]<<" ";
}