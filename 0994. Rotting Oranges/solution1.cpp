#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int i,int j,int r,int c)
{
    if(i>=0 && i<r && j>=0 && j<c) return true;
    return false;
}
int rottenOranges(vector<vector<int>> v)
{
    bool changed = false;
    int no=2;
    while(true)
    {
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[0].size();j++)
            {
                if(v[i][j]==no)
                {
                    if(isSafe(i+1,j,v.size(),v[0].size()) && v[i+1][j]==1)
                    {
                        v[i+1][j] = v[i][j] + 1;
                        changed = true;
                    }
                    if(isSafe(i,j+1,v.size(),v[0].size()) && v[i][j+1]==1)
                    {
                        v[i][j+1] = v[i][j] + 1;
                        changed = true;
                    }
                    if(isSafe(i-1,j,v.size(),v[0].size()) && v[i-1][j]==1)
                    {
                        v[i-1][j] = v[i][j]+1;
                        changed = true;
                    }
                    if(isSafe(i,j-1,v.size(),v[0].size()) && v[i][j-1]==1)
                    {
                        v[i][j-1] = v[i][j]+1;
                        changed = true;
                    }
                }
            }
        }
        if(!changed) break;
        changed = false;
        no++;
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
        {
            if(v[i][j] == 1) return -1;
        }
    }
    return no-2;
}
int main()
{
    vector<vector<int>> v = {{2,1,1},
                             {1,1,0},
                             {0,1,1}};

    cout<<rottenOranges(v);               
}