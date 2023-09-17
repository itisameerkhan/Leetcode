#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    int shuffled_string(string s)
    {
        vector<string> num = {"one","zero","two","three","four","five","six","seven","eight","nine","ten"};
        map<char,int> m;
        for(int i=0;i<s.size();i++) m[s[i]]++;
        for(int i=0;i<num.size();i++)
        {
            for(int j=0;j<num[i].size();j++)
            {
                char c1 = num[i][j];
                char c2 = 
            }
        }
    }
};
int main()
{
    int t;
    cin>>t;
    Solution sol;
    while(t--)
    {
        string s;
        cin>>s;
        int ans = sol.shuffled_string(s);
        cout<<ans<<endl;
    }
}