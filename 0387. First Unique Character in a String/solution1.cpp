#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> map;
        for(int i=0;i<s.size();i++) {
            map[s[i]]++;
        }
        for(int i=0;i<s.size();i++) {
            if(map[s[i]] == 1) return i;
        }
        return -1;
    }
};

int main()
{
    string s = "leetcode";
    Solution sol;
    cout<<sol.firstUniqChar(s);
}