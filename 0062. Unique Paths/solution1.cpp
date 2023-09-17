#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int recursion(int m,int n,int a,int b,vector<vector<int>> &v)
    {
        if(v[m][n] != -1) return v[m][n];

        if(m==a || n==b) return 1;

        v[m][n] = recursion(m+1,n,a,b,v) + recursion(m,n+1,a,b,v);

        return v[m][n];
    }
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> v(m,vector<int>(n,-1));
        return recursion(0,0,m-1,n-1,v);
    }
};
int main()
{
    Solution sol;
    int m,n 
    cin>>m>>n;
    cout<<sol.uniquePaths(m,n);
}