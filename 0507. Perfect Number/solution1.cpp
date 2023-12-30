#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        long sum=0;
        if(num>INT_MIN && num<99999999)
        {
            for(int i=1;i<num;i++)
            {
                if(num%i==0)
                {
                    sum += i;
                }
            }
        }
        if(sum==num)
            return true;
        
        return false;
        
    }
};
int main() 
{
    int n = 28;
    Solution sol;
    if(sol.checkPerfectNumber(n)) cout<<"true";
    else cout<<"false";
}