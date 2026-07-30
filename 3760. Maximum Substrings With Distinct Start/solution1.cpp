#include<bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int maxDistinct(string s) {
        int count=0;
        unordered_map<char, int> mp;
        for(int i=0;i<26;i++) {
            mp['a' + i] = 0;
        }
        for(int i=0;i<s.size();i++) {
            if(mp[s[i]] != 1) {
                mp[s[i]] = 1;
                count++;
            }
        }
        return count;
    }
};

int main() {
    
}