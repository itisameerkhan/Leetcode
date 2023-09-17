#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int n) 
    {
        vector<vector<int>> output(n);
        for(int i=0;i<n;i++)
        {
            output[i].resize(i+1,1);
            for(int j=1;j<i;j++)
            {
                output[i][j] = output[i-1][j-1] + output[i-1][j];
            }
        }
        return output;
    }
};
int main()
{
    int n=4;
    Solution sol;
    vector<vector<int>> ans = sol.generate(n);
    for(auto i: ans)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}