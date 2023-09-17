#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        vector<char> freq(255);
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]] = t[i];
        }
        for(int i=0;i<t.size();i++)
        {
            if(freq[s[i]] != t[i]) return false;
        }

        for(int i=0;i<s.size();i++)
        {
            freq[t[i]] = s[i];
        }
        for(int i=0;i<t.size();i++)
        {
            if(freq[t[i]] != s[i]) return false;
        }
        
        return true;
    }
};
int main()
{
    string s,t;
    cin>>s>>t;
    Solution sol;
    if(sol.isIsomorphic(s,t)) cout<<"TRUE";
    else cout<<"FALSE";
}