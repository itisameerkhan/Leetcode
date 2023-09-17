#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string s)
    {
        vector<string> v;
        string t = "";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                v.push_back(t);
                t = "";
            }
            else t = t + s[i];
        }
        v.push_back(t);
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(pattern[i]==pattern[j] && v[i]!=v[j]) return false;
                else if(pattern[i]==pattern[j] && v[i]==v[j]) v[j] = "";
            }
            v[i] = "";
        }
        return true;
    }
};
int main()
{
    string s = "dog dog dog dog";
    string pattern = "abba";
    Solution sol;
    cout<<sol.wordPattern(pattern,s);
}