#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        int count=1;
        while(count <= s.size()) {
            string a = s.substr(0,1);
            string b = s.substr(1, s.size());
            s = b + a;
            if(s == goal) return true; 
            count++;
        }
        return false;
    }
};

int main() { 
    Solution s;
    if(s.rotateString("bcdea", "abcde")) {
        cout<<"TRUE"<<endl;
    } else {
        cout<<"FALSE"<<endl;
    }
    return 0;
}
