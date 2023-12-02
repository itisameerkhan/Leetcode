#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>=INT_MIN  && n<=INT_MAX)
        {
        for(int i=0;i<=40;i++)
        {
            if(pow(2,i)==n)
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
    if(sol.isPowerOfTwo(n)) cout<<"TRUE";
    else cout<<"FALSE";
}