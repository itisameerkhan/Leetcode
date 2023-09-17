#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    int hammingWeight(uint32_t n)
    {
        int count=0;
        for(int i=1;i<=32;i++)
        {
            count += n&1;
            n = n>>1;
        }
        return count;
    }
};
int main()
{
    uint32_t n = 00000000000000000000000000001011;
    Solution s;
    cout<<s.hammingWeight(n);
}