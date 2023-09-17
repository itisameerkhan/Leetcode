#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divide(int x, int y) {
        if(x == INT_MIN && y == -1)
        {
            return INT_MAX;
        }
        return x/y;
    }
};
int main()
{
    int x,y;
    cin>>x>>y;
    Solution sol;
    cout<<sol.divide(x,y);
}