#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int col0 = 1;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0; // mark i first row

                    if(j != 0) matrix[0][j] = 0; // mark i first column 
                    else col0 = 0;
                }
            }
        }  
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[i].size();j++)
            {
                if(matrix[i][j] != 0)
                {
                    if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
                }
            }
        }
        if(matrix[0][0] == 0) 
        {
            for(int i=0;i<matrix[0].size();i++)
            {
                matrix[0][i] = 0;
            }
        }
        if(col0 == 0) 
        {
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][0] = 0;
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
Algorithm : Optimal
Time Complexity: O (2 * n * m) -> O(n²) 
Space Complexity: O (1)

Runtime: 10ms Beats: 70.21%
Memory: 13.74mb Beats: 55.79%
*/