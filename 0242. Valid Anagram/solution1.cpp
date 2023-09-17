#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int l = s.size();
        int k = t.size();
        if(l!=k) return false;
        for(int i=0;i<l;i++)
        {
            if(s[i]!=t[i]) return false;
        }
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