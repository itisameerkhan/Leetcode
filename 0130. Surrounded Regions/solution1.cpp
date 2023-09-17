#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public:
    void dfs(vector<vector<char>> &board,int i,int j,int n,int m)
    {
        if(i<0 || j<0 || i>=n || j>=m || board[i][j]!='O') return;
        board[i][j] = '#';
        dfs(board,i-1,j,n,m);
        dfs(board,i+1,j,n,m);
        dfs(board,i,j-1,n,m);
        dfs(board,i,j+1,n,m);
    }
    void solve(vector<vector<char>> &board)
    {
        int n = board.size();
        int m = board[0].size();

        for(int i=0;i<m;i++)
        {
            if(board[0][i]=='O') dfs(board,0,i,n,m);
            if(board[n-1][i]=='O') dfs(board,n-1,i,n,m);
        }
        for(int i=0;i<n;i++)
        {
            if(board[i][0]=='O') dfs(board,i,0,n,m);
            if(board[i][m-1]=='O') dfs(board,i,m-1,n,m);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O') board[i][j]='X';
                if(board[i][j]=='#') board[i][j]='O';
            }
        }
    }
};
int main()
{
    vector<vector<char>> board = {{'X', 'X', 'X', 'X'}, 
                                 {'X', 'O', 'X', 'X'}, 
                                 {'X', 'O', 'O', 'X'}, 
                                 {'X', 'O', 'X', 'X'}, 
                                 {'X', 'X', 'O', 'O'}};

    Solution s;
    s.solve(board);
    for(auto i: board)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }  
}