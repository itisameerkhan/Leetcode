#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void solve(int col,vector<string> &board,vector<vector<string>> &ans,int n,vector<int> &leftRow,vector<int> &upperDiagonal,vector<int> &lowerDiagonal)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(leftRow[row]==0 && upperDiagonal[row+col]==0 && lowerDiagonal[n-1+col-row]==0)
            {
                board[row][col] = 'Q';
                leftRow[row] = 1;
                upperDiagonal[row+col] = 1;
                lowerDiagonal[n-1+col-row] = 1;
                solve(col+1,board,ans,n,leftRow,upperDiagonal,lowerDiagonal);
                board[row][col] = '.';
                leftRow[row] = 0;
                upperDiagonal[row+col] = 0;
                lowerDiagonal[n-1+col-row] = 0;
            }
        }
    }
    vector<vector<string>> NQueens(int n)
    {
        vector<vector<string>> ans;
        string s(n,'.');
        vector<string> board(n);
        for(int i=0;i<n;i++) board[i] = s;
        vector<int> leftRow(n,0);
        vector<int> upperDiagonal(2*n-1,0);
        vector<int> lowerDiagonal(2*n-1,0);
        solve(0,board,ans,n,leftRow,upperDiagonal,lowerDiagonal);
        return ans;
    }
};
int main()
{
    Solution s;
    int n = 4;
    vector<vector<string>> ans = s.NQueens(n);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[0].size();j++)
        {
            cout<<ans[i][j]<<"  ";
            cout<<endl;
        }
        cout<<endl;
    }
}

/*
TIME COMPLEXITY : O(N! * N)
SPACE COMPLEXITY: O(N)
*/