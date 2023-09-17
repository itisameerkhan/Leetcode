#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int n) 
    {
        string ans;
        while(n)
        {
            if(n%26==0)
            {
                ans += 'Z';
                n--;
            }
            else 
            {
                ans += (n%26-1)+'A';
            }
            n/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main()
{
    int n;
    cin>>n;
    Solution sol;
    string ans = sol.convertToTitle(n);
    cout<<ans;
}