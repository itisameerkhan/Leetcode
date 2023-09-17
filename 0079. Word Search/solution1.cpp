#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    bool traverse(vector<vector<char>> &board,string word,int i,int j,int index)
    {
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j] != word[index]) return false;
        if(index == word.size()-1) return true; 
        if(board[i][j] == word[index])
        {
            bool a = traverse(board,word,i,j+1,index+1); if(a == true) return true;
            bool b = traverse(board,word,i,j-1,index+1); if(b == true) return true;
            bool c = traverse(board,word,i+1,j,index+1); if(c == true) return true;
            bool d = traverse(board,word,i-1,j,index+1); if(d == true) return true;
        }
    bool exist(vector<vector<char>> &board,string word)
    {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j] == word[0])
                {
                    return traverse(board,word,i,j,0);
                }
            }
        }
        return false;
    }
};
int main()
{
    vector<vector<char>> board = {{'A','B','C','E'},
                                  {'S','F','C','S'},
                                  {'A','D','E','E'}};
    string word = "ABCCED";

    Solution sol;
    if(sol.exist(board,word)) cout<<"TRUE";
    else cout<<"FALSE";
}