#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) 
    {
        string result = "";
        int count = 0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i] != '*' && count > 0) 
            {
                count--;
                continue;
            }
            if(s[i] == '*') 
            {
                count++;
                continue;
            }
            else  
            {
                result += s[i];
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
int main()
{
    string s = "leet**cod*e";
    Solution sol;
    cout<<sol.removeStars(s);
}