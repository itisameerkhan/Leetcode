#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    bool searchMatrix(vector<vector<int>> &matrix,int target)
    {
        for(auto i: matrix)
        {
            for(auto j: i)
            {
                if(j == target) return true;
            }
        }
        return false;
    }
};
int main()
{
    vector<vector<int>> matrix = {{1,3,5,7},
                                  {10,11,16,20},
                                  {23,30,34,60}};
    int target = 3;

    Solution sol;
    if(sol.searchMatrix(matrix,target)) cout<<"TRUE";
    else cout<<"FALSE";
}