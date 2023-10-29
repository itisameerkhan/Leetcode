#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        vector<int> rows(matrix.size());
        vector<int> columns(matrix[0].size());

        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j] == 0) 
                {
                    rows[i] = 1;
                    columns[j] = 1;
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(rows[i] == 1 || columns[j] == 1)
                {
                    matrix[i][j] = 0;
                }
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
Algorithm : Better
Time Complexity: O (2 * n * m) -> O(n²) 
Space Complexity: O (m + n) -> O(n)

Runtime: 16ms Beats: 18.94%
Memory: 13.76mb Beats: 55.79%
*/