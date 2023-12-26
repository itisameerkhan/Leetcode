#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        vector<vector<int>> visited(rowSize, vector<int>(colSize, 0));
        vector<vector<int>> distance(rowSize, vector<int>(colSize, 0));
        queue<pair<pair<int,int>, int>> q;

        for(int i=0;i<rowSize;i++) {
            for(int j=0;j<colSize;j++) {
                if(matrix[i][j] == 0) {
                    visited[i][j] = 1;
                    q.push({{i,j}, 0});
                }
            }
        }

        int delRow[] = {-1,0,1,0};
        int delCol[] = {0,1,0,-1};

        while(!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            q.pop();
            distance[row][col] = steps;

            for(int i=0;i<4;i++) {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];

                if(nRow >=0 && nCol >=0 && nRow < rowSize && nCol < colSize && visited[nRow][nCol] == 0) {
                    visited[nRow][nCol] = 1;
                    q.push({{nRow,nCol},steps+1});
                }
            }
        }
        return distance;
    }
};

int main()
{
    vector<vector<int>> mat = {{0,0,0},
                               {0,1,0},
                               {1,1,1}};
    Solution sol;
    vector<vector<int>> result = sol.updateMatrix(mat);
    for(auto i: result) {
        for(auto j: i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}