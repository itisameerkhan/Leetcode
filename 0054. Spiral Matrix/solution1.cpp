#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

class Solution
{
    public:
    void spiralMatrix(vector<vector<int>> v)
    {
        int rowstart=0,rowend=v.size();
        int colstart=0,colend=v[0].size();

        while(rowstart<rowend && colstart<colend)
        {
            for(int i=colstart;i<colend;i++) cout<<" "<<v[rowstart][i]<<" ";
            rowstart++;
            if(rowstart>=rowend || colstart>=colend) return;
            for(int i=rowstart;i<rowend;i++) cout<<" "<<v[i][colend-1]<<" ";
            colend--;
            if(rowstart>=rowend || colstart>=colend) return;
            for(int i=colend-1;i>=colstart;i--) cout<<" "<<v[rowend-1][i]<<" ";
            rowend--;
            if(rowstart>=rowend || colstart>=colend) return;
            for(int i=rowend-1;i>=rowstart;i--) cout<<" "<<v[i][colstart]<<" ";
            colstart++;
        }
    }
};
int main()
{
    Solution s;
    // vector<vector<int>> v = {{1,2,3,4},
    //                          {14,15,16,5},
    //                          {13,20,17,6},
    //                          {12,19,18,7},
    //                          {11,10,9,8}};
    vector<vector<int>> v = {{1,2,3,4},
                             {5,6,7,8},
                             {9,10,11,12}};
    s.spiralMatrix(v);                         
}