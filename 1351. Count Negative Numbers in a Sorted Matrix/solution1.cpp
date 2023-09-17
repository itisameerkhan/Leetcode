#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int count=0;
        for(auto i: grid)
        {
            for(auto j:i)
            {
                if(j<0) count++;
            }
        }
        return count;
    }
};

int main()
{
    vector<vector<int>> grid {{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
    Solution sol;
    cout<<sol.countNegatives(grid);
}