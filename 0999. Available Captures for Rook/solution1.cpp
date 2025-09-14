#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int count=0;
        int rookLocation[2] = {0,0};
        for(int i=0;i<board.size();i++) {
            for(int j=0;j<board[i].size();j++) {
                if(board[i][j]=='R') {
                    rookLocation[0] = i;
                    rookLocation[1] = j;
                } 
            }
        }
        for(int i=rookLocation[0]-1;i>=0;i--) {
            if(board[i][rookLocation[1]] == 'p') {
                count++;
                break;
            }
            else if(board[i][rookLocation[1]] == 'B') break;
        }
        for(int i=rookLocation[0];i<board.size();i++) {
            if(board[i][rookLocation[1]] == 'B') break;
            else if(board[i][rookLocation[1]] == 'p') {
                count++;
                break;
            }
        }
        for(int i=rookLocation[1];i>=0;i--) {
            if(board[rookLocation[0]][i] == 'B') break;
            if(board[rookLocation[0]][i] == 'p') {
                count++;
                break;
            }
        }
        for(int i=rookLocation[1];i<8;i++) {
            if(board[rookLocation[0]][i] == 'B') break;
            if(board[rookLocation[0]][i] == 'p') {
                count++;
                break;
            }
        }
        return count;
    }
};
int main() {
    vector<vector<char>> board =  {
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','p','.','.','.','.'},
        {'.','.','.','R','.','.','.','p'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','p','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'}
    };
    Solution s;
    cout<<s.numRookCaptures(board)<<endl;
}