#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int guess(int n)
    {
        int pick = 1240808008;
        if(pick == n) return 0;
        else if(pick > n) return 1;
        else if(pick < n) return -1;
        return 111;
    }
    int guessNumber(int n)
    {
        while(n!=0)
        {
            if(guess(n)==-1) 
            {
                while(guess(n)==-1) n--;
            }
            else if(guess(n) == 1) n++;
            else if(guess(n) == 0) return n;
        }
        return n;
    }
};
int main()
{
    int n = 1792997410;
    Solution sol;
    cout<<sol.guessNumber(n);
}