#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;
        for(int i=1;i<=9;i++) {
            int num = i;
            int nextDigit = i + 1;
            while(num <= high && nextDigit <= 9 ) {
                num = num*10 + nextDigit;
                nextDigit++;
                if(low <= num && num<=high) result.push_back(num);
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
};
int main()
{
    int low = 100, high = 300;
    Solution sol;
    vector<int> result = sol.sequentialDigits(low, high);
    for(auto i: result) cout<<i<<" ";
}