#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    vector<vector<string>> groupAnagrams(vector<string> &s)
    {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> m;
        for(int i=0;i<s.size();i++)
        {
            string t = s[i];
            sort(s[i].begin(),s[i].end());
            m[s[i]].push_back(t);
        }
        for(auto i:m)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++) cin>>s[i];
    Solution sol;
    vector<vector<string>> ans = sol.groupAnagrams(s);
    for(auto i: ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}