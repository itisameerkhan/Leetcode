#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countBits(int num) {
        // cout<<"count bits function called";
        int count = 0;
        while(num) {
            count += num & 1;
            num >>= 1;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> countedBits;
        vector<int> result;
        sort(arr.begin(), arr.end());
        for(int i=0;i<arr.size();i++) {
            countedBits.push_back(countBits(arr[i]));
        }
        for(auto i: countedBits) cout<<"counted bits -> "<<i<<" ";
        cout<<endl;
        int value = 0;
        while(result.size() != arr.size()) {
            for(int j=0;j<arr.size();j++) {
                if(countedBits[j] == value) result.push_back(arr[j]);
            }
            value++;
        }
        return result;
    }
};

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++) cin>>arr[i];
    Solution sol;
    vector<int> result = sol.sortByBits(arr);
    for(auto i: result) cout<<i<<" ";
}