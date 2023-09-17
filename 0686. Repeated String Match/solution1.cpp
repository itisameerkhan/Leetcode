#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string deleteString(string s,int start,int end)
    {
        for(int i=start;i<end;i++)
        {
            s[i] = '#';
        }
        return s;
    }
    int repeatedStringMatch(string a, string b)
    {
        int count=0;
        int flag = 0;
        for(int i=0;i<=b.size()-a.size();i++)
        {
            string temp = b.substr(i,a.size());
            if(temp == a)
            {
                b = deleteString(b,i,i+a.size());
                flag=1;
                count++;
            }
        }
        if(flag==0) return 0;
        for(int i=0;i<b.size();i++)
        {
            if(b[i] == '#')
            {
                flag=1;
            }
            else if(b[i]!='#' && flag==1)
            {
                count++;
                flag=0;
            }
        }
        return count;
    }
};
int main()
{
    string a = "aaaaaaaaaaaaaaaaaaaaaab";
    string b = "ba";
    Solution sol;
    cout<<sol.repeatedStringMatch(a,b);
}

/*
aaaaaaaaaaaaaaaaaaaaaab
ba
*/