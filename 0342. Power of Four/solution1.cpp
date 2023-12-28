#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=0;i<50;i++)
        {
            if(pow(4,i)==n)
                return true;
        }
        return false;
        
    }
};
int main()
{
    int n = 16;
    Solution sol;
    if(sol.isPowerOfFour(n)) cout<<"TRUE";
    else cout<<"FALSE";
}