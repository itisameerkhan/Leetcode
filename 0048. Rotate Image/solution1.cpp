#include<iostream>
#include<vector>
using namespace std;

void rotateImage(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<m;j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    } 
    int i=0,j=m-1;
    while(i<n)
    {
        int start=0;
        int end=m-1;
        while(start<end)
        {
            int temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;
            start++;
            end--;
        }
        i++;
    }    
}
int main()
{
    vector<vector<int>> matrix = {{1,2,3},
                                  {4,5,6},
                                  {7,8,9}};
    rotateImage(matrix);

    for(auto i: matrix)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }                              
}