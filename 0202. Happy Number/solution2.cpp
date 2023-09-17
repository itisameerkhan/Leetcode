#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(int n,int &sum)
    {
        if(n==0 && sum==1) return sum;
        if(n==0 && sum>5) 
        {
            n=sum;
            sum=0;
        }
        if(n==0) return sum;
        sum += (n%10) * (n%10);
        solve(n/10,sum);
        return sum;
    }
    bool isHappy(int n) 
    {
        int sum=0;
        int output = solve(n,sum);
        if(output==1) return true;
        return false;
    }
};
int main()
{
    int n = 82;
    Solution sol;
    sol.isHappy(n);
}