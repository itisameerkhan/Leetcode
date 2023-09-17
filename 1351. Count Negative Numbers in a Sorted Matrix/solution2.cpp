#include<bits/stsdc++.h>

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int row = grid.size()-1;
        int col = grid[0].size()-1;
        int count=0;
        while(grid[row][col] < 0)
        {
            count++;
            col--;
            if(col==-1)
            {
                row--;
                col = grid[0].size();
            }
        }
        return count;
    }
};
int main()
{
    
}