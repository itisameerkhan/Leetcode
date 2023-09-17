#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    vector<vector<string>> groupAnagrams(vector<string> &s)
    {
        vector<vector<string>> ans;
        vector<string> temp;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            string t = s[i];
            sort(t.begin(),t.end());
            temp.push_back(t);
        }
        for(int i=0;i<s.size();i++)
        {
            vector<string> vec;
            string t = temp[i];
            for(int j=i;j<s.size();j++)
            {
                if(t.compare(temp[j])==0 && s[j]!="x") 
                {
                    vec.push_back(s[j]);
                    s[j] = "x";
                }
            }
            if(vec.size()!=0)
            ans.push_back(vec);
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