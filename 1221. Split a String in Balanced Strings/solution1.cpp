#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0,l=0,result=0;
        for(int i=0;i<s.size();i++) {
            if(s[i] == 'R') r++;
            else l++;
            if(r==l && r!=0 && l!=0) {
                result++;
                r=0;
                l=0;
            }
        }
        return result;
    }
};

int main() {
    string s = "RLRLRRLL",
    Solution s = new Solution();
    cout<<s.balancedString(s);
}