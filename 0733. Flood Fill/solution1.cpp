#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void changeColor(vector<vector<int>> &v,int i,int j,int color,int c)
    {
        if(i<0 || j<0 || i>=v.size() || j>=v[0].size() || v[i][j]!=c || v[i][j]==color)     
        return;

        v[i][j] = color;

        changeColor(v,i,j+1,color,c);
        changeColor(v,i,j-1,color,c);
        changeColor(v,i+1,j,color,c);
        changeColor(v,i-1,j,color,c);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int i, int j, int color) 
    {
        vector<vector<int>> v = image;
        int c = image[i][j] ;
        changeColor(v,i,j,color,c);
        return v;
    }
};

int main()
{
    vector<vector<int>> image = {{1,1,1},
                                 {1,1,0},
                                 {1,0,1}};

    Solution s;                             
    vector<vector<int>> ans = s.floodFill(image,1,1,2);

    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[0].size();j++)
        {
            cout<<ans[i][j]<<" "; 
        }
        cout<<endl;
    }               

}