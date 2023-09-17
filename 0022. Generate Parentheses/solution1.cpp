#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void solve(string output,int open,int close,vector<string> &ans)
    {
        if(open==0 && close==0)
        {
            ans.push_back(output);
            return;
        }
        if(open == close)
        {
            string output1 = output;
            output1.push_back('(');
            solve(output1,open-1,close,ans);
        }
        else if(open == 0)
        {
            string output1 = output;
            output1.push_back(')');
            solve(output1,open,close-1,ans);
        }
        else if(close == 0)
        {
            string output1 = output;
            output1.push_back('(');
            solve(output1,open-1,close,ans);
        }
        else  
        {
            string output1 = output;
            string output2 = output;
            output1.push_back('(');
            output2.push_back(')');
            solve(output1,open-1,close,ans);
            solve(output2,open,close-1,ans);
        }
    }
    vector<string> generateParentheses(int n)
    {
        int open = n;
        int close = n;
        vector<string> ans;
        string output = "";
        solve(output,open,close,ans);
        return ans;
    }
};
int main()
{
    int n;
    cin>>n;
    Solution sol;
    vector<string> ans = sol.generateParentheses(n);
    for(auto i: ans) cout<<i<<endl;
}