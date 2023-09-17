#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int count=0;
        int temp=0;
        for(auto i:m)
        {
            if(i.second%2==0) count += i.second;
        }
        return count+1;
    }
};

int main()
{
    string s;
    cin>>s;
    Solution sol;
    cout<<sol.longestPalindrome(s);
}