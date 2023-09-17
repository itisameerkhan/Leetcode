#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool buddyStrings(string a, string b) {
        for(int i=0;i<a.size()-1;i++)
        {
            for(int j=i+1;j<a.size();j++)
            {
                swap(a[i],a[j]);
                if(a==b) return true;
                else swap(a[i],a[j]);
            }
        }
        return false;
    }
};

int main()
{
    string a,b;
    cin>>a>>b;
    Solution sol;
    if(sol.buddyStrings(a,b)) cout<<"true";
    else cout<<"false";
}