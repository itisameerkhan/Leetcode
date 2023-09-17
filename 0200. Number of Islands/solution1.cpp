#include<iostream>
#include<vector>
using namespace std;

void mark(vector<vector<char>> &grid,int i,int j)
{
    int n = grid.size();
    int m = grid[0].size();
    if(i<0 || j<0 || i>=n || j>=m || grid[i][j]=='0') return;

    grid[i][j] = '0';

    mark(grid,i-1,j);
    mark(grid,i+1,j);
    mark(grid,i,j-1);
    mark(grid,i,j+1);
} 
int numberofIslands(vector<vector<char>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    int count=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='1')
            {
                count++;
                mark(grid,i,j);
            }
        }
    }
    return count;
}
int main()
{
    vector<vector<char>> grid = {{'1','1','1','1','0'},
                                 {'1','1','0','1','0'},
                                 {'1','1','0','0','0'},
                                 {'0','0','0','0','0'}};

    cout<<numberofIslands(grid);                            
}