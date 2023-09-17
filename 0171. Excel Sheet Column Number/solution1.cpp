#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) 
    {
        int sum=0;
        int p=s.size()-1;
        if(s.size() <= 1)
        {
            return (int)(s[0]-64);
        }
        for(int i=0;i<s.size();i++)
        {
            sum += (int)(s[i]-64) * pow(26,p--);
        }
        return sum;
    }
};
int main()
{
    string s;
    cin>>s;
    Solution sol;
    int ans = sol.titleToNumber(s);
    cout<<ans;
}