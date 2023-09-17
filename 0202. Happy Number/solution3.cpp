#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(int n)
    {
        if(n==0) return 0;
        return (n%10)*(n%10) + solve(n/10);
    }
    bool isHappy(int n) 
    {
        int ans = solve(n);
        while(ans>5)
        {
            ans = solve(ans);
        }
        if(ans==1) return true;
        return false;
    }
};
int main()
{
    int n = 82;
    Solution sol;
    sol.isHappy(n);
}