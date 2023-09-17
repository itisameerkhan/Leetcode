#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getRow(int n)
    {
        vector<int> ans(n+1),prev(n+1);

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i) ans[j] = 1;
                else ans[j] = prev[j] + prev[j-1];
            }
            prev = ans;
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    int n=4;
    vector<int> ans = sol.getRow(n);
    for(auto i:ans) cout<<i<<" ";
}