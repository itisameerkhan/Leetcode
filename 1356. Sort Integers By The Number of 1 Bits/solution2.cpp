#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static int countBits(int num) {
        int count = 0;
        while(num) {
            count += num & 1;
            num >>= 1;
        }
        return count;
    }
    static bool compare(int a, int b) {
        int countA = countBits(a);
        int countB = countBits(b);

        if(countA == countB) return a < b;

        return countA < countB;

    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(), compare);
        return arr;
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