#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string a, string b) {
        int arr[26] = {0};
        for(int i=0;i<a.size();i++) arr[a[i]-'a']++;
        for(int i=0;i<b.size();i++)
        {
            arr[b[i] - 'a']--;
        }
        for(int i=0;i<26;i++) 
        {
            if(arr[i] != 0) return false;
        }
        return true;
    }
};


int main()
{
    string a = "aa";
    string b = "aab";
    Solution sol;
    if(sol.canConstruct(a,b)) cout<<"TRUE";
    else cout<<"FALSE";
}