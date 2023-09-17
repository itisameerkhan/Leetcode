#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map<char,int> m;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++)  m[s[i]]++;
        for(int i=0;i<t.size();i++) m[t[i]]--;
        for(auto i: m) if(i.second < 0 || i.second > 0) return false;
        return true;
    }
};
int main()
{
    string s = "anagram";
    string t = "nagaram";
    Solution sol;
    if(sol.isAnagram(s,t)) cout<<"TRUE";
    else cout<<"FALSE";
}