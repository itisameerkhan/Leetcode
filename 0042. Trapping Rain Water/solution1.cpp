#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    int min(int a,int b)
    {
        return a<b?a:b;
    }
    int max(int a,int b)
    {
        return a>b?a:b;
    }
    int trap(vector<int> &v)
    {
        int n = v.size();
        int water = 0;
        if(n==0) return 0;
        int leftMax[n],rightMax[n];
        leftMax[0] = v[0];
        for(int i=1;i<n;i++)
        {
            leftMax[i] = max(v[i],leftMax[i-1]);
        }
        rightMax[n-1] = v[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rightMax[i] = max(v[i],rightMax[i+1]);
        }
        for(int i=0;i<n;i++)
        {
            water += min(leftMax[i],rightMax[i]) - v[i];
        }
        return water;
    }
};
int main()
{
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    Solution s;
    cout<<s.trap(height);
}