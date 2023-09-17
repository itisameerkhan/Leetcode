#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void solve(string digits,string output,int index,vector<string> &ans,string mapping[])
    {
        if(index >= digits.length())
        {
            ans.push_back(output);
            return;
        }
        int number = digits[index] - '0';
        string value = mapping[number];
        for(int i=0;i<value.length();i++)
        {
            output.push_back(value[i]);
            solve(digits,output,index+1,ans,mapping);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if(digits.length()==0) return ans;

        string output = "";
        int index=0;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,index,ans,mapping);
        return ans;
    }
};
int main()
{
    string s;
    cin>>s;
    Solution sol;
    vector<string> ans = sol.letterCombinations(s);
    for(auto i: ans) cout<<i<<endl;
}