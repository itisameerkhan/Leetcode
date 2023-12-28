#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num>INT_MIN && num<INT_MAX)
        {
            for(long i=0;i<=num;i++)
            {
                if(i*i==num)
                    return true;
            }
        }
        return false;
        
    }
};
int main()
{
    int n = 16;
    Solution sol;
    if(sol.isPerfectSquare(n)) cout<<"true";
    else cout<<"false";
}