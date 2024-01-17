#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        map<int,string> m;
        string temp = "";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                m[s[i]-'0'] = temp;
                temp = "";
            }
            else if(s[i]!=' ')
            temp = temp + s[i];
        }
        string res = "";
        for(auto i: m)
        res = res + i.second + " ";
        res.erase(res.length()-1);
        return res;
    }
};
int main()
{
    string s = "is2 sentence4 This1 a3";
    Solution sol;
    cout<<sol.sortSentence(s);
}