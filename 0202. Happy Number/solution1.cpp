#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(int n)
    {
        int ans=0;
        while(n)
        {
            int digit = n%10;
            ans += digit*digit;
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) 
    {
        while(n>5)
        {
            n = solve(n);
        }
        if(n==1) return true;
        return false;
    }
};
int main()
{
    int n;
    cin>>n;
    Solution sol;
    cout<<sol.isHappy(n);
}