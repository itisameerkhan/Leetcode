#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if(n==1)
            return true;
        else if(n==0)
            return false;
        
        while(n!=1)
        {
            if(n%2==0)
                n/=2;
            else if(n%3==0)
                n/=3;
            else if(n%5==0)
                n=n/5;
            else 
                return false;
        }
        if(n==1)
            return true;
        
        return false;   
    }
};
int main()
{
    int n = 6;
    Solution sol;
    if(sol.isUgly(n)) cout<<"TRUE";
    else cout<<"FALSE";
}