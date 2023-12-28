#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i=0;i<50;i++)
        {
            if(pow(3,i)==n)
                return true;
        }
        return false;
        
    }
};

int main()
{
    int n = 27;
    Solution sol;
    if(sol.isPowerOfThree(n)) cout<<"TRUE";
    else cout<<"FALSE";
}