#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniquePaths(int m, int n,int i=0,int j=0)
    {
        if(i>=m || j>=n) return 0;
        if(i == m-1 && j== n-1) return 1;
        return uniquePaths(m,n,i+1,j) + uniquePaths(m,n,i,j+1);
    }
};
int main()
{
    Solution sol;
    int m,n;
    cin>>m>>n;
    cout<<sol.uniquePaths(m,n);
}