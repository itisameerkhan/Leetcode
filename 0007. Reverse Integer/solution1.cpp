#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long sum=0;
            while(x)
            {
                sum = (sum*10) + (x%10);
                x/=10;
            }
        if(sum>INT_MIN && sum<INT_MAX)
        {
            return sum;
        }
        return 0;
    }
};
int main()
{
    Solution sol;
    int x = 123;
    cout<<sol.reverse(x);
}