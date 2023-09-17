#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void DFS(vector<vector<int>> &grid,int row,int col)
    {
        if(row<0 || col<0 || row>=grid.size() || col>=grid[0].size() || grid[row][col]==0) return;
        grid[row][col]=0;

        DFS(grid,row,col-1);
        DFS(grid,row,col+1);
        DFS(grid,row-1,col);
        DFS(grid,row+1,col);

    }
    int numEnclaves(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0 || i==n-1 || j==m-1)
                DFS(grid,i,j);
            }
        }

        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1) count++;
            }
        }
        return count;
    }
};
int main()
{
    vector<vector<int>> v = {{1,0,0,0,1},
                             {0,1,1,1,0},
                             {0,0,1,1,0},
                             {1,1,0,0,1},
                             {1,1,1,1,1}};
    Solution s;
    cout<<s.numEnclaves(v);                         
}