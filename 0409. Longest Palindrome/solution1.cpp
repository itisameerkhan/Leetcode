#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char,int> map;
        int odd = false;
        int result = 0;
        for(int i=0;i<s.size();i++) map[s[i]]++;
        for(auto i: map) {
            if(i.second%2 == 1 && odd == false) {
                odd = true;
                result++;
            }
            if(i.second > 1) {
                result += i.second - (i.second % 2);
            }
        }
        return result;
    }
};

int main()
{
    string s;
    cin>>s;
    Solution sol;
    cout<<sol.longestPalindrome(s);
}