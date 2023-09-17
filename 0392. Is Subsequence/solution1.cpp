#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0) return true;
        if(s.size() == 1 && t.size() == 1)
        {
            if(s[0] == t[0]) return true;
            else return false;
        }
        int index = 0;
        for(int i=0;i<t.size();i++)
        {
            if(t[i] == s[index])
            {
                index++;
            }
            if(index == s.size()) return true;
        }
        return false;
    }
};

int main()
{
    string s = "acb";
    string t = "ahbgdc";
    Solution sol;
    if(sol.isSubsequence(s,t)) cout<<"TRUE";
    else cout<<"FALSE";
}