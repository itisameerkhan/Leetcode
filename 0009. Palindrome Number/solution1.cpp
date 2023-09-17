#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    bool isPalindrome(int x)
    {
        long sum=0;
        int temp=x;
        if(x<0) return false;
        if(x>INT_MIN && x<INT_MAX)
        {
            while(x)
            {
                sum = (sum*10) + (x%10);
                x/=10;
            }
            if(sum==temp) return true;
        }
        return false;
    }
};
int main()
{
    int x = 121;
    Solution s;
    cout<<s.isPalindrome(x);
}