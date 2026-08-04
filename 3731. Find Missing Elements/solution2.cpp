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
        int pivot=nums[0];
        for(int i=1;i<nums.size();i++) {
            pivot++;
            if(pivot != nums[i]) {
                int count = nums[i] - pivot;
                while(count>0) {
                    result.push_back(pivot);
                    pivot++;
                    count--;
                }
            }   
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> input = {1,2,4,5};
    vector<int> result = s.findMissingElements(input);
    for(int i=0;i<result.size();i++) cout<<result[i]<<" ";
}