#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setRow(int row, int colLength, vector<vector<int>> &matrix)
    {
        for(int i=0;i<colLength; i++)
        {
            if(matrix[row][i] != 0) matrix[row][i] = -1;
        }
    }
    void setColumn(int col, int rowLength, vector<vector<int>> &matrix)
    {
        for(int i=0;i<rowLength;i++)
        {
            if(matrix[i][col] != 0) matrix[i][col] = -1;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        cout<<matrix.size()<<" - "<<matrix[0].size()<<endl;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j] == 0) 
                {
                    setRow(i, matrix[i].size(), matrix);
                    setColumn(j, matrix.size(), matrix);
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j] == -1) matrix[i][j] = 0;
            }
        }
    }
};

int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> matrix;
    for(int i=0;i<m;i++)
    {
        vector<int> row(n);
        for(int j=0;j<n;j++)
        {
            cin>>row[j];
        }
        matrix.push_back(row);
    }
    Solution sol;
    sol.setZeroes(matrix);
    for(auto i: matrix) 
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
} 


/*
Algorithm : Brute Force
Time Complexity: O(n * m) * O(n * m) + O(m + n) -> O(n²) 
Space Complexity: O(m * n) -> O(n²)

Runtime -> 17ms Beats: 9.35 %
Memory -> 13.85MB Beats: 35.07 %

*/