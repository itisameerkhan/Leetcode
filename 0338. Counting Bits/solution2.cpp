#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calculateBits(int n) {
        int count = 0;
        while(n) {
            count += n%2;
            n/=2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> result;
        for(int i=0;i<=n;i++) {
            result.push_back(calculateBits(i));
        }
        return result;
    }
};

int main()
{
    int n;
    cin>>n;
    Solution sol;
    vector<int> result = sol.countBits(n);
    for(auto i: result) cout<<i<<" ";
}