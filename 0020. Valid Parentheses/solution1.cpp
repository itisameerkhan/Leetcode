#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    bool isValid(string s)
    {
        stack<int> p;
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                p.push(s[i]);
            }
            else 
            {
                if(p.empty()) return false;
                else if(s[i]==')')
                {
                    if(p.top()=='(')
                    {
                        p.pop();
                    }
                    else return false;
                }
                else if(s[i]=='}')
                {
                    if(p.top()=='{')
                    {
                        p.pop();
                    }
                    else return false;
                }
                else if(s[i]==']')
                {
                    if(p.top()=='[')
                    {
                        p.pop();
                    }
                    else return false;
                }
                else return false;
            }
        }
        if(p.empty()) return true;
        return false;
    }
};
int main()
{
    Solution s;
    string x = "()[]{}";
    cout<<s.isValid(x);
}