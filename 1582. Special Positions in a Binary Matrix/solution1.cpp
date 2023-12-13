#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int checkDigit(vector<vector<int>> &mat, int row, int col, int rowSize,int colSize) {
        for(int i=0;i<rowSize;i++) {
            if(mat[row][i] == 1 && i != col) return 0;      
        }
        for(int i=0;i<colSize;i++) {
            if(mat[i][col] == 1 && row != i) return 0;
        }
        return 1;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int result = 0;
        for(int i=0;i<mat.size();i++) {
            for(int j=0;j<mat[i].size();j++) {
                if(mat[i][j] == 1) {
                    result += checkDigit(mat, i, j, mat[i].size(), mat.size());
                }
            }
        }
        return result;
    }
};

int main()
{
    vector<vector<int>> mat = {{1,0,0},
                               {0,0,1},
                               {1,0,0}};
    Solution sol;
    cout<<sol.numSpecial(mat);
}